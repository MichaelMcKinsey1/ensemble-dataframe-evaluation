

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message CkQdMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkQdMsg::operator new(size_t s){
  return CkQdMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CkQdMsg::operator new(size_t s, int* sz){
  return CkQdMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CkQdMsg::operator new(size_t s, int* sz,const int pb){
  return CkQdMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CkQdMsg::operator new(size_t s, const int p) {
  return CkQdMsg::alloc(__idx, s, 0, p);
}
void* CMessage_CkQdMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_CkQdMsg::CMessage_CkQdMsg() {
CkQdMsg *newmsg = (CkQdMsg *)this;
}
void CMessage_CkQdMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkQdMsg::pack(CkQdMsg *msg) {
  return (void *) msg;
}
CkQdMsg* CMessage_CkQdMsg::unpack(void* buf) {
  CkQdMsg *msg = (CkQdMsg *) buf;
  return msg;
}
int CMessage_CkQdMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message FutureInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_FutureInitMsg::operator new(size_t s){
  return FutureInitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_FutureInitMsg::operator new(size_t s, int* sz){
  return FutureInitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_FutureInitMsg::operator new(size_t s, int* sz,const int pb){
  return FutureInitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_FutureInitMsg::operator new(size_t s, const int p) {
  return FutureInitMsg::alloc(__idx, s, 0, p);
}
void* CMessage_FutureInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_FutureInitMsg::CMessage_FutureInitMsg() {
FutureInitMsg *newmsg = (FutureInitMsg *)this;
}
void CMessage_FutureInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_FutureInitMsg::pack(FutureInitMsg *msg) {
  return (void *) msg;
}
FutureInitMsg* CMessage_FutureInitMsg::unpack(void* buf) {
  FutureInitMsg *msg = (FutureInitMsg *) buf;
  return msg;
}
int CMessage_FutureInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group FutureBOC: IrrGroup{
FutureBOC(FutureInitMsg* impl_msg);
void SetFuture(FutureInitMsg* impl_msg);
void SetSema(FutureInitMsg* impl_msg);
FutureBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_FutureBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureBOC(FutureInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetFuture(FutureInitMsg* impl_msg);
 */

void CProxyElement_FutureBOC::SetFuture(FutureInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetSema(FutureInitMsg* impl_msg);
 */

void CProxyElement_FutureBOC::SetSema(FutureInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureBOC(FutureInitMsg* impl_msg);
 */

CkGroupID CProxy_FutureBOC::ckNew(FutureInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_FutureBOC::__idx, CkIndex_FutureBOC::idx_FutureBOC_FutureInitMsg(), impl_msg);
  return gId;
}

  CProxy_FutureBOC::CProxy_FutureBOC(FutureInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_FutureBOC::__idx, CkIndex_FutureBOC::idx_FutureBOC_FutureInitMsg(), impl_msg));
}

// Entry point registration function

int CkIndex_FutureBOC::reg_FutureBOC_FutureInitMsg() {
  int epidx = CkRegisterEp("FutureBOC(FutureInitMsg* impl_msg)",
      _call_FutureBOC_FutureInitMsg, CMessage_FutureInitMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FutureInitMsg::ckDebugPup);
  return epidx;
}


void CkIndex_FutureBOC::_call_FutureBOC_FutureInitMsg(void* impl_msg, void* impl_obj_void)
{
  FutureBOC* impl_obj = static_cast<FutureBOC *>(impl_obj_void);
  new (impl_obj) FutureBOC((FutureInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetFuture(FutureInitMsg* impl_msg);
 */

void CProxy_FutureBOC::SetFuture(FutureInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_FutureBOC::SetFuture(FutureInitMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_FutureBOC::SetFuture(FutureInitMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_FutureBOC::reg_SetFuture_FutureInitMsg() {
  int epidx = CkRegisterEp("SetFuture(FutureInitMsg* impl_msg)",
      _call_SetFuture_FutureInitMsg, CMessage_FutureInitMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FutureInitMsg::ckDebugPup);
  return epidx;
}


void CkIndex_FutureBOC::_call_SetFuture_FutureInitMsg(void* impl_msg, void* impl_obj_void)
{
  FutureBOC* impl_obj = static_cast<FutureBOC *>(impl_obj_void);
  impl_obj->SetFuture((FutureInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetSema(FutureInitMsg* impl_msg);
 */

void CProxy_FutureBOC::SetSema(FutureInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_FutureBOC::SetSema(FutureInitMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_FutureBOC::SetSema(FutureInitMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_FutureBOC::reg_SetSema_FutureInitMsg() {
  int epidx = CkRegisterEp("SetSema(FutureInitMsg* impl_msg)",
      _call_SetSema_FutureInitMsg, CMessage_FutureInitMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FutureInitMsg::ckDebugPup);
  return epidx;
}


void CkIndex_FutureBOC::_call_SetSema_FutureInitMsg(void* impl_msg, void* impl_obj_void)
{
  FutureBOC* impl_obj = static_cast<FutureBOC *>(impl_obj_void);
  impl_obj->SetSema((FutureInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_FutureBOC::reg_FutureBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("FutureBOC(CkMigrateMessage* impl_msg)",
      _call_FutureBOC_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_FutureBOC::_call_FutureBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  FutureBOC* impl_obj = static_cast<FutureBOC *>(impl_obj_void);
  new (impl_obj) FutureBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureBOC(FutureInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetFuture(FutureInitMsg* impl_msg);
 */

void CProxySection_FutureBOC::SetFuture(FutureInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_FutureBOC::idx_SetFuture_FutureInitMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetSema(FutureInitMsg* impl_msg);
 */

void CProxySection_FutureBOC::SetSema(FutureInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_FutureBOC::idx_SetSema_FutureInitMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_FutureBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,FutureBOC::isIrreducible());
  // REG: FutureBOC(FutureInitMsg* impl_msg);
  idx_FutureBOC_FutureInitMsg();

  // REG: void SetFuture(FutureInitMsg* impl_msg);
  idx_SetFuture_FutureInitMsg();

  // REG: void SetSema(FutureInitMsg* impl_msg);
  idx_SetSema_FutureInitMsg();

  // REG: FutureBOC(CkMigrateMessage* impl_msg);
  idx_FutureBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_FutureBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare FutureMain: Chare{
FutureMain(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_FutureMain::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: FutureMain(CkArgMsg* impl_msg);
 */

CkChareID CProxy_FutureMain::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_FutureMain::__idx, CkIndex_FutureMain::idx_FutureMain_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_FutureMain::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_FutureMain::__idx, CkIndex_FutureMain::idx_FutureMain_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_FutureMain::CProxy_FutureMain(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_FutureMain::__idx, CkIndex_FutureMain::idx_FutureMain_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_FutureMain::reg_FutureMain_CkArgMsg() {
  int epidx = CkRegisterEp("FutureMain(CkArgMsg* impl_msg)",
      _call_FutureMain_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_FutureMain::_call_FutureMain_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  FutureMain* impl_obj = static_cast<FutureMain *>(impl_obj_void);
  new (impl_obj) FutureMain((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_FutureMain::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: FutureMain(CkArgMsg* impl_msg);
  idx_FutureMain_CkArgMsg();
  CkRegisterMainChare(__idx, idx_FutureMain_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID _fbocID;
 */
extern CkGroupID _fbocID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__fbocID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_fbocID;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkFutures(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CkQdMsg;
*/
CMessage_CkQdMsg::__register("CkQdMsg", sizeof(CkQdMsg),(CkPackFnPtr) CkQdMsg::pack,(CkUnpackFnPtr) CkQdMsg::unpack);

/* REG: message FutureInitMsg;
*/
CMessage_FutureInitMsg::__register("FutureInitMsg", sizeof(FutureInitMsg),(CkPackFnPtr) FutureInitMsg::pack,(CkUnpackFnPtr) FutureInitMsg::unpack);

/* REG: group FutureBOC: IrrGroup{
FutureBOC(FutureInitMsg* impl_msg);
void SetFuture(FutureInitMsg* impl_msg);
void SetSema(FutureInitMsg* impl_msg);
FutureBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_FutureBOC::__register("FutureBOC", sizeof(FutureBOC));

/* REG: mainchare FutureMain: Chare{
FutureMain(CkArgMsg* impl_msg);
};
*/
  CkIndex_FutureMain::__register("FutureMain", sizeof(FutureMain));

  CkRegisterReadonly("_fbocID","CkGroupID",sizeof(_fbocID),(void *) &_fbocID,__xlater_roPup__fbocID);

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_FutureBOC::virtual_pup(PUP::er &p) {
    recursive_pup<FutureBOC >(dynamic_cast<FutureBOC* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_FutureMain::virtual_pup(PUP::er &p) {
    recursive_pup<FutureMain >(dynamic_cast<FutureMain* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
