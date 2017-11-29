%Input
Scale1 = 100;
Scale2 = 1;
%making variable of Scale 1 and Scale 2 for input in simulink.
t = 0.2 * [0:49]';
t2 = [1:263]';
s1.time = t;
s1.signals.values = zeros(50,1);
s1.signals.values(1:50) = Scale1;
s1.signals.dimensions = 1;
s2.time = t;
s2.signals.values = zeros(50,1);
s2.signals.values(1:50) = Scale2;
s2.signals.dimensions = 1;

%Analising All Fuzzy Systems.
error = 0;

fuzzydir = dir('FuzzySystems');

fuzzysystems = cell(1,length(fuzzydir)-2);
individualResults = cell(2,length(fuzzydir)-2);

%handle file names.
for i=3:length(fuzzydir)
    fuzzysystems{i-2} = fuzzydir(i).name;
    individualResults{1,i-2} = fuzzydir(i).name;
%     disp(fuzzydir(i).name);
end

fileout = "Scale1=" + Scale1 + "&Scale2=" + Scale2;
fileout = convertStringsToChars(fileout);
mkdir(fileout);

for i=1:length(fuzzysystems)
    %handle data for simulation.
    filename = "FuzzySystems/" + fuzzysystems{i};
    filename = convertStringsToChars(filename);
    disp("Simulation with " + filename);
    
    copyfile(filename,'Fuzzy.fis');
    %run simulation.
    sim('simulinkforTests'); 
    
    plotdata = dataforplot.data;
    timeY = dataforplot.Time;
    axisX1 = plotdata(:,1);
    axisX2 = plotdata(:,2);
    
    %Saving Ref and Out (by ploting the results).
    figure(1) , hold on;
    plot(timeY,axisX1,'blue'); %Yellow
    plot(timeY,axisX2,'red'); %red
%   set(gca,'Color','k'); %black background
%   set(gcf, 'InvertHardCopy', 'off'); % Retain background color.
    %getting better view of graph
    aux = min(axisX1);
    aux2 = min(axisX2);
    minimum = min(aux,aux2); 
    aux = max(axisX1);
    aux2 = max(axisX2);
    maximum = max(aux,aux2); 
    ylim([minimum-0.1 maximum+0.1]);
    xlim([-1 301])
    grid on
    %removing whitespace
    ax = gca;
    outerpos = ax.OuterPosition;
    ti = ax.TightInset; 
    left = outerpos(1) + ti(1);
    bottom = outerpos(2) + ti(2);
    ax_width = outerpos(3) - ti(1) - ti(3);
    ax_height = outerpos(4) - ti(2) - ti(4);
    ax.Position = [left bottom ax_width ax_height];
    %saving figure;
   
    saveas(figure(1),fileout + "/S1=" + Scale1 + "_S2=" + Scale2 + "_" +  individualResults{1,i}(1:end-4) + ".png");
    
    close;
    error = error + max(simout.data); %get's the Integral Error.
    
    %individual Results.
    individualResults{2,i} = max(simout.data); %register individual error.
    disp('Median' + error/length(fuzzysystems));
    fileID = fopen(fileout + "/S1=" + Scale1 + "_S2=" + Scale2 + "_" +  individualResults{1,i}(1:end-4) + ".txt" ,'w+');
    fprintf(fileID,"Error: %g", individualResults{2,i});
    fclose(fileID);
end

%Saving Integral Medium Error.
format long g; %removing exponencial output. Converting to long.
fileID = fopen(fileout + "/S1=" + Scale1 + "_S2=" + Scale2 + "-MedianError" + ".txt" ,'w');
fprintf(fileID,"Error: %d%", error/length(fuzzysystems));
fclose(fileID);
disp('Median' + error/length(fuzzysystems));

disp("Finished");