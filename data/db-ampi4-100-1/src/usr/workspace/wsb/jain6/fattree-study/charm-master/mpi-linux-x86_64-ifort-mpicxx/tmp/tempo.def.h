
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message TempoMessage;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_TempoMessage::operator new(size_t s){
  return TempoMessage::alloc(__idx, s, 0, 0);
}
void *CMessage_TempoMessage::operator new(size_t s, int* sz){
  return TempoMessage::alloc(__idx, s, sz, 0);
}
void *CMessage_TempoMessage::operator new(size_t s, int* sz,const int pb){
  return TempoMessage::alloc(__idx, s, sz, pb);
}
void *CMessage_TempoMessage::operator new(size_t s, const int p) {
  return TempoMessage::alloc(__idx, s, 0, p);
}
void* CMessage_TempoMessage::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_TempoMessage::CMessage_TempoMessage() {
TempoMessage *newmsg = (TempoMessage *)this;
}
void CMessage_TempoMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_TempoMessage::pack(TempoMessage *msg) {
  return (void *) msg;
}
TempoMessage* CMessage_TempoMessage::unpack(void* buf) {
  TempoMessage *msg = (TempoMessage *) buf;
  return msg;
}
int CMessage_TempoMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare TempoChare: Chare{
threaded TempoChare();
void tempoGeneric(TempoMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TempoChare::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoChare();
 */

CkChareID CProxy_TempoChare::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TempoChare::__idx, CkIndex_TempoChare::idx_TempoChare_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_TempoChare::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkCreateChare(CkIndex_TempoChare::__idx, CkIndex_TempoChare::idx_TempoChare_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function

int CkIndex_TempoChare::reg_TempoChare_void() {
  int epidx = CkRegisterEp("TempoChare()",
      _call_TempoChare_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_TempoChare::_call_TempoChare_void(void* impl_msg, void* impl_obj_void)
{
  TempoChare* impl_obj = static_cast<TempoChare *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_TempoChare_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_TempoChare::_callthr_TempoChare_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  TempoChare *impl_obj = (TempoChare *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  new (impl_obj) TempoChare();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxy_TempoChare::tempoGeneric(TempoMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_TempoChare::idx_tempoGeneric_TempoMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_TempoChare::idx_tempoGeneric_TempoMessage(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_TempoChare::idx_tempoGeneric_TempoMessage(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_TempoChare::reg_tempoGeneric_TempoMessage() {
  int epidx = CkRegisterEp("tempoGeneric(TempoMessage* impl_msg)",
      _call_tempoGeneric_TempoMessage, CMessage_TempoMessage::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)TempoMessage::ckDebugPup);
  return epidx;
}


void CkIndex_TempoChare::_call_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj_void)
{
  TempoChare* impl_obj = static_cast<TempoChare *>(impl_obj_void);
  impl_obj->tempoGeneric((TempoMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TempoChare::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: threaded TempoChare();
  idx_TempoChare_void();
  CkRegisterDefaultCtor(__idx, idx_TempoChare_void());

  // REG: void tempoGeneric(TempoMessage* impl_msg);
  idx_tempoGeneric_TempoMessage();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TempoGroup: IrrGroup{
threaded TempoGroup();
void tempoGeneric(TempoMessage* impl_msg);
TempoGroup(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TempoGroup::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoGroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxyElement_TempoGroup::tempoGeneric(TempoMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TempoGroup(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoGroup();
 */

CkGroupID CProxy_TempoGroup::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TempoGroup::__idx, CkIndex_TempoGroup::idx_TempoGroup_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_TempoGroup::reg_TempoGroup_void() {
  int epidx = CkRegisterEp("TempoGroup()",
      _call_TempoGroup_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_TempoGroup::_call_TempoGroup_void(void* impl_msg, void* impl_obj_void)
{
  TempoGroup* impl_obj = static_cast<TempoGroup *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_TempoGroup_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_TempoGroup::_callthr_TempoGroup_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  TempoGroup *impl_obj = (TempoGroup *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  new (impl_obj) TempoGroup();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxy_TempoGroup::tempoGeneric(TempoMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupID(),0);
}

void CProxy_TempoGroup::tempoGeneric(TempoMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_TempoGroup::tempoGeneric(TempoMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_TempoGroup::reg_tempoGeneric_TempoMessage() {
  int epidx = CkRegisterEp("tempoGeneric(TempoMessage* impl_msg)",
      _call_tempoGeneric_TempoMessage, CMessage_TempoMessage::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)TempoMessage::ckDebugPup);
  return epidx;
}


void CkIndex_TempoGroup::_call_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj_void)
{
  TempoGroup* impl_obj = static_cast<TempoGroup *>(impl_obj_void);
  impl_obj->tempoGeneric((TempoMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TempoGroup(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_TempoGroup::reg_TempoGroup_CkMigrateMessage() {
  int epidx = CkRegisterEp("TempoGroup(CkMigrateMessage* impl_msg)",
      _call_TempoGroup_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_TempoGroup::_call_TempoGroup_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  TempoGroup* impl_obj = static_cast<TempoGroup *>(impl_obj_void);
  new (impl_obj) TempoGroup((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoGroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxySection_TempoGroup::tempoGeneric(TempoMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TempoGroup::idx_tempoGeneric_TempoMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TempoGroup(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TempoGroup::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TempoGroup::isIrreducible());
  // REG: threaded TempoGroup();
  idx_TempoGroup_void();
  CkRegisterDefaultCtor(__idx, idx_TempoGroup_void());

  // REG: void tempoGeneric(TempoMessage* impl_msg);
  idx_tempoGeneric_TempoMessage();

  // REG: TempoGroup(CkMigrateMessage* impl_msg);
  idx_TempoGroup_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TempoGroup_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array TempoArray: ArrayElement{
threaded TempoArray();
void tempoGeneric(TempoMessage* impl_msg);
TempoArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TempoArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_TempoArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

void CProxySection_TempoArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoArray();
 */

void CProxyElement_TempoArray::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_TempoArray::idx_TempoArray_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxyElement_TempoArray::tempoGeneric(TempoMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TempoArray::idx_tempoGeneric_TempoMessage(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TempoArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoArray();
 */

CkArrayID CProxy_TempoArray::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TempoArray::idx_TempoArray_void(), opts);
  return gId;
}

void CProxy_TempoArray::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TempoArray::idx_TempoArray_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_TempoArray::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TempoArray::idx_TempoArray_void(), opts);
  return gId;
}

void CProxy_TempoArray::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TempoArray::idx_TempoArray_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_TempoArray::reg_TempoArray_void() {
  int epidx = CkRegisterEp("TempoArray()",
      _call_TempoArray_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_TempoArray::_call_TempoArray_void(void* impl_msg, void* impl_obj_void)
{
  TempoArray* impl_obj = static_cast<TempoArray *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_TempoArray_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_TempoArray::_callthr_TempoArray_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  TempoArray *impl_obj = (TempoArray *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  new (impl_obj) TempoArray();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxy_TempoArray::tempoGeneric(TempoMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TempoArray::idx_tempoGeneric_TempoMessage(),0);
}

// Entry point registration function

int CkIndex_TempoArray::reg_tempoGeneric_TempoMessage() {
  int epidx = CkRegisterEp("tempoGeneric(TempoMessage* impl_msg)",
      _call_tempoGeneric_TempoMessage, CMessage_TempoMessage::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)TempoMessage::ckDebugPup);
  return epidx;
}


void CkIndex_TempoArray::_call_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj_void)
{
  TempoArray* impl_obj = static_cast<TempoArray *>(impl_obj_void);
  impl_obj->tempoGeneric((TempoMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TempoArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_TempoArray::reg_TempoArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("TempoArray(CkMigrateMessage* impl_msg)",
      _call_TempoArray_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_TempoArray::_call_TempoArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  TempoArray* impl_obj = static_cast<TempoArray *>(impl_obj_void);
  new (impl_obj) TempoArray((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded TempoArray();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tempoGeneric(TempoMessage* impl_msg);
 */

void CProxySection_TempoArray::tempoGeneric(TempoMessage* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TempoArray::idx_tempoGeneric_TempoMessage(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TempoArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TempoArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: threaded TempoArray();
  idx_TempoArray_void();
  CkRegisterDefaultCtor(__idx, idx_TempoArray_void());

  // REG: void tempoGeneric(TempoMessage* impl_msg);
  idx_tempoGeneric_TempoMessage();

  // REG: TempoArray(CkMigrateMessage* impl_msg);
  idx_TempoArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TempoArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registertempo(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message TempoMessage;
*/
CMessage_TempoMessage::__register("TempoMessage", sizeof(TempoMessage),(CkPackFnPtr) TempoMessage::pack,(CkUnpackFnPtr) TempoMessage::unpack);

/* REG: chare TempoChare: Chare{
threaded TempoChare();
void tempoGeneric(TempoMessage* impl_msg);
};
*/
  CkIndex_TempoChare::__register("TempoChare", sizeof(TempoChare));

/* REG: group TempoGroup: IrrGroup{
threaded TempoGroup();
void tempoGeneric(TempoMessage* impl_msg);
TempoGroup(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TempoGroup::__register("TempoGroup", sizeof(TempoGroup));

/* REG: array TempoArray: ArrayElement{
threaded TempoArray();
void tempoGeneric(TempoMessage* impl_msg);
TempoArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TempoArray::__register("TempoArray", sizeof(TempoArray));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TempoChare::virtual_pup(PUP::er &p) {
    recursive_pup<TempoChare >(dynamic_cast<TempoChare* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TempoGroup::virtual_pup(PUP::er &p) {
    recursive_pup<TempoGroup >(dynamic_cast<TempoGroup* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TempoArray::virtual_pup(PUP::er &p) {
    recursive_pup<TempoArray >(dynamic_cast<TempoArray* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
