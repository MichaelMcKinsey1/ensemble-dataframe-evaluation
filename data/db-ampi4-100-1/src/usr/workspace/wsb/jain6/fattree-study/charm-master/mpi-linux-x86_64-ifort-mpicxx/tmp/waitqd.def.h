

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_waitqd_QDChare::waitQD_2_closure : public SDAG::Closure {
      

      waitQD_2_closure() {
        init();
      }
      waitQD_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~waitQD_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(waitQD_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CkChareID _waitqd_qdhandle;
 */
extern CkChareID _waitqd_qdhandle;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__waitqd_qdhandle(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_waitqd_qdhandle;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare waitqd_QDChare: Chare{
waitqd_QDChare(CkArgMsg* impl_msg);
threaded sync void waitQD();
void onQD(CkQdMsg* impl_msg);
waitqd_QDChare(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_waitqd_QDChare::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: waitqd_QDChare(CkArgMsg* impl_msg);
 */

CkChareID CProxy_waitqd_QDChare::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_waitqd_QDChare::__idx, CkIndex_waitqd_QDChare::idx_waitqd_QDChare_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_waitqd_QDChare::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_waitqd_QDChare::__idx, CkIndex_waitqd_QDChare::idx_waitqd_QDChare_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_waitqd_QDChare::CProxy_waitqd_QDChare(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_waitqd_QDChare::__idx, CkIndex_waitqd_QDChare::idx_waitqd_QDChare_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_waitqd_QDChare::reg_waitqd_QDChare_CkArgMsg() {
  int epidx = CkRegisterEp("waitqd_QDChare(CkArgMsg* impl_msg)",
      _call_waitqd_QDChare_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_waitqd_QDChare::_call_waitqd_QDChare_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  waitqd_QDChare* impl_obj = static_cast<waitqd_QDChare *>(impl_obj_void);
  new (impl_obj) waitqd_QDChare((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void waitQD();
 */

void CProxy_waitqd_QDChare::waitQD(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  void *impl_msg_typed_ret = CkRemoteCall(CkIndex_waitqd_QDChare::idx_waitQD_void(), impl_msg, &ckGetChareID());
  CkFreeSysMsg(impl_msg_typed_ret); 
}

// Entry point registration function

int CkIndex_waitqd_QDChare::reg_waitQD_void() {
  int epidx = CkRegisterEp("waitQD()",
      _call_waitQD_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_waitqd_QDChare::_call_waitQD_void(void* impl_msg, void* impl_obj_void)
{
  waitqd_QDChare* impl_obj = static_cast<waitqd_QDChare *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_waitQD_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_waitqd_QDChare::_callthr_waitQD_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  waitqd_QDChare *impl_obj = (waitqd_QDChare *) impl_arg->obj;
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkFreeSysMsg(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->waitQD();
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
PUPable_def(SINGLE_ARG(Closure_waitqd_QDChare::waitQD_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void onQD(CkQdMsg* impl_msg);
 */

void CProxy_waitqd_QDChare::onQD(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_waitqd_QDChare::idx_onQD_CkQdMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_waitqd_QDChare::idx_onQD_CkQdMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_waitqd_QDChare::idx_onQD_CkQdMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_waitqd_QDChare::reg_onQD_CkQdMsg() {
  int epidx = CkRegisterEp("onQD(CkQdMsg* impl_msg)",
      _call_onQD_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}


void CkIndex_waitqd_QDChare::_call_onQD_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  waitqd_QDChare* impl_obj = static_cast<waitqd_QDChare *>(impl_obj_void);
  impl_obj->onQD((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: waitqd_QDChare(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_waitqd_QDChare::reg_waitqd_QDChare_CkMigrateMessage() {
  int epidx = CkRegisterEp("waitqd_QDChare(CkMigrateMessage* impl_msg)",
      _call_waitqd_QDChare_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_waitqd_QDChare::_call_waitqd_QDChare_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  waitqd_QDChare* impl_obj = static_cast<waitqd_QDChare *>(impl_obj_void);
  new (impl_obj) waitqd_QDChare((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_waitqd_QDChare::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: waitqd_QDChare(CkArgMsg* impl_msg);
  idx_waitqd_QDChare_CkArgMsg();
  CkRegisterMainChare(__idx, idx_waitqd_QDChare_CkArgMsg());

  // REG: threaded sync void waitQD();
  idx_waitQD_void();

  // REG: void onQD(CkQdMsg* impl_msg);
  idx_onQD_CkQdMsg();

  // REG: waitqd_QDChare(CkMigrateMessage* impl_msg);
  idx_waitqd_QDChare_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_waitqd_QDChare_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerwaitqd(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCkFutures();

  CkRegisterReadonly("_waitqd_qdhandle","CkChareID",sizeof(_waitqd_qdhandle),(void *) &_waitqd_qdhandle,__xlater_roPup__waitqd_qdhandle);

/* REG: mainchare waitqd_QDChare: Chare{
waitqd_QDChare(CkArgMsg* impl_msg);
threaded sync void waitQD();
void onQD(CkQdMsg* impl_msg);
waitqd_QDChare(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_waitqd_QDChare::__register("waitqd_QDChare", sizeof(waitqd_QDChare));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_waitqd_QDChare::virtual_pup(PUP::er &p) {
    recursive_pup<waitqd_QDChare >(dynamic_cast<waitqd_QDChare* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
