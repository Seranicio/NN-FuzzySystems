%Simulation
sim('simulinkPartB');

%Getting simulation data - Input and Output.
u = input.data';
y = output.data';

%building cluster.
cluster = [y(3:(end-1));y(2:(end-2));y(1:(end-3));u(3:(end-1));u(2:(end-2));u(1:(end-3));y(4:end)];
cluster = cluster';

indices_cluster = randperm(size(cluster,1));
indices_treino = indices_cluster(1:round(0.7*size(cluster,1)));
indices_teste = indices_cluster((round(0.7*size(cluster,1))+1):end);
treino = cluster(indices_treino,:);
teste = cluster(indices_teste,:);

save('cluster.dat', 'cluster', '-ascii');
save('treino.dat', 'treino', '-ascii');
save('teste.dat', 'teste', '-ascii');

clear all, close all, clc
load('cluster.dat');
load('treino.dat');
load('teste.dat');

% Gerar os .fis com as técnicas de clustering: subtractive clustering e Fuzzy C-Means 
radii = 0.5;
subtrativo = genfis2(treino(:,1:(end-1)),treino(:,end),radii);
fcm = genfis3(treino(:,1:(end-1)), treino(:,end),...
    'sugeno',3,[NaN;NaN;NaN;0]);

% Por retropropagação
[subtrativo_retro,~,~,~,~]= anfis(treino,subtrativo,[100 0 0.01 0.9 1.1],[0 0 0 1],teste,0);
[fcm_retro,~,~,~,~]= anfis(treino,fcm,[100 0 0.01 0.9 1.1],[0 0 0 1],teste,0);

% Por método híbrido
[subtrativo_hibrido,~,~,~,~]= anfis(treino,subtrativo,[100 0 0.01 0.9 1.1],[0 0 0 1],teste,1);
[fcm_hibrido,~,~,~,~]= anfis(treino,fcm,[100 0 0.01 0.9 1.1],[0 0 0 1],teste,1);

% Calcular os erros
subtrativo_retro= evalfis(teste(:,1:(end-1)),subtrativo_retro);
fcm_retro= evalfis(teste(:,1:(end-1)),fcm_retro);
subtrativo_hibrido= evalfis(teste(:,1:(end-1)),subtrativo_hibrido);
fcm_hibrido= evalfis(teste(:,1:(end-1)),fcm_hibrido);

subtrativo_retro_mse = sum((teste(:,end)-subtrativo_retro).^2)/length(subtrativo_retro);
fcm_retro_mse = sum((teste(:,end)-fcm_retro).^2)/length(fcm_retro);

subtrativo_hibrido_mse = sum((teste(:,end)-subtrativo_hibrido).^2)/length(subtrativo_hibrido);
fcm_hibrido_mse = sum((teste(:,end)-fcm_hibrido).^2)/length(fcm_hibrido);
