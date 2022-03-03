
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::atBarrier_2_closure : public SDAG::Closure {
      

      atBarrier_2_closure() {
        init();
      }
      atBarrier_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~atBarrier_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(atBarrier_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::atExit_3_closure : public SDAG::Closure {
      

      atExit_3_closure() {
        init();
      }
      atExit_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~atExit_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(atExit_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::migrateDelayed_4_closure : public SDAG::Closure {
      int destPE;


      migrateDelayed_4_closure() {
        init();
      }
      migrateDelayed_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return destPE;}
      void pup(PUP::er& __p) {
        __p | destPE;
        packClosure(__p);
      }
      virtual ~migrateDelayed_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(migrateDelayed_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::start_5_closure : public SDAG::Closure {
      

      start_5_closure() {
        init();
      }
      start_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::callSystem_6_closure : public SDAG::Closure {
      callSystemStruct s;


      callSystem_6_closure() {
        init();
      }
      callSystem_6_closure(CkMigrateMessage*) {
        init();
      }
      callSystemStruct & getP0() { return s;}
      void pup(PUP::er& __p) {
        __p | s;
        packClosure(__p);
      }
      virtual ~callSystem_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(callSystem_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message TCharmInitMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_TCharmInitMsg::operator new(size_t s){
  return TCharmInitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int* sz){
  return TCharmInitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int* sz,const int pb){
  return TCharmInitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return TCharmInitMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return TCharmInitMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_TCharmInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_TCharmInitMsg::CMessage_TCharmInitMsg() {
TCharmInitMsg *newmsg = (TCharmInitMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_TCharmInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_TCharmInitMsg::pack(TCharmInitMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
TCharmInitMsg* CMessage_TCharmInitMsg::unpack(void* buf) {
  TCharmInitMsg *msg = (TCharmInitMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_TCharmInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array TCharm: ArrayElement{
TCharm(TCharmInitMsg* impl_msg);
void atBarrier();
void atExit();
void migrateDelayed(int destPE);
void start();
void callSystem(const callSystemStruct &s);
  initcall void procInit(void);
  initcall void nodeInit(void);
TCharm(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TCharm::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_TCharm::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

void CProxySection_TCharm::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(TCharmInitMsg* impl_msg);
 */

void CProxyElement_TCharm::insert(TCharmInitMsg* impl_msg, int onPE)
{ 
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_TCharm::idx_TCharm_TCharmInitMsg(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier();
 */

void CProxyElement_TCharm::atBarrier(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atBarrier_void(),0);
}

void CkIndex_TCharm::_call_redn_wrapper_atBarrier_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->atBarrier();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atExit();
 */

void CProxyElement_TCharm::atExit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atExit_void(),0);
}

void CkIndex_TCharm::_call_redn_wrapper_atExit_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->atExit();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void migrateDelayed(int destPE);
 */

void CProxyElement_TCharm::migrateDelayed(int destPE, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int destPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|destPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|destPE;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_migrateDelayed_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */

void CProxyElement_TCharm::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callSystem(const callSystemStruct &s);
 */

void CProxyElement_TCharm::callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const callSystemStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(callSystemStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(callSystemStruct &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_callSystem_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(TCharmInitMsg* impl_msg);
 */

CkArrayID CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const CkArrayOptions &opts)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), opts);
  return gId;
}

void CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const int s1)
{
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), opts);
  return gId;
}

void CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const int s1, CkCallback _ck_array_creation_cb)
{
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_TCharm::reg_TCharm_TCharmInitMsg() {
  int epidx = CkRegisterEp("TCharm(TCharmInitMsg* impl_msg)",
      _call_TCharm_TCharmInitMsg, CMessage_TCharmInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)TCharmInitMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TCharm::_call_TCharm_TCharmInitMsg(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  new (impl_obj) TCharm((TCharmInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier();
 */

void CProxy_TCharm::atBarrier(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_atBarrier_void(),0);
}

// Entry point registration function

int CkIndex_TCharm::reg_atBarrier_void() {
  int epidx = CkRegisterEp("atBarrier()",
      _call_atBarrier_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_TCharm::reg_redn_wrapper_atBarrier_void() {
  return CkRegisterEp("redn_wrapper_atBarrier(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_atBarrier_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_TCharm::_call_atBarrier_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->atBarrier();
}
PUPable_def(SINGLE_ARG(Closure_TCharm::atBarrier_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atExit();
 */

void CProxy_TCharm::atExit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_atExit_void(),0);
}

// Entry point registration function

int CkIndex_TCharm::reg_atExit_void() {
  int epidx = CkRegisterEp("atExit()",
      _call_atExit_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_TCharm::reg_redn_wrapper_atExit_void() {
  return CkRegisterEp("redn_wrapper_atExit(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_atExit_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_TCharm::_call_atExit_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->atExit();
}
PUPable_def(SINGLE_ARG(Closure_TCharm::atExit_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void migrateDelayed(int destPE);
 */

void CProxy_TCharm::migrateDelayed(int destPE, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int destPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|destPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|destPE;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_migrateDelayed_marshall4(),0);
}

// Entry point registration function

int CkIndex_TCharm::reg_migrateDelayed_marshall4() {
  int epidx = CkRegisterEp("migrateDelayed(int destPE)",
      _call_migrateDelayed_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_migrateDelayed_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_migrateDelayed_marshall4);

  return epidx;
}


void CkIndex_TCharm::_call_migrateDelayed_marshall4(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int destPE*/
  PUP::fromMem implP(impl_buf);
  int destPE; implP|destPE;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->migrateDelayed(destPE);
}

int CkIndex_TCharm::_callmarshall_migrateDelayed_marshall4(char* impl_buf, void* impl_obj_void) {
  TCharm* impl_obj = static_cast< TCharm *>(impl_obj_void);
  /*Unmarshall pup'd fields: int destPE*/
  PUP::fromMem implP(impl_buf);
  int destPE; implP|destPE;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->migrateDelayed(destPE);
  return implP.size();
}

void CkIndex_TCharm::_marshallmessagepup_migrateDelayed_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int destPE*/
  PUP::fromMem implP(impl_buf);
  int destPE; implP|destPE;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("destPE");
  implDestP|destPE;
}
PUPable_def(SINGLE_ARG(Closure_TCharm::migrateDelayed_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */

void CProxy_TCharm::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_start_void(),0);
}

// Entry point registration function

int CkIndex_TCharm::reg_start_void() {
  int epidx = CkRegisterEp("start()",
      _call_start_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TCharm::_call_start_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->start();
}
PUPable_def(SINGLE_ARG(Closure_TCharm::start_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callSystem(const callSystemStruct &s);
 */

void CProxy_TCharm::callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const callSystemStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(callSystemStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(callSystemStruct &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_callSystem_marshall6(),0);
}

// Entry point registration function

int CkIndex_TCharm::reg_callSystem_marshall6() {
  int epidx = CkRegisterEp("callSystem(const callSystemStruct &s)",
      _call_callSystem_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_callSystem_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_callSystem_marshall6);

  return epidx;
}


void CkIndex_TCharm::_call_callSystem_marshall6(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const callSystemStruct &s*/
  PUP::fromMem implP(impl_buf);
  callSystemStruct s; implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->callSystem(s);
}

int CkIndex_TCharm::_callmarshall_callSystem_marshall6(char* impl_buf, void* impl_obj_void) {
  TCharm* impl_obj = static_cast< TCharm *>(impl_obj_void);
  /*Unmarshall pup'd fields: const callSystemStruct &s*/
  PUP::fromMem implP(impl_buf);
  callSystemStruct s; implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->callSystem(s);
  return implP.size();
}

void CkIndex_TCharm::_marshallmessagepup_callSystem_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const callSystemStruct &s*/
  PUP::fromMem implP(impl_buf);
  callSystemStruct s; implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
}
PUPable_def(SINGLE_ARG(Closure_TCharm::callSystem_6_closure))
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_TCharm::reg_TCharm_CkMigrateMessage() {
  int epidx = CkRegisterEp("TCharm(CkMigrateMessage* impl_msg)",
      _call_TCharm_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_TCharm::_call_TCharm_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm *>(impl_obj_void);
  new (impl_obj) TCharm((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(TCharmInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier();
 */

void CProxySection_TCharm::atBarrier(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atBarrier_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atExit();
 */

void CProxySection_TCharm::atExit(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atExit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void migrateDelayed(int destPE);
 */

void CProxySection_TCharm::migrateDelayed(int destPE, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int destPE
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|destPE;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|destPE;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_migrateDelayed_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */

void CProxySection_TCharm::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callSystem(const callSystemStruct &s);
 */

void CProxySection_TCharm::callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const callSystemStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(callSystemStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(callSystemStruct &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_callSystem_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TCharm::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: TCharm(TCharmInitMsg* impl_msg);
  idx_TCharm_TCharmInitMsg();

  // REG: void atBarrier();
  idx_atBarrier_void();
  idx_redn_wrapper_atBarrier_void();

  // REG: void atExit();
  idx_atExit_void();
  idx_redn_wrapper_atExit_void();

  // REG: void migrateDelayed(int destPE);
  idx_migrateDelayed_marshall4();

  // REG: void start();
  idx_start_void();

  // REG: void callSystem(const callSystemStruct &s);
  idx_callSystem_marshall6();

  _registerInitCall(TCharm::procInit,0);

  _registerInitCall(TCharm::nodeInit,1);

  // REG: TCharm(CkMigrateMessage* impl_msg);
  idx_TCharm_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TCharm_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registertcharm(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message TCharmInitMsg{
char data[];
}
;
*/
CMessage_TCharmInitMsg::__register("TCharmInitMsg", sizeof(TCharmInitMsg),(CkPackFnPtr) TCharmInitMsg::pack,(CkUnpackFnPtr) TCharmInitMsg::unpack);

/* REG: array TCharm: ArrayElement{
TCharm(TCharmInitMsg* impl_msg);
void atBarrier();
void atExit();
void migrateDelayed(int destPE);
void start();
void callSystem(const callSystemStruct &s);
  initcall void procInit(void);
  initcall void nodeInit(void);
TCharm(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TCharm::__register("TCharm", sizeof(TCharm));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TCharm::virtual_pup(PUP::er &p) {
    recursive_pup<TCharm >(dynamic_cast<TCharm* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
