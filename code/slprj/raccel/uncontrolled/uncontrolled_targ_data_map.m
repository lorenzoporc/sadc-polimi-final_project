  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
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
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.spacecraft
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.sensors
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.constants
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.orbit
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.observer
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.control
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 109;
      section.data(109)  = dumData; %prealloc
      
	  ;% rtP.NormalizeVector_maxzero
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.NormalizeVector_maxzero_pmmnk1unkt
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.NormalizeVector_maxzero_mhggypqjqf
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.NormalizeVector_maxzero_djt22qmkdo
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.vSun_n_Y0
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Constant_Value
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Constant1_Value
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.RandomNumber_Mean
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtP.RandomNumber_StdDev
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtP.RandomNumber_Seed
	  section.data(10).logicalSrcIdx = 15;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtP.RandomNumber1_Mean
	  section.data(11).logicalSrcIdx = 16;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtP.RandomNumber1_StdDev
	  section.data(12).logicalSrcIdx = 17;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtP.RandomNumber1_Seed
	  section.data(13).logicalSrcIdx = 18;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtP.RandomNumber2_Mean
	  section.data(14).logicalSrcIdx = 19;
	  section.data(14).dtTransOffset = 15;
	
	  ;% rtP.RandomNumber2_StdDev
	  section.data(15).logicalSrcIdx = 20;
	  section.data(15).dtTransOffset = 16;
	
	  ;% rtP.RandomNumber2_Seed
	  section.data(16).logicalSrcIdx = 21;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtP.Memory_InitialCondition
	  section.data(17).logicalSrcIdx = 22;
	  section.data(17).dtTransOffset = 18;
	
	  ;% rtP.RandomNumber_Mean_j325veq3h4
	  section.data(18).logicalSrcIdx = 23;
	  section.data(18).dtTransOffset = 27;
	
	  ;% rtP.RandomNumber_StdDev_osyvkm1nbd
	  section.data(19).logicalSrcIdx = 24;
	  section.data(19).dtTransOffset = 28;
	
	  ;% rtP.RandomNumber_Seed_bcyzbehizb
	  section.data(20).logicalSrcIdx = 25;
	  section.data(20).dtTransOffset = 29;
	
	  ;% rtP.RandomNumber1_Mean_cglvlehpgy
	  section.data(21).logicalSrcIdx = 26;
	  section.data(21).dtTransOffset = 30;
	
	  ;% rtP.RandomNumber1_StdDev_pa113sydms
	  section.data(22).logicalSrcIdx = 27;
	  section.data(22).dtTransOffset = 31;
	
	  ;% rtP.RandomNumber1_Seed_ddcozcfvqh
	  section.data(23).logicalSrcIdx = 28;
	  section.data(23).dtTransOffset = 32;
	
	  ;% rtP.RandomNumber2_Mean_iqxzkifvrj
	  section.data(24).logicalSrcIdx = 29;
	  section.data(24).dtTransOffset = 33;
	
	  ;% rtP.RandomNumber2_StdDev_elwn2e223c
	  section.data(25).logicalSrcIdx = 30;
	  section.data(25).dtTransOffset = 34;
	
	  ;% rtP.RandomNumber2_Seed_bxzdzv3qja
	  section.data(26).logicalSrcIdx = 31;
	  section.data(26).dtTransOffset = 35;
	
	  ;% rtP.RandomNumber_Mean_alfcasepyf
	  section.data(27).logicalSrcIdx = 32;
	  section.data(27).dtTransOffset = 36;
	
	  ;% rtP.RandomNumber_StdDev_a4g1wn2f41
	  section.data(28).logicalSrcIdx = 33;
	  section.data(28).dtTransOffset = 37;
	
	  ;% rtP.RandomNumber_Seed_muoxwvcrep
	  section.data(29).logicalSrcIdx = 34;
	  section.data(29).dtTransOffset = 38;
	
	  ;% rtP.RandomNumber1_Mean_fpegcxuncp
	  section.data(30).logicalSrcIdx = 35;
	  section.data(30).dtTransOffset = 39;
	
	  ;% rtP.RandomNumber1_StdDev_dwmuwurpze
	  section.data(31).logicalSrcIdx = 36;
	  section.data(31).dtTransOffset = 40;
	
	  ;% rtP.RandomNumber1_Seed_etksjukgo5
	  section.data(32).logicalSrcIdx = 37;
	  section.data(32).dtTransOffset = 41;
	
	  ;% rtP.RandomNumber2_Mean_ozab14whuo
	  section.data(33).logicalSrcIdx = 38;
	  section.data(33).dtTransOffset = 42;
	
	  ;% rtP.RandomNumber2_StdDev_ptcl32fe50
	  section.data(34).logicalSrcIdx = 39;
	  section.data(34).dtTransOffset = 43;
	
	  ;% rtP.RandomNumber2_Seed_fet4qq2uda
	  section.data(35).logicalSrcIdx = 40;
	  section.data(35).dtTransOffset = 44;
	
	  ;% rtP.Gain_Gain
	  section.data(36).logicalSrcIdx = 41;
	  section.data(36).dtTransOffset = 45;
	
	  ;% rtP.Gain1_Gain
	  section.data(37).logicalSrcIdx = 42;
	  section.data(37).dtTransOffset = 46;
	
	  ;% rtP.Gain2_Gain
	  section.data(38).logicalSrcIdx = 43;
	  section.data(38).dtTransOffset = 47;
	
	  ;% rtP.Gain_Gain_ahnizkpkvu
	  section.data(39).logicalSrcIdx = 44;
	  section.data(39).dtTransOffset = 48;
	
	  ;% rtP.Gain1_Gain_elldija22u
	  section.data(40).logicalSrcIdx = 45;
	  section.data(40).dtTransOffset = 49;
	
	  ;% rtP.Merge1_InitialOutput
	  section.data(41).logicalSrcIdx = 46;
	  section.data(41).dtTransOffset = 50;
	
	  ;% rtP.Integrator_IC
	  section.data(42).logicalSrcIdx = 47;
	  section.data(42).dtTransOffset = 51;
	
	  ;% rtP.Gain1_Gain_g1f04hzvel
	  section.data(43).logicalSrcIdx = 48;
	  section.data(43).dtTransOffset = 57;
	
	  ;% rtP.Gain_Gain_gqfasdb0wy
	  section.data(44).logicalSrcIdx = 49;
	  section.data(44).dtTransOffset = 58;
	
	  ;% rtP.Gain_Gain_ovchahezfk
	  section.data(45).logicalSrcIdx = 50;
	  section.data(45).dtTransOffset = 59;
	
	  ;% rtP.Gain_Gain_avjrptcnae
	  section.data(46).logicalSrcIdx = 51;
	  section.data(46).dtTransOffset = 60;
	
	  ;% rtP.Gain1_Gain_map4aqbp2o
	  section.data(47).logicalSrcIdx = 52;
	  section.data(47).dtTransOffset = 61;
	
	  ;% rtP.Gain2_Gain_pf4c2t2zdn
	  section.data(48).logicalSrcIdx = 53;
	  section.data(48).dtTransOffset = 62;
	
	  ;% rtP.Gain1_Gain_lnkn1c2sqc
	  section.data(49).logicalSrcIdx = 54;
	  section.data(49).dtTransOffset = 63;
	
	  ;% rtP.Merge_InitialOutput
	  section.data(50).logicalSrcIdx = 55;
	  section.data(50).dtTransOffset = 64;
	
	  ;% rtP.Gain_Gain_gzkwwfr5i5
	  section.data(51).logicalSrcIdx = 56;
	  section.data(51).dtTransOffset = 65;
	
	  ;% rtP.Gain1_Gain_kdpq0ktuun
	  section.data(52).logicalSrcIdx = 57;
	  section.data(52).dtTransOffset = 66;
	
	  ;% rtP.Gain2_Gain_irocmnpiyl
	  section.data(53).logicalSrcIdx = 58;
	  section.data(53).dtTransOffset = 67;
	
	  ;% rtP.Gain_Gain_jwng3jwdax
	  section.data(54).logicalSrcIdx = 59;
	  section.data(54).dtTransOffset = 68;
	
	  ;% rtP.Gain1_Gain_pa3zraguct
	  section.data(55).logicalSrcIdx = 60;
	  section.data(55).dtTransOffset = 69;
	
	  ;% rtP.Integrator_IC_hxmcczyvi1
	  section.data(56).logicalSrcIdx = 61;
	  section.data(56).dtTransOffset = 70;
	
	  ;% rtP.Gain_Gain_gm0w0tp13r
	  section.data(57).logicalSrcIdx = 62;
	  section.data(57).dtTransOffset = 71;
	
	  ;% rtP.RandomNumber_Mean_j21m43fvkk
	  section.data(58).logicalSrcIdx = 63;
	  section.data(58).dtTransOffset = 72;
	
	  ;% rtP.RandomNumber_StdDev_ergspd3esj
	  section.data(59).logicalSrcIdx = 64;
	  section.data(59).dtTransOffset = 73;
	
	  ;% rtP.RandomNumber_Seed_hc1q2hdzfi
	  section.data(60).logicalSrcIdx = 65;
	  section.data(60).dtTransOffset = 74;
	
	  ;% rtP.RandomNumber1_Mean_folcsctbbm
	  section.data(61).logicalSrcIdx = 66;
	  section.data(61).dtTransOffset = 75;
	
	  ;% rtP.RandomNumber1_StdDev_bfdu1ljjkh
	  section.data(62).logicalSrcIdx = 67;
	  section.data(62).dtTransOffset = 76;
	
	  ;% rtP.RandomNumber1_Seed_p2cqbf3h23
	  section.data(63).logicalSrcIdx = 68;
	  section.data(63).dtTransOffset = 77;
	
	  ;% rtP.RandomNumber2_Mean_atwzdqzftl
	  section.data(64).logicalSrcIdx = 69;
	  section.data(64).dtTransOffset = 78;
	
	  ;% rtP.RandomNumber2_StdDev_odwja0ie23
	  section.data(65).logicalSrcIdx = 70;
	  section.data(65).dtTransOffset = 79;
	
	  ;% rtP.RandomNumber2_Seed_dzfuypjyx1
	  section.data(66).logicalSrcIdx = 71;
	  section.data(66).dtTransOffset = 80;
	
	  ;% rtP.RandomNumber3_Mean
	  section.data(67).logicalSrcIdx = 72;
	  section.data(67).dtTransOffset = 81;
	
	  ;% rtP.RandomNumber3_StdDev
	  section.data(68).logicalSrcIdx = 73;
	  section.data(68).dtTransOffset = 82;
	
	  ;% rtP.RandomNumber3_Seed
	  section.data(69).logicalSrcIdx = 74;
	  section.data(69).dtTransOffset = 85;
	
	  ;% rtP.Gain_Gain_lezygxxwam
	  section.data(70).logicalSrcIdx = 75;
	  section.data(70).dtTransOffset = 86;
	
	  ;% rtP.Gain1_Gain_k0h4blrnoh
	  section.data(71).logicalSrcIdx = 76;
	  section.data(71).dtTransOffset = 87;
	
	  ;% rtP.Gain2_Gain_at243adaqy
	  section.data(72).logicalSrcIdx = 77;
	  section.data(72).dtTransOffset = 88;
	
	  ;% rtP.Gain3_Gain
	  section.data(73).logicalSrcIdx = 78;
	  section.data(73).dtTransOffset = 89;
	
	  ;% rtP.Gain4_Gain
	  section.data(74).logicalSrcIdx = 79;
	  section.data(74).dtTransOffset = 90;
	
	  ;% rtP.Gain5_Gain
	  section.data(75).logicalSrcIdx = 80;
	  section.data(75).dtTransOffset = 91;
	
	  ;% rtP.Gain_Gain_otymskpyft
	  section.data(76).logicalSrcIdx = 81;
	  section.data(76).dtTransOffset = 92;
	
	  ;% rtP.Gain_Gain_awbyjvpvae
	  section.data(77).logicalSrcIdx = 82;
	  section.data(77).dtTransOffset = 93;
	
	  ;% rtP.Gain1_Gain_e4enzcc5io
	  section.data(78).logicalSrcIdx = 83;
	  section.data(78).dtTransOffset = 94;
	
	  ;% rtP.Constant_Value_lroc4o2obf
	  section.data(79).logicalSrcIdx = 84;
	  section.data(79).dtTransOffset = 95;
	
	  ;% rtP.Constant_Value_kwdixjtgki
	  section.data(80).logicalSrcIdx = 85;
	  section.data(80).dtTransOffset = 96;
	
	  ;% rtP.Constant_Value_glwqw0xiai
	  section.data(81).logicalSrcIdx = 86;
	  section.data(81).dtTransOffset = 105;
	
	  ;% rtP.Constant1_Value_j1hh5rgit4
	  section.data(82).logicalSrcIdx = 87;
	  section.data(82).dtTransOffset = 106;
	
	  ;% rtP.Constant2_Value
	  section.data(83).logicalSrcIdx = 88;
	  section.data(83).dtTransOffset = 107;
	
	  ;% rtP.Constant_Value_l3g1zulttu
	  section.data(84).logicalSrcIdx = 89;
	  section.data(84).dtTransOffset = 108;
	
	  ;% rtP.Constant_Value_mldwum2o1l
	  section.data(85).logicalSrcIdx = 90;
	  section.data(85).dtTransOffset = 117;
	
	  ;% rtP.Constant1_Value_bhblxijpmx
	  section.data(86).logicalSrcIdx = 91;
	  section.data(86).dtTransOffset = 118;
	
	  ;% rtP.Constant2_Value_mlr4215lth
	  section.data(87).logicalSrcIdx = 92;
	  section.data(87).dtTransOffset = 119;
	
	  ;% rtP.Constant_Value_owsqu1yt4f
	  section.data(88).logicalSrcIdx = 93;
	  section.data(88).dtTransOffset = 120;
	
	  ;% rtP.Constant_Value_ltm2gro5wx
	  section.data(89).logicalSrcIdx = 94;
	  section.data(89).dtTransOffset = 121;
	
	  ;% rtP.Constant1_Value_bxxiag1xam
	  section.data(90).logicalSrcIdx = 95;
	  section.data(90).dtTransOffset = 122;
	
	  ;% rtP.Constant2_Value_iqulksquef
	  section.data(91).logicalSrcIdx = 96;
	  section.data(91).dtTransOffset = 123;
	
	  ;% rtP.Constant3_Value
	  section.data(92).logicalSrcIdx = 97;
	  section.data(92).dtTransOffset = 124;
	
	  ;% rtP.Constant_Value_mvnthzwinm
	  section.data(93).logicalSrcIdx = 98;
	  section.data(93).dtTransOffset = 125;
	
	  ;% rtP.Constant_Value_bbkwb0ia13
	  section.data(94).logicalSrcIdx = 99;
	  section.data(94).dtTransOffset = 128;
	
	  ;% rtP.Constant_Value_cn5rxzkzqi
	  section.data(95).logicalSrcIdx = 100;
	  section.data(95).dtTransOffset = 129;
	
	  ;% rtP.Constant_Value_bgpplpzlth
	  section.data(96).logicalSrcIdx = 101;
	  section.data(96).dtTransOffset = 130;
	
	  ;% rtP.Constant_Value_ehamsmfwks
	  section.data(97).logicalSrcIdx = 102;
	  section.data(97).dtTransOffset = 131;
	
	  ;% rtP.Constant1_Value_g2fcd0r1ax
	  section.data(98).logicalSrcIdx = 103;
	  section.data(98).dtTransOffset = 132;
	
	  ;% rtP.R1i_Value
	  section.data(99).logicalSrcIdx = 104;
	  section.data(99).dtTransOffset = 135;
	
	  ;% rtP.Constant_Value_czomgcmo5z
	  section.data(100).logicalSrcIdx = 105;
	  section.data(100).dtTransOffset = 144;
	
	  ;% rtP.Constant3_Value_pu1m0gcxmv
	  section.data(101).logicalSrcIdx = 106;
	  section.data(101).dtTransOffset = 145;
	
	  ;% rtP.Constant4_Value
	  section.data(102).logicalSrcIdx = 107;
	  section.data(102).dtTransOffset = 146;
	
	  ;% rtP.Constant5_Value
	  section.data(103).logicalSrcIdx = 108;
	  section.data(103).dtTransOffset = 147;
	
	  ;% rtP.Constant6_Value
	  section.data(104).logicalSrcIdx = 109;
	  section.data(104).dtTransOffset = 148;
	
	  ;% rtP.R1i_Value_inxxofskdo
	  section.data(105).logicalSrcIdx = 110;
	  section.data(105).dtTransOffset = 149;
	
	  ;% rtP.R3OM_Value
	  section.data(106).logicalSrcIdx = 111;
	  section.data(106).dtTransOffset = 158;
	
	  ;% rtP.R3om_Value
	  section.data(107).logicalSrcIdx = 112;
	  section.data(107).dtTransOffset = 167;
	
	  ;% rtP.Constant1_Value_pn2byenzlv
	  section.data(108).logicalSrcIdx = 113;
	  section.data(108).dtTransOffset = 176;
	
	  ;% rtP.Constant_Value_cfysieuu3n
	  section.data(109).logicalSrcIdx = 114;
	  section.data(109).dtTransOffset = 177;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
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
    nTotSects     = 4;
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
      section.nData     = 131;
      section.data(131)  = dumData; %prealloc
      
	  ;% rtB.ccl35kpxd5
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.keylink3mt
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtB.flzo1tlsb5
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 7;
	
	  ;% rtB.n0cnntkefl
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 8;
	
	  ;% rtB.awpypta2ug
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 9;
	
	  ;% rtB.hpxf3zbmys
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 14;
	
	  ;% rtB.dkn2uoguzp
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 18;
	
	  ;% rtB.a3y1rc3rl1
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 19;
	
	  ;% rtB.geloubvqmf
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 20;
	
	  ;% rtB.oeqvrsjl20
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 21;
	
	  ;% rtB.kbe53iduh5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 22;
	
	  ;% rtB.fwep5bzjc2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 23;
	
	  ;% rtB.dzxfzraqep
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 24;
	
	  ;% rtB.jrvlwmnotm
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 27;
	
	  ;% rtB.akarp20eco
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 30;
	
	  ;% rtB.imimj3j53y
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 33;
	
	  ;% rtB.cybvicud0e
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 34;
	
	  ;% rtB.dxoa34c3b1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 35;
	
	  ;% rtB.kq3be5snym
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 36;
	
	  ;% rtB.hoa03yvz1u
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 45;
	
	  ;% rtB.cgif1ftqiu
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 46;
	
	  ;% rtB.ewaorjb0zq
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 47;
	
	  ;% rtB.kijoxc4gpj
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 48;
	
	  ;% rtB.ensiuwqomq
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 57;
	
	  ;% rtB.jobdkup5ya
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 66;
	
	  ;% rtB.cly0cps1kj
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 75;
	
	  ;% rtB.ocg4x41c1b
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 84;
	
	  ;% rtB.g5cvdi42sk
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 93;
	
	  ;% rtB.gqnw3gvtvl
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 102;
	
	  ;% rtB.au0lhyifpn
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 105;
	
	  ;% rtB.o4dj4py0uf
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 106;
	
	  ;% rtB.doteuheq3d
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 118;
	
	  ;% rtB.fwruiojfal
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 124;
	
	  ;% rtB.dcymgtaxnd
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 127;
	
	  ;% rtB.dfj1hv2rax
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 128;
	
	  ;% rtB.kmrxoj3dew
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 129;
	
	  ;% rtB.ampf4zyrnm
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 130;
	
	  ;% rtB.opuyfb0xxc
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 133;
	
	  ;% rtB.ars5lnjltn
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 134;
	
	  ;% rtB.omjr0w1vhx
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 135;
	
	  ;% rtB.h1payfm0hu
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 139;
	
	  ;% rtB.f12kiybc2b
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 142;
	
	  ;% rtB.gvgfzrqlin
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 143;
	
	  ;% rtB.owz1l3bgnh
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 146;
	
	  ;% rtB.ikrnpfioht
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 149;
	
	  ;% rtB.b1ehm1vv5r
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 150;
	
	  ;% rtB.ly0si1rewp
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 153;
	
	  ;% rtB.hhmibzra1i
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 156;
	
	  ;% rtB.f5kn4yvyj5
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 162;
	
	  ;% rtB.ki2f0jghgn
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 165;
	
	  ;% rtB.ngvjzsm1u4
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 166;
	
	  ;% rtB.jjc4dlmsrz
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 175;
	
	  ;% rtB.byhq4mkmdc
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 184;
	
	  ;% rtB.ipnql3q2rt
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 193;
	
	  ;% rtB.jgcbfw45zw
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 202;
	
	  ;% rtB.erakm5mnxc
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 205;
	
	  ;% rtB.msmw2tnin3
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 206;
	
	  ;% rtB.djambayzpx
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 207;
	
	  ;% rtB.ocl30sbl44
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 208;
	
	  ;% rtB.bhjrv33qp1
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 209;
	
	  ;% rtB.kedypbphyn
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 210;
	
	  ;% rtB.gz5vsnzo3g
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 211;
	
	  ;% rtB.gggciddgh2
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 214;
	
	  ;% rtB.ghebyhkfa1
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 217;
	
	  ;% rtB.ihzskco0h2
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 218;
	
	  ;% rtB.eml13puwhm
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 219;
	
	  ;% rtB.fbqtfsiq0n
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 222;
	
	  ;% rtB.occ2w24px3
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 225;
	
	  ;% rtB.ptsg4njrmr
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 228;
	
	  ;% rtB.jij0vqqcem
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 240;
	
	  ;% rtB.mub3xknkza
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 249;
	
	  ;% rtB.k0l1swnxpw
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 253;
	
	  ;% rtB.lyzah33zfx
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 257;
	
	  ;% rtB.nl3ehfqz2m
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 261;
	
	  ;% rtB.esrmchniol
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 264;
	
	  ;% rtB.i34eoyi5rk
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 267;
	
	  ;% rtB.ls5eb5r25u
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 270;
	
	  ;% rtB.b1p03woqms
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 274;
	
	  ;% rtB.j4ocfboarv
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 277;
	
	  ;% rtB.akh33sy2jr
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 283;
	
	  ;% rtB.divw1m0v52
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 286;
	
	  ;% rtB.e44na3aipf
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 287;
	
	  ;% rtB.kzgofjzvij
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 293;
	
	  ;% rtB.llxlnrqyk4
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 296;
	
	  ;% rtB.ewv3nr05q4
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 299;
	
	  ;% rtB.jpmq223gsx
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 305;
	
	  ;% rtB.bpjgux3ffo
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 308;
	
	  ;% rtB.fv2wqoyajh
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 311;
	
	  ;% rtB.jlfsrqkudk
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 317;
	
	  ;% rtB.by3a5qvtdp
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 320;
	
	  ;% rtB.hmxb1je3zz
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 323;
	
	  ;% rtB.n1x5ppclcy
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 329;
	
	  ;% rtB.fzw2g0qbjr
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 332;
	
	  ;% rtB.mrapgtn004
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 335;
	
	  ;% rtB.ai2d3xslus
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 338;
	
	  ;% rtB.luumjekahk
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 339;
	
	  ;% rtB.mrr55pvfey
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 340;
	
	  ;% rtB.gyze4besoe
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 341;
	
	  ;% rtB.aubs0aaxnm
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 342;
	
	  ;% rtB.lhlpjwlhyc
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 343;
	
	  ;% rtB.ax5zdb10u1
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 344;
	
	  ;% rtB.bsfnxcv52h
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 360;
	
	  ;% rtB.h4duglqebr
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 364;
	
	  ;% rtB.nfnictfkhl
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 368;
	
	  ;% rtB.lobflauijs
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 369;
	
	  ;% rtB.dtvswhyfml
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 370;
	
	  ;% rtB.cgheitfdhl
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 371;
	
	  ;% rtB.aebifcgewd
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 372;
	
	  ;% rtB.n4bqi2lsjc
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 375;
	
	  ;% rtB.jdm3ln0pbp
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 381;
	
	  ;% rtB.i3roev24mh
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 384;
	
	  ;% rtB.l4zlvqrj2x
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 387;
	
	  ;% rtB.n12tuana1x
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 390;
	
	  ;% rtB.hbevfgwkvl
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 393;
	
	  ;% rtB.hn4pi0rg32
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 396;
	
	  ;% rtB.nk0vmookgp
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 399;
	
	  ;% rtB.klvp5ya35j
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 402;
	
	  ;% rtB.bev5jpn51t
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 405;
	
	  ;% rtB.iyr0pt2wao
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 411;
	
	  ;% rtB.k0ctxkfhfc
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 412;
	
	  ;% rtB.kyywqu43ff
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 421;
	
	  ;% rtB.fya5ejz2q1
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 424;
	
	  ;% rtB.ijzytbew2v
	  section.data(123).logicalSrcIdx = 127;
	  section.data(123).dtTransOffset = 433;
	
	  ;% rtB.drnfnw0sfs
	  section.data(124).logicalSrcIdx = 128;
	  section.data(124).dtTransOffset = 445;
	
	  ;% rtB.ol4ycpsogd
	  section.data(125).logicalSrcIdx = 133;
	  section.data(125).dtTransOffset = 454;
	
	  ;% rtB.my4i2jj4w0
	  section.data(126).logicalSrcIdx = 134;
	  section.data(126).dtTransOffset = 457;
	
	  ;% rtB.o4b5qm0dak
	  section.data(127).logicalSrcIdx = 135;
	  section.data(127).dtTransOffset = 466;
	
	  ;% rtB.kvx3ci1bl1
	  section.data(128).logicalSrcIdx = 136;
	  section.data(128).dtTransOffset = 469;
	
	  ;% rtB.kk2fncgdzf
	  section.data(129).logicalSrcIdx = 137;
	  section.data(129).dtTransOffset = 472;
	
	  ;% rtB.mbfh3bqryb
	  section.data(130).logicalSrcIdx = 138;
	  section.data(130).dtTransOffset = 476;
	
	  ;% rtB.pphyhpy43h
	  section.data(131).logicalSrcIdx = 139;
	  section.data(131).dtTransOffset = 480;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.abreinrkmh
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mzpdbd1vyg
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.fxtfkkj240
	  section.data(3).logicalSrcIdx = 142;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hdco5djtlp.oowvbhbp1g
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.luux5q1kph.oowvbhbp1g
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
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
    nTotSects     = 5;
    sectIdxOffset = 4;
    
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
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% rtDW.oib5citwht
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jnd30r1ht2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtDW.a5uardskgm
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 5;
	
	  ;% rtDW.dznssketm0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% rtDW.ajgdfi3jqy
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 10;
	
	  ;% rtDW.m1iqlgvxip
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 14;
	
	  ;% rtDW.ox23uhpd5w
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 15;
	
	  ;% rtDW.nbdm23k5hd
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
	  ;% rtDW.fiht0f3ctl
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 17;
	
	  ;% rtDW.ny2oqvzhck
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 20;
	
	  ;% rtDW.lkpte3brp0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 21;
	
	  ;% rtDW.i3dsukuteh
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 22;
	
	  ;% rtDW.imdqbdwqjp
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 23;
	
	  ;% rtDW.j42igdadkb
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 35;
	
	  ;% rtDW.jsxfhslkkg
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 36;
	
	  ;% rtDW.bkj2ve0mem
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 37;
	
	  ;% rtDW.m1del2va53
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 38;
	
	  ;% rtDW.ejy4002h5a
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 47;
	
	  ;% rtDW.ksjty3navg
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 48;
	
	  ;% rtDW.fhk413qchg
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 49;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% rtDW.pdgb42e4sa.LoggedData
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hdt0nwbtkp.LoggedData
	  section.data(2).logicalSrcIdx = 21;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.phbtb5kkgd.LoggedData
	  section.data(3).logicalSrcIdx = 22;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.aq4avw3414.LoggedData
	  section.data(4).logicalSrcIdx = 23;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.bfxbpi3bsd.LoggedData
	  section.data(5).logicalSrcIdx = 24;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.pmtxsinjme.LoggedData
	  section.data(6).logicalSrcIdx = 25;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.powg2s4ijk.LoggedData
	  section.data(7).logicalSrcIdx = 26;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.jymxdm54bx.LoggedData
	  section.data(8).logicalSrcIdx = 27;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.pvzant0n3h.LoggedData
	  section.data(9).logicalSrcIdx = 28;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.dbqpt24xqp.LoggedData
	  section.data(10).logicalSrcIdx = 29;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.otbzsw1jeq.LoggedData
	  section.data(11).logicalSrcIdx = 30;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.glhek3mxgj.LoggedData
	  section.data(12).logicalSrcIdx = 31;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.holdi4gy11.LoggedData
	  section.data(13).logicalSrcIdx = 32;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.ksieypke2s.LoggedData
	  section.data(14).logicalSrcIdx = 33;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.dvzlnzlo0n.AQHandles
	  section.data(15).logicalSrcIdx = 34;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.dggtzpbo31.LoggedData
	  section.data(16).logicalSrcIdx = 35;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.knwdemyl3a.AQHandles
	  section.data(17).logicalSrcIdx = 36;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.pcvk10hfia.AQHandles
	  section.data(18).logicalSrcIdx = 37;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.lrlfbto3oq.AQHandles
	  section.data(19).logicalSrcIdx = 38;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.ehi0fzdome.AQHandles
	  section.data(20).logicalSrcIdx = 39;
	  section.data(20).dtTransOffset = 19;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% rtDW.i0jd5ov2aq
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ekvi0kaox0
	  section.data(2).logicalSrcIdx = 41;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.h13pii2unk
	  section.data(3).logicalSrcIdx = 42;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.gdm2ge0ofw
	  section.data(4).logicalSrcIdx = 43;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.g3mjvbs1uu
	  section.data(5).logicalSrcIdx = 44;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtDW.lfqvcenhcp
	  section.data(6).logicalSrcIdx = 45;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtDW.lzm03ewcyj
	  section.data(7).logicalSrcIdx = 46;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtDW.hwm5cjsjet
	  section.data(8).logicalSrcIdx = 47;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtDW.nhpncgxxzs
	  section.data(9).logicalSrcIdx = 48;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtDW.nydbalew5h
	  section.data(10).logicalSrcIdx = 49;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.o235voook1
	  section.data(11).logicalSrcIdx = 50;
	  section.data(11).dtTransOffset = 13;
	
	  ;% rtDW.ptzydd1mlx
	  section.data(12).logicalSrcIdx = 51;
	  section.data(12).dtTransOffset = 638;
	
	  ;% rtDW.lspg4frwvz
	  section.data(13).logicalSrcIdx = 52;
	  section.data(13).dtTransOffset = 639;
	
	  ;% rtDW.nwumsxn30c
	  section.data(14).logicalSrcIdx = 53;
	  section.data(14).dtTransOffset = 640;
	
	  ;% rtDW.ixdsougept
	  section.data(15).logicalSrcIdx = 54;
	  section.data(15).dtTransOffset = 641;
	
	  ;% rtDW.of2m5ic0pn
	  section.data(16).logicalSrcIdx = 55;
	  section.data(16).dtTransOffset = 642;
	
	  ;% rtDW.n3kp14atf0
	  section.data(17).logicalSrcIdx = 56;
	  section.data(17).dtTransOffset = 643;
	
	  ;% rtDW.fbvjzemwgp
	  section.data(18).logicalSrcIdx = 57;
	  section.data(18).dtTransOffset = 644;
	
	  ;% rtDW.bppejpvrbl
	  section.data(19).logicalSrcIdx = 58;
	  section.data(19).dtTransOffset = 645;
	
	  ;% rtDW.otks5fozsk
	  section.data(20).logicalSrcIdx = 59;
	  section.data(20).dtTransOffset = 646;
	
	  ;% rtDW.n2yjwgze4q
	  section.data(21).logicalSrcIdx = 60;
	  section.data(21).dtTransOffset = 648;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% rtDW.eyr25c41uw
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pvnpyl41yz
	  section.data(2).logicalSrcIdx = 62;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.dxiowqubpb
	  section.data(3).logicalSrcIdx = 63;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.kdqmmbuvr3
	  section.data(4).logicalSrcIdx = 64;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.poms0znwf1
	  section.data(5).logicalSrcIdx = 65;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.np5lb5q3v4
	  section.data(6).logicalSrcIdx = 66;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.gw5aebdpal
	  section.data(7).logicalSrcIdx = 67;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.dyrwse4trj
	  section.data(8).logicalSrcIdx = 68;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.l1an2vzzne
	  section.data(9).logicalSrcIdx = 69;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.o1o144q2ee
	  section.data(10).logicalSrcIdx = 70;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.kkbhj5rupm
	  section.data(11).logicalSrcIdx = 71;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.nquht41u0y
	  section.data(12).logicalSrcIdx = 72;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.ckzasqnwjx
	  section.data(13).logicalSrcIdx = 73;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.gv4fu254xq
	  section.data(1).logicalSrcIdx = 74;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pk4uaaxwfa
	  section.data(2).logicalSrcIdx = 75;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.llvlsepr0c
	  section.data(3).logicalSrcIdx = 76;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.cahwo2f04v
	  section.data(4).logicalSrcIdx = 77;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.eljjgro1hu
	  section.data(5).logicalSrcIdx = 78;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.humf2uyi5m
	  section.data(6).logicalSrcIdx = 79;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.m4mnewhzec
	  section.data(7).logicalSrcIdx = 80;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.l3kas04ekx
	  section.data(8).logicalSrcIdx = 81;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
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


  targMap.checksum0 = 167638889;
  targMap.checksum1 = 1163889396;
  targMap.checksum2 = 1187007353;
  targMap.checksum3 = 916882847;

