  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% rtP.DefuzzifyOutputs_SimulateUsing
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.EvaluateRuleAntecedents_SimulateUsing
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.EvaluateRuleConsequents_SimulateUsing
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.OutputSamplePoints_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.DesiredSignal_Amplitude
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 104;
	
	  ;% rtP.DesiredSignal_Frequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 105;
	
	  ;% rtP.TransferFunction_A
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 106;
	
	  ;% rtP.TransferFunction_C
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 109;
	
	  ;% rtP.LoadDisturbance_Time
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 112;
	
	  ;% rtP.LoadDisturbance_Y0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 113;
	
	  ;% rtP.LoadDisturbance_YFinal
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 114;
	
	  ;% rtP.Scale1_Gain
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 115;
	
	  ;% rtP.Scale2_Gain
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 116;
	
	  ;% rtP.Integrator_IC
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 117;
	
	  ;% rtP.Disruptioninactuator_Time
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 118;
	
	  ;% rtP.Disruptioninactuator_Y0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 119;
	
	  ;% rtP.Disruptioninactuator_YFinal
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 120;
	
	  ;% rtP.QuadraticErrorIntegrator_IC
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 121;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtB.n1iltubnat
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ahwh2px2qe
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.dh3eytkr5d
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.fygskmedmk
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.oafjprtsem
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.o5sexfmclb
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.kkhomkyhz4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.fekdhvjvpe
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.my2skaywwg
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.edpf0xgtvs
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.eoadcgpmns
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ngylpklymc
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.opjuahj3ep
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.fmvx05nmht.LoggedData
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.kon2e1tkbo.LoggedData
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.gn4ppr4hfb.LoggedData
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 957368115;
  targMap.checksum1 = 1166430728;
  targMap.checksum2 = 2858533586;
  targMap.checksum3 = 2287209295;

