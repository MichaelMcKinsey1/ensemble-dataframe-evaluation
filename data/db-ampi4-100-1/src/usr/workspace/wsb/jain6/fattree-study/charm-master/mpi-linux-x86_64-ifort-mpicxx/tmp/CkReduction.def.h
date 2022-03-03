
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





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

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

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkNodeReductionMgr::restartLocalGroupReductions_4_closure : public SDAG::Closure {
      int number;


      restartLocalGroupReductions_4_closure() {
        init();
      }
      restartLocalGroupReductions_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return number;}
      void pup(PUP::er& __p) {
        __p | number;
        packClosure(__p);
      }
      virtual ~restartLocalGroupReductions_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(restartLocalGroupReductions_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkNodeReductionMgr::DeleteChild_5_closure : public SDAG::Closure {
      int child;


      DeleteChild_5_closure() {
        init();
      }
      DeleteChild_5_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return child;}
      void pup(PUP::er& __p) {
        __p | child;
        packClosure(__p);
      }
      virtual ~DeleteChild_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(DeleteChild_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkNodeReductionMgr::DeleteNewChild_6_closure : public SDAG::Closure {
      int child;


      DeleteNewChild_6_closure() {
        init();
      }
      DeleteNewChild_6_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return child;}
      void pup(PUP::er& __p) {
        __p | child;
        packClosure(__p);
      }
      virtual ~DeleteNewChild_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(DeleteNewChild_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkNodeReductionMgr::modifyTree_7_closure : public SDAG::Closure {
      int code;
      int size;
      int *data;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      modifyTree_7_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      modifyTree_7_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return code;}
      int & getP1() { return size;}
      int *& getP2() { return data;}
      void pup(PUP::er& __p) {
        __p | code;
        __p | size;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int code; implP|code;
  int size; implP|size;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
          impl_buf+=CK_ALIGN(implP.size(),16);
          data = (int *)(impl_buf+impl_off_data);
        }
      }
      virtual ~modifyTree_7_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(modifyTree_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkNodeReductionMgr::collectMaxRedNo_8_closure : public SDAG::Closure {
      int redNo;


      collectMaxRedNo_8_closure() {
        init();
      }
      collectMaxRedNo_8_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return redNo;}
      void pup(PUP::er& __p) {
        __p | redNo;
        packClosure(__p);
      }
      virtual ~collectMaxRedNo_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(collectMaxRedNo_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkNodeReductionMgr::unblockNode_9_closure : public SDAG::Closure {
      int maxRedNo;


      unblockNode_9_closure() {
        init();
      }
      unblockNode_9_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return maxRedNo;}
      void pup(PUP::er& __p) {
        __p | maxRedNo;
        packClosure(__p);
      }
      virtual ~unblockNode_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(unblockNode_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message CkGroupCallbackMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkGroupCallbackMsg::operator new(size_t s){
  return CkGroupCallbackMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, int* sz){
  return CkGroupCallbackMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, int* sz,const int pb){
  return CkGroupCallbackMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CkGroupCallbackMsg::operator new(size_t s, const int p) {
  return CkGroupCallbackMsg::alloc(__idx, s, 0, p);
}
void* CMessage_CkGroupCallbackMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_CkGroupCallbackMsg::CMessage_CkGroupCallbackMsg() {
CkGroupCallbackMsg *newmsg = (CkGroupCallbackMsg *)this;
}
void CMessage_CkGroupCallbackMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkGroupCallbackMsg::pack(CkGroupCallbackMsg *msg) {
  return (void *) msg;
}
CkGroupCallbackMsg* CMessage_CkGroupCallbackMsg::unpack(void* buf) {
  CkGroupCallbackMsg *msg = (CkGroupCallbackMsg *) buf;
  return msg;
}
int CMessage_CkGroupCallbackMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkGroupInitCallback: IrrGroup{
CkGroupInitCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupInitCallback(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkGroupInitCallback::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */

void CProxyElement_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback();
 */

CkGroupID CProxy_CkGroupInitCallback::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkGroupInitCallback::__idx, CkIndex_CkGroupInitCallback::idx_CkGroupInitCallback_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_CkGroupInitCallback::reg_CkGroupInitCallback_void() {
  int epidx = CkRegisterEp("CkGroupInitCallback()",
      _call_CkGroupInitCallback_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkGroupInitCallback::_call_CkGroupInitCallback_void(void* impl_msg, void* impl_obj_void)
{
  CkGroupInitCallback* impl_obj = static_cast<CkGroupInitCallback *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) CkGroupInitCallback();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */

void CProxy_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkGroupInitCallback::reg_callMeBack_CkGroupCallbackMsg() {
  int epidx = CkRegisterEp("callMeBack(CkGroupCallbackMsg* impl_msg)",
      _call_callMeBack_CkGroupCallbackMsg, CMessage_CkGroupCallbackMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkGroupCallbackMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkGroupInitCallback::_call_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj_void)
{
  CkGroupInitCallback* impl_obj = static_cast<CkGroupInitCallback *>(impl_obj_void);
  impl_obj->callMeBack((CkGroupCallbackMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_CkGroupInitCallback::reg_CkGroupInitCallback_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkGroupInitCallback(CkMigrateMessage* impl_msg)",
      _call_CkGroupInitCallback_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkGroupInitCallback::_call_CkGroupInitCallback_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  CkGroupInitCallback* impl_obj = static_cast<CkGroupInitCallback *>(impl_obj_void);
  new (impl_obj) CkGroupInitCallback((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */

void CProxySection_CkGroupInitCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkGroupInitCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkGroupInitCallback::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkGroupInitCallback::isIrreducible());
  // REG: CkGroupInitCallback();
  idx_CkGroupInitCallback_void();
  CkRegisterDefaultCtor(__idx, idx_CkGroupInitCallback_void());

  // REG: void callMeBack(CkGroupCallbackMsg* impl_msg);
  idx_callMeBack_CkGroupCallbackMsg();

  // REG: CkGroupInitCallback(CkMigrateMessage* impl_msg);
  idx_CkGroupInitCallback_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkGroupInitCallback_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkGroupReadyCallback: IrrGroup{
CkGroupReadyCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupReadyCallback(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkGroupReadyCallback::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */

void CProxyElement_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback();
 */

CkGroupID CProxy_CkGroupReadyCallback::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkGroupReadyCallback::__idx, CkIndex_CkGroupReadyCallback::idx_CkGroupReadyCallback_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_CkGroupReadyCallback::reg_CkGroupReadyCallback_void() {
  int epidx = CkRegisterEp("CkGroupReadyCallback()",
      _call_CkGroupReadyCallback_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkGroupReadyCallback::_call_CkGroupReadyCallback_void(void* impl_msg, void* impl_obj_void)
{
  CkGroupReadyCallback* impl_obj = static_cast<CkGroupReadyCallback *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) CkGroupReadyCallback();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */

void CProxy_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkGroupReadyCallback::reg_callMeBack_CkGroupCallbackMsg() {
  int epidx = CkRegisterEp("callMeBack(CkGroupCallbackMsg* impl_msg)",
      _call_callMeBack_CkGroupCallbackMsg, CMessage_CkGroupCallbackMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkGroupCallbackMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkGroupReadyCallback::_call_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj_void)
{
  CkGroupReadyCallback* impl_obj = static_cast<CkGroupReadyCallback *>(impl_obj_void);
  impl_obj->callMeBack((CkGroupCallbackMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_CkGroupReadyCallback::reg_CkGroupReadyCallback_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkGroupReadyCallback(CkMigrateMessage* impl_msg)",
      _call_CkGroupReadyCallback_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkGroupReadyCallback::_call_CkGroupReadyCallback_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  CkGroupReadyCallback* impl_obj = static_cast<CkGroupReadyCallback *>(impl_obj_void);
  new (impl_obj) CkGroupReadyCallback((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */

void CProxySection_CkGroupReadyCallback::callMeBack(CkGroupCallbackMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkGroupReadyCallback::idx_callMeBack_CkGroupCallbackMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkGroupReadyCallback::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkGroupReadyCallback::isIrreducible());
  // REG: CkGroupReadyCallback();
  idx_CkGroupReadyCallback_void();
  CkRegisterDefaultCtor(__idx, idx_CkGroupReadyCallback_void());

  // REG: void callMeBack(CkGroupCallbackMsg* impl_msg);
  idx_callMeBack_CkGroupCallbackMsg();

  // REG: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
  idx_CkGroupReadyCallback_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkGroupReadyCallback_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkReductionMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkReductionMsg::operator new(size_t s){
  return CkReductionMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CkReductionMsg::operator new(size_t s, int* sz){
  return CkReductionMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CkReductionMsg::operator new(size_t s, int* sz,const int pb){
  return CkReductionMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CkReductionMsg::operator new(size_t s, const int p) {
  return CkReductionMsg::alloc(__idx, s, 0, p);
}
void* CMessage_CkReductionMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_CkReductionMsg::CMessage_CkReductionMsg() {
CkReductionMsg *newmsg = (CkReductionMsg *)this;
}
void CMessage_CkReductionMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkReductionMsg::pack(CkReductionMsg *msg) {
  return (void *) msg;
}
CkReductionMsg* CMessage_CkReductionMsg::unpack(void* buf) {
  CkReductionMsg *msg = (CkReductionMsg *) buf;
  return msg;
}
int CMessage_CkReductionMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkReductionNumberMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkReductionNumberMsg::operator new(size_t s){
  return CkReductionNumberMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, int* sz){
  return CkReductionNumberMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, int* sz,const int pb){
  return CkReductionNumberMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CkReductionNumberMsg::operator new(size_t s, const int p) {
  return CkReductionNumberMsg::alloc(__idx, s, 0, p);
}
void* CMessage_CkReductionNumberMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_CkReductionNumberMsg::CMessage_CkReductionNumberMsg() {
CkReductionNumberMsg *newmsg = (CkReductionNumberMsg *)this;
}
void CMessage_CkReductionNumberMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkReductionNumberMsg::pack(CkReductionNumberMsg *msg) {
  return (void *) msg;
}
CkReductionNumberMsg* CMessage_CkReductionNumberMsg::unpack(void* buf) {
  CkReductionNumberMsg *msg = (CkReductionNumberMsg *) buf;
  return msg;
}
int CMessage_CkReductionNumberMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkReductionInactiveMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkReductionInactiveMsg::operator new(size_t s){
  return CkReductionInactiveMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, int* sz){
  return CkReductionInactiveMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, int* sz,const int pb){
  return CkReductionInactiveMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CkReductionInactiveMsg::operator new(size_t s, const int p) {
  return CkReductionInactiveMsg::alloc(__idx, s, 0, p);
}
void* CMessage_CkReductionInactiveMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_CkReductionInactiveMsg::CMessage_CkReductionInactiveMsg() {
CkReductionInactiveMsg *newmsg = (CkReductionInactiveMsg *)this;
}
void CMessage_CkReductionInactiveMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkReductionInactiveMsg::pack(CkReductionInactiveMsg *msg) {
  return (void *) msg;
}
CkReductionInactiveMsg* CMessage_CkReductionInactiveMsg::unpack(void* buf) {
  CkReductionInactiveMsg *msg = (CkReductionInactiveMsg *) buf;
  return msg;
}
int CMessage_CkReductionInactiveMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkReductionMgr: CkGroupInitCallback{
CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
void RecvMsg(CkReductionMsg* impl_msg);
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void LateMigrantMsg(CkReductionMsg* impl_msg);
void MigrantDied(CkReductionNumberMsg* impl_msg);
void Barrier_RecvMsg(CkReductionMsg* impl_msg);
void ArrayReductionHandler(CkReductionMsg* impl_msg);
void contributeViaMessage(CkReductionMsg* impl_msg);
void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
CkReductionMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkReductionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::ArrayReductionHandler(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */

void CProxyElement_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
 */

CkGroupID CProxy_CkReductionMgr::ckNew(const CProxy_CkArrayReductionMgr &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_CkArrayReductionMgr &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_CkArrayReductionMgr &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_CkArrayReductionMgr &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  CkGroupID gId = CkCreateGroup(CkIndex_CkReductionMgr::__idx, CkIndex_CkReductionMgr::idx_CkReductionMgr_marshall1(), impl_msg);
  return gId;
}

  CProxy_CkReductionMgr::CProxy_CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_CkArrayReductionMgr &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_CkArrayReductionMgr &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_CkArrayReductionMgr &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateGroup(CkIndex_CkReductionMgr::__idx, CkIndex_CkReductionMgr::idx_CkReductionMgr_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_CkReductionMgr_marshall1() {
  int epidx = CkRegisterEp("CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0)",
      _call_CkReductionMgr_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkReductionMgr_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkReductionMgr_marshall1);

  return epidx;
}


void CkIndex_CkReductionMgr::_call_CkReductionMgr_marshall1(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_CkArrayReductionMgr &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CProxy_CkArrayReductionMgr impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) CkReductionMgr(impl_noname_0);
}

int CkIndex_CkReductionMgr::_callmarshall_CkReductionMgr_marshall1(char* impl_buf, void* impl_obj_void) {
  CkReductionMgr* impl_obj = static_cast< CkReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CProxy_CkArrayReductionMgr &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CProxy_CkArrayReductionMgr impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) CkReductionMgr(impl_noname_0);
  return implP.size();
}

void CkIndex_CkReductionMgr::_marshallmessagepup_CkReductionMgr_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_CkArrayReductionMgr &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CProxy_CkArrayReductionMgr impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxy_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_RecvMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("RecvMsg(CkReductionMsg* impl_msg)",
      _call_RecvMsg_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->RecvMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */

void CProxy_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_ReductionStarting_CkReductionNumberMsg() {
  int epidx = CkRegisterEp("ReductionStarting(CkReductionNumberMsg* impl_msg)",
      _call_ReductionStarting_CkReductionNumberMsg, CMessage_CkReductionNumberMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionNumberMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->ReductionStarting((CkReductionNumberMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */

void CProxy_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_LateMigrantMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("LateMigrantMsg(CkReductionMsg* impl_msg)",
      _call_LateMigrantMsg_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_LateMigrantMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->LateMigrantMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */

void CProxy_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_MigrantDied_CkReductionNumberMsg() {
  int epidx = CkRegisterEp("MigrantDied(CkReductionNumberMsg* impl_msg)",
      _call_MigrantDied_CkReductionNumberMsg, CMessage_CkReductionNumberMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionNumberMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_MigrantDied_CkReductionNumberMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->MigrantDied((CkReductionNumberMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxy_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_Barrier_RecvMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("Barrier_RecvMsg(CkReductionMsg* impl_msg)",
      _call_Barrier_RecvMsg_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_Barrier_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->Barrier_RecvMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
 */

void CProxy_CkReductionMgr::ArrayReductionHandler(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkReductionMgr::ArrayReductionHandler(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkReductionMgr::ArrayReductionHandler(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_ArrayReductionHandler_CkReductionMsg() {
  int epidx = CkRegisterEp("ArrayReductionHandler(CkReductionMsg* impl_msg)",
      _call_ArrayReductionHandler_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_ArrayReductionHandler_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->ArrayReductionHandler((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */

void CProxy_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_contributeViaMessage_CkReductionMsg() {
  int epidx = CkRegisterEp("contributeViaMessage(CkReductionMsg* impl_msg)",
      _call_contributeViaMessage_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_contributeViaMessage_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->contributeViaMessage((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */

void CProxy_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkReductionMgr::reg_AddToInactiveList_CkReductionInactiveMsg() {
  int epidx = CkRegisterEp("AddToInactiveList(CkReductionInactiveMsg* impl_msg)",
      _call_AddToInactiveList_CkReductionInactiveMsg, CMessage_CkReductionInactiveMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionInactiveMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_AddToInactiveList_CkReductionInactiveMsg(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  impl_obj->AddToInactiveList((CkReductionInactiveMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_CkReductionMgr::reg_CkReductionMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkReductionMgr(CkMigrateMessage* impl_msg)",
      _call_CkReductionMgr_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkReductionMgr::_call_CkReductionMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  CkReductionMgr* impl_obj = static_cast<CkReductionMgr *>(impl_obj_void);
  new (impl_obj) CkReductionMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::LateMigrantMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_LateMigrantMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::MigrantDied(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_MigrantDied_CkReductionNumberMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::Barrier_RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_Barrier_RecvMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::ArrayReductionHandler(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_ArrayReductionHandler_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::contributeViaMessage(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_contributeViaMessage_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */

void CProxySection_CkReductionMgr::AddToInactiveList(CkReductionInactiveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkReductionMgr::idx_AddToInactiveList_CkReductionInactiveMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_CkGroupInitCallback::__idx);
   CkRegisterGroupIrr(__idx,CkReductionMgr::isIrreducible());
  // REG: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
  idx_CkReductionMgr_marshall1();

  // REG: void RecvMsg(CkReductionMsg* impl_msg);
  idx_RecvMsg_CkReductionMsg();

  // REG: void ReductionStarting(CkReductionNumberMsg* impl_msg);
  idx_ReductionStarting_CkReductionNumberMsg();

  // REG: void LateMigrantMsg(CkReductionMsg* impl_msg);
  idx_LateMigrantMsg_CkReductionMsg();

  // REG: void MigrantDied(CkReductionNumberMsg* impl_msg);
  idx_MigrantDied_CkReductionNumberMsg();

  // REG: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
  idx_Barrier_RecvMsg_CkReductionMsg();

  // REG: void ArrayReductionHandler(CkReductionMsg* impl_msg);
  idx_ArrayReductionHandler_CkReductionMsg();

  // REG: void contributeViaMessage(CkReductionMsg* impl_msg);
  idx_contributeViaMessage_CkReductionMsg();

  // REG: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
  idx_AddToInactiveList_CkReductionInactiveMsg();

  // REG: CkReductionMgr(CkMigrateMessage* impl_msg);
  idx_CkReductionMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkReductionMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup CkNodeReductionMgr: IrrGroup{
CkNodeReductionMgr();
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void RecvMsg(CkReductionMsg* impl_msg);
void restartLocalGroupReductions(int number);
void DeleteChild(int child);
void DeleteNewChild(int child);
void modifyTree(int code, int size, const int *data);
void collectMaxRedNo(int redNo);
void unblockNode(int maxRedNo);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkNodeReductionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkNodeReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */

void CProxyElement_CkNodeReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkNodeReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void restartLocalGroupReductions(int number);
 */

void CProxyElement_CkNodeReductionMgr::restartLocalGroupReductions(int number, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DeleteChild(int child);
 */

void CProxyElement_CkNodeReductionMgr::DeleteChild(int child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|child;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DeleteNewChild(int child);
 */

void CProxyElement_CkNodeReductionMgr::DeleteNewChild(int child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|child;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void modifyTree(int code, int size, const int *data);
 */

void CProxyElement_CkNodeReductionMgr::modifyTree(int code, int size, const int *data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int code, int size, const int *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_data=sizeof(int)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|code;
    implP|size;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|code;
    implP|size;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectMaxRedNo(int redNo);
 */

void CProxyElement_CkNodeReductionMgr::collectMaxRedNo(int redNo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int redNo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|redNo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|redNo;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblockNode(int maxRedNo);
 */

void CProxyElement_CkNodeReductionMgr::unblockNode(int maxRedNo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int maxRedNo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|maxRedNo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|maxRedNo;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkNodeReductionMgr();
 */

CkGroupID CProxy_CkNodeReductionMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_CkNodeReductionMgr::__idx, CkIndex_CkNodeReductionMgr::idx_CkNodeReductionMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_CkNodeReductionMgr_void() {
  int epidx = CkRegisterEp("CkNodeReductionMgr()",
      _call_CkNodeReductionMgr_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_CkNodeReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) CkNodeReductionMgr();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */

void CProxy_CkNodeReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_ReductionStarting_CkReductionNumberMsg() {
  int epidx = CkRegisterEp("ReductionStarting(CkReductionNumberMsg* impl_msg)",
      _call_ReductionStarting_CkReductionNumberMsg, CMessage_CkReductionNumberMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionNumberMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  impl_obj->ReductionStarting((CkReductionNumberMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxy_CkNodeReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_RecvMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("RecvMsg(CkReductionMsg* impl_msg)",
      _call_RecvMsg_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  impl_obj->RecvMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void restartLocalGroupReductions(int number);
 */

void CProxy_CkNodeReductionMgr::restartLocalGroupReductions(int number, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_restartLocalGroupReductions_marshall4() {
  int epidx = CkRegisterEp("restartLocalGroupReductions(int number)",
      _call_restartLocalGroupReductions_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_restartLocalGroupReductions_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_restartLocalGroupReductions_marshall4);

  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_restartLocalGroupReductions_marshall4(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int number*/
  PUP::fromMem implP(impl_buf);
  int number; implP|number;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->restartLocalGroupReductions(number);
}

int CkIndex_CkNodeReductionMgr::_callmarshall_restartLocalGroupReductions_marshall4(char* impl_buf, void* impl_obj_void) {
  CkNodeReductionMgr* impl_obj = static_cast< CkNodeReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int number*/
  PUP::fromMem implP(impl_buf);
  int number; implP|number;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->restartLocalGroupReductions(number);
  return implP.size();
}

void CkIndex_CkNodeReductionMgr::_marshallmessagepup_restartLocalGroupReductions_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int number*/
  PUP::fromMem implP(impl_buf);
  int number; implP|number;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("number");
  implDestP|number;
}
PUPable_def(SINGLE_ARG(Closure_CkNodeReductionMgr::restartLocalGroupReductions_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DeleteChild(int child);
 */

void CProxy_CkNodeReductionMgr::DeleteChild(int child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|child;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_DeleteChild_marshall5() {
  int epidx = CkRegisterEp("DeleteChild(int child)",
      _call_DeleteChild_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_DeleteChild_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_DeleteChild_marshall5);

  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_DeleteChild_marshall5(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int child*/
  PUP::fromMem implP(impl_buf);
  int child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->DeleteChild(child);
}

int CkIndex_CkNodeReductionMgr::_callmarshall_DeleteChild_marshall5(char* impl_buf, void* impl_obj_void) {
  CkNodeReductionMgr* impl_obj = static_cast< CkNodeReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int child*/
  PUP::fromMem implP(impl_buf);
  int child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->DeleteChild(child);
  return implP.size();
}

void CkIndex_CkNodeReductionMgr::_marshallmessagepup_DeleteChild_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int child*/
  PUP::fromMem implP(impl_buf);
  int child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("child");
  implDestP|child;
}
PUPable_def(SINGLE_ARG(Closure_CkNodeReductionMgr::DeleteChild_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DeleteNewChild(int child);
 */

void CProxy_CkNodeReductionMgr::DeleteNewChild(int child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|child;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_DeleteNewChild_marshall6() {
  int epidx = CkRegisterEp("DeleteNewChild(int child)",
      _call_DeleteNewChild_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_DeleteNewChild_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_DeleteNewChild_marshall6);

  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_DeleteNewChild_marshall6(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int child*/
  PUP::fromMem implP(impl_buf);
  int child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->DeleteNewChild(child);
}

int CkIndex_CkNodeReductionMgr::_callmarshall_DeleteNewChild_marshall6(char* impl_buf, void* impl_obj_void) {
  CkNodeReductionMgr* impl_obj = static_cast< CkNodeReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int child*/
  PUP::fromMem implP(impl_buf);
  int child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->DeleteNewChild(child);
  return implP.size();
}

void CkIndex_CkNodeReductionMgr::_marshallmessagepup_DeleteNewChild_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int child*/
  PUP::fromMem implP(impl_buf);
  int child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("child");
  implDestP|child;
}
PUPable_def(SINGLE_ARG(Closure_CkNodeReductionMgr::DeleteNewChild_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void modifyTree(int code, int size, const int *data);
 */

void CProxy_CkNodeReductionMgr::modifyTree(int code, int size, const int *data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int code, int size, const int *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_data=sizeof(int)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|code;
    implP|size;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|code;
    implP|size;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_modifyTree_marshall7() {
  int epidx = CkRegisterEp("modifyTree(int code, int size, const int *data)",
      _call_modifyTree_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_modifyTree_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_modifyTree_marshall7);

  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_modifyTree_marshall7(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int code, int size, const int *data*/
  PUP::fromMem implP(impl_buf);
  int code; implP|code;
  int size; implP|size;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *data=(int *)(impl_buf+impl_off_data);
  impl_obj->modifyTree(code, size, data);
}

int CkIndex_CkNodeReductionMgr::_callmarshall_modifyTree_marshall7(char* impl_buf, void* impl_obj_void) {
  CkNodeReductionMgr* impl_obj = static_cast< CkNodeReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int code, int size, const int *data*/
  PUP::fromMem implP(impl_buf);
  int code; implP|code;
  int size; implP|size;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *data=(int *)(impl_buf+impl_off_data);
  impl_obj->modifyTree(code, size, data);
  return implP.size();
}

void CkIndex_CkNodeReductionMgr::_marshallmessagepup_modifyTree_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int code, int size, const int *data*/
  PUP::fromMem implP(impl_buf);
  int code; implP|code;
  int size; implP|size;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *data=(int *)(impl_buf+impl_off_data);
  if (implDestP.hasComments()) implDestP.comment("code");
  implDestP|code;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*data))<impl_cnt_data;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|data[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_CkNodeReductionMgr::modifyTree_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectMaxRedNo(int redNo);
 */

void CProxy_CkNodeReductionMgr::collectMaxRedNo(int redNo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int redNo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|redNo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|redNo;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_collectMaxRedNo_marshall8() {
  int epidx = CkRegisterEp("collectMaxRedNo(int redNo)",
      _call_collectMaxRedNo_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_collectMaxRedNo_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_collectMaxRedNo_marshall8);

  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_collectMaxRedNo_marshall8(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int redNo*/
  PUP::fromMem implP(impl_buf);
  int redNo; implP|redNo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectMaxRedNo(redNo);
}

int CkIndex_CkNodeReductionMgr::_callmarshall_collectMaxRedNo_marshall8(char* impl_buf, void* impl_obj_void) {
  CkNodeReductionMgr* impl_obj = static_cast< CkNodeReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int redNo*/
  PUP::fromMem implP(impl_buf);
  int redNo; implP|redNo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectMaxRedNo(redNo);
  return implP.size();
}

void CkIndex_CkNodeReductionMgr::_marshallmessagepup_collectMaxRedNo_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int redNo*/
  PUP::fromMem implP(impl_buf);
  int redNo; implP|redNo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("redNo");
  implDestP|redNo;
}
PUPable_def(SINGLE_ARG(Closure_CkNodeReductionMgr::collectMaxRedNo_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblockNode(int maxRedNo);
 */

void CProxy_CkNodeReductionMgr::unblockNode(int maxRedNo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int maxRedNo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|maxRedNo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|maxRedNo;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkNodeReductionMgr::reg_unblockNode_marshall9() {
  int epidx = CkRegisterEp("unblockNode(int maxRedNo)",
      _call_unblockNode_marshall9, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_unblockNode_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unblockNode_marshall9);

  return epidx;
}


void CkIndex_CkNodeReductionMgr::_call_unblockNode_marshall9(void* impl_msg, void* impl_obj_void)
{
  CkNodeReductionMgr* impl_obj = static_cast<CkNodeReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int maxRedNo*/
  PUP::fromMem implP(impl_buf);
  int maxRedNo; implP|maxRedNo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unblockNode(maxRedNo);
}

int CkIndex_CkNodeReductionMgr::_callmarshall_unblockNode_marshall9(char* impl_buf, void* impl_obj_void) {
  CkNodeReductionMgr* impl_obj = static_cast< CkNodeReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int maxRedNo*/
  PUP::fromMem implP(impl_buf);
  int maxRedNo; implP|maxRedNo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unblockNode(maxRedNo);
  return implP.size();
}

void CkIndex_CkNodeReductionMgr::_marshallmessagepup_unblockNode_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int maxRedNo*/
  PUP::fromMem implP(impl_buf);
  int maxRedNo; implP|maxRedNo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("maxRedNo");
  implDestP|maxRedNo;
}
PUPable_def(SINGLE_ARG(Closure_CkNodeReductionMgr::unblockNode_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkNodeReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */

void CProxySection_CkNodeReductionMgr::ReductionStarting(CkReductionNumberMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_ReductionStarting_CkReductionNumberMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMsg(CkReductionMsg* impl_msg);
 */

void CProxySection_CkNodeReductionMgr::RecvMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_RecvMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void restartLocalGroupReductions(int number);
 */

void CProxySection_CkNodeReductionMgr::restartLocalGroupReductions(int number, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_restartLocalGroupReductions_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DeleteChild(int child);
 */

void CProxySection_CkNodeReductionMgr::DeleteChild(int child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|child;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_DeleteChild_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DeleteNewChild(int child);
 */

void CProxySection_CkNodeReductionMgr::DeleteNewChild(int child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|child;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_DeleteNewChild_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void modifyTree(int code, int size, const int *data);
 */

void CProxySection_CkNodeReductionMgr::modifyTree(int code, int size, const int *data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int code, int size, const int *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_data=sizeof(int)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|code;
    implP|size;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|code;
    implP|size;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_modifyTree_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectMaxRedNo(int redNo);
 */

void CProxySection_CkNodeReductionMgr::collectMaxRedNo(int redNo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int redNo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|redNo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|redNo;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_collectMaxRedNo_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblockNode(int maxRedNo);
 */

void CProxySection_CkNodeReductionMgr::unblockNode(int maxRedNo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int maxRedNo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|maxRedNo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|maxRedNo;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkNodeReductionMgr::idx_unblockNode_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkNodeReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkNodeReductionMgr::isIrreducible());
  // REG: CkNodeReductionMgr();
  idx_CkNodeReductionMgr_void();
  CkRegisterDefaultCtor(__idx, idx_CkNodeReductionMgr_void());

  // REG: void ReductionStarting(CkReductionNumberMsg* impl_msg);
  idx_ReductionStarting_CkReductionNumberMsg();

  // REG: void RecvMsg(CkReductionMsg* impl_msg);
  idx_RecvMsg_CkReductionMsg();

  // REG: void restartLocalGroupReductions(int number);
  idx_restartLocalGroupReductions_marshall4();

  // REG: void DeleteChild(int child);
  idx_DeleteChild_marshall5();

  // REG: void DeleteNewChild(int child);
  idx_DeleteNewChild_marshall6();

  // REG: void modifyTree(int code, int size, const int *data);
  idx_modifyTree_marshall7();

  // REG: void collectMaxRedNo(int redNo);
  idx_collectMaxRedNo_marshall8();

  // REG: void unblockNode(int maxRedNo);
  idx_unblockNode_marshall9();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkReduction(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CkGroupCallbackMsg;
*/
CMessage_CkGroupCallbackMsg::__register("CkGroupCallbackMsg", sizeof(CkGroupCallbackMsg),(CkPackFnPtr) CkGroupCallbackMsg::pack,(CkUnpackFnPtr) CkGroupCallbackMsg::unpack);

/* REG: group CkGroupInitCallback: IrrGroup{
CkGroupInitCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupInitCallback(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkGroupInitCallback::__register("CkGroupInitCallback", sizeof(CkGroupInitCallback));

/* REG: group CkGroupReadyCallback: IrrGroup{
CkGroupReadyCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupReadyCallback(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkGroupReadyCallback::__register("CkGroupReadyCallback", sizeof(CkGroupReadyCallback));

/* REG: message CkReductionMsg;
*/
CMessage_CkReductionMsg::__register("CkReductionMsg", sizeof(CkReductionMsg),(CkPackFnPtr) CkReductionMsg::pack,(CkUnpackFnPtr) CkReductionMsg::unpack);

/* REG: message CkReductionNumberMsg;
*/
CMessage_CkReductionNumberMsg::__register("CkReductionNumberMsg", sizeof(CkReductionNumberMsg),(CkPackFnPtr) CkReductionNumberMsg::pack,(CkUnpackFnPtr) CkReductionNumberMsg::unpack);

/* REG: message CkReductionInactiveMsg;
*/
CMessage_CkReductionInactiveMsg::__register("CkReductionInactiveMsg", sizeof(CkReductionInactiveMsg),(CkPackFnPtr) CkReductionInactiveMsg::pack,(CkUnpackFnPtr) CkReductionInactiveMsg::unpack);

/* REG: group CkReductionMgr: CkGroupInitCallback{
CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
void RecvMsg(CkReductionMsg* impl_msg);
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void LateMigrantMsg(CkReductionMsg* impl_msg);
void MigrantDied(CkReductionNumberMsg* impl_msg);
void Barrier_RecvMsg(CkReductionMsg* impl_msg);
void ArrayReductionHandler(CkReductionMsg* impl_msg);
void contributeViaMessage(CkReductionMsg* impl_msg);
void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
CkReductionMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkReductionMgr::__register("CkReductionMgr", sizeof(CkReductionMgr));

/* REG: nodegroup CkNodeReductionMgr: IrrGroup{
CkNodeReductionMgr();
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void RecvMsg(CkReductionMsg* impl_msg);
void restartLocalGroupReductions(int number);
void DeleteChild(int child);
void DeleteNewChild(int child);
void modifyTree(int code, int size, const int *data);
void collectMaxRedNo(int redNo);
void unblockNode(int maxRedNo);
};
*/
  CkIndex_CkNodeReductionMgr::__register("CkNodeReductionMgr", sizeof(CkNodeReductionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkGroupInitCallback::virtual_pup(PUP::er &p) {
    recursive_pup<CkGroupInitCallback >(dynamic_cast<CkGroupInitCallback* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkGroupReadyCallback::virtual_pup(PUP::er &p) {
    recursive_pup<CkGroupReadyCallback >(dynamic_cast<CkGroupReadyCallback* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkReductionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkReductionMgr >(dynamic_cast<CkReductionMgr* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkNodeReductionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkNodeReductionMgr >(dynamic_cast<CkNodeReductionMgr* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
