/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: mainchare TCharmMain: Chare{
TCharmMain(CkArgMsg* impl_msg);
  initcall void nodeInit(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TCharmMain::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharmMain(CkArgMsg* impl_msg);
 */

CkChareID CProxy_TCharmMain::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TCharmMain::__idx, CkIndex_TCharmMain::idx_TCharmMain_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_TCharmMain::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TCharmMain::__idx, CkIndex_TCharmMain::idx_TCharmMain_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_TCharmMain::CProxy_TCharmMain(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TCharmMain::__idx, CkIndex_TCharmMain::idx_TCharmMain_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_TCharmMain::reg_TCharmMain_CkArgMsg() {
  int epidx = CkRegisterEp("TCharmMain(CkArgMsg* impl_msg)",
      _call_TCharmMain_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TCharmMain::_call_TCharmMain_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TCharmMain* impl_obj = static_cast<TCharmMain *>(impl_obj_void);
  new (impl_obj) TCharmMain((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TCharmMain::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TCharmMain(CkArgMsg* impl_msg);
  idx_TCharmMain_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TCharmMain_CkArgMsg());

  _registerInitCall(TCharmMain::nodeInit,1);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registertcharmmain(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare TCharmMain: Chare{
TCharmMain(CkArgMsg* impl_msg);
  initcall void nodeInit(void);
};
*/
  CkIndex_TCharmMain::__register("TCharmMain", sizeof(TCharmMain));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TCharmMain::virtual_pup(PUP::er &p) {
    recursive_pup<TCharmMain >(dynamic_cast<TCharmMain* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
