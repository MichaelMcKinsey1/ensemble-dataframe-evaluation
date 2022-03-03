

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::ReceiveMinStats_2_closure : public SDAG::Closure {
      double *load;
      int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      ReceiveMinStats_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      ReceiveMinStats_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      double *& getP0() { return load;}
      int & getP1() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_load, impl_cnt_load; 
  implP|impl_off_load;
  implP|impl_cnt_load;
  int n; implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          load = (double *)(impl_buf+impl_off_load);
        }
      }
      virtual ~ReceiveMinStats_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(ReceiveMinStats_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::LoadBalanceDecision_3_closure : public SDAG::Closure {
      int req_no;
      int period;


      LoadBalanceDecision_3_closure() {
        init();
      }
      LoadBalanceDecision_3_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return req_no;}
      int & getP1() { return period;}
      void pup(PUP::er& __p) {
        __p | req_no;
        __p | period;
        packClosure(__p);
      }
      virtual ~LoadBalanceDecision_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(LoadBalanceDecision_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::LoadBalanceDecisionFinal_4_closure : public SDAG::Closure {
      int req_no;
      int period;


      LoadBalanceDecisionFinal_4_closure() {
        init();
      }
      LoadBalanceDecisionFinal_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return req_no;}
      int & getP1() { return period;}
      void pup(PUP::er& __p) {
        __p | req_no;
        __p | period;
        packClosure(__p);
      }
      virtual ~LoadBalanceDecisionFinal_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(LoadBalanceDecisionFinal_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::ReceiveIterationNo_5_closure : public SDAG::Closure {
      int impl_noname_0;


      ReceiveIterationNo_5_closure() {
        init();
      }
      ReceiveIterationNo_5_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~ReceiveIterationNo_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReceiveIterationNo_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::RegisterNoObjCallback_6_closure : public SDAG::Closure {
      int impl_noname_1;


      RegisterNoObjCallback_6_closure() {
        init();
      }
      RegisterNoObjCallback_6_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~RegisterNoObjCallback_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(RegisterNoObjCallback_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::TriggerAdaptiveReduction_7_closure : public SDAG::Closure {
      

      TriggerAdaptiveReduction_7_closure() {
        init();
      }
      TriggerAdaptiveReduction_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~TriggerAdaptiveReduction_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(TriggerAdaptiveReduction_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancer::MetaLBCallLBOnChares_8_closure : public SDAG::Closure {
      

      MetaLBCallLBOnChares_8_closure() {
        init();
      }
      MetaLBCallLBOnChares_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~MetaLBCallLBOnChares_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(MetaLBCallLBOnChares_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancerRedn::ReceiveIterNo_2_closure : public SDAG::Closure {
      int max_iter;


      ReceiveIterNo_2_closure() {
        init();
      }
      ReceiveIterNo_2_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return max_iter;}
      void pup(PUP::er& __p) {
        __p | max_iter;
        packClosure(__p);
      }
      virtual ~ReceiveIterNo_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ReceiveIterNo_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MetaBalancerRedn::getMaxIter_3_closure : public SDAG::Closure {
      int impl_noname_2;


      getMaxIter_3_closure() {
        init();
      }
      getMaxIter_3_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~getMaxIter_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(getMaxIter_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID _metalb;
 */
extern CkGroupID _metalb;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__metalb(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_metalb;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID _metalbred;
 */
extern CkGroupID _metalbred;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__metalbred(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_metalbred;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare MetaLBInit: Chare{
MetaLBInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MetaLBInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaLBInit(CkArgMsg* impl_msg);
 */

CkChareID CProxy_MetaLBInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_MetaLBInit::__idx, CkIndex_MetaLBInit::idx_MetaLBInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_MetaLBInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_MetaLBInit::__idx, CkIndex_MetaLBInit::idx_MetaLBInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_MetaLBInit::CProxy_MetaLBInit(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_MetaLBInit::__idx, CkIndex_MetaLBInit::idx_MetaLBInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_MetaLBInit::reg_MetaLBInit_CkArgMsg() {
  int epidx = CkRegisterEp("MetaLBInit(CkArgMsg* impl_msg)",
      _call_MetaLBInit_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_MetaLBInit::_call_MetaLBInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  MetaLBInit* impl_obj = static_cast<MetaLBInit *>(impl_obj_void);
  new (impl_obj) MetaLBInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MetaLBInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: MetaLBInit(CkArgMsg* impl_msg);
  idx_MetaLBInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_MetaLBInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group MetaBalancer: IrrGroup{
void MetaBalancer();
  initcall void initnodeFn(void);
void ReceiveMinStats(const double *load, int n);
void LoadBalanceDecision(int req_no, int period);
void LoadBalanceDecisionFinal(int req_no, int period);
void ReceiveIterationNo(int impl_noname_0);
void RegisterNoObjCallback(int impl_noname_1);
void TriggerAdaptiveReduction();
void MetaLBCallLBOnChares();
MetaBalancer(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MetaBalancer::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaBalancer();
 */
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMinStats(const double *load, int n);
 */

void CProxyElement_MetaBalancer::ReceiveMinStats(const double *load, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *load, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CkIndex_MetaBalancer::_call_redn_wrapper_ReceiveMinStats_marshall2(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *load, int n*/
  PUP::fromMem implP(impl_buf);
  int n; n = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* load; load = (double*)impl_buf;
  impl_obj->ReceiveMinStats(load, n);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalanceDecision(int req_no, int period);
 */

void CProxyElement_MetaBalancer::LoadBalanceDecision(int req_no, int period, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalanceDecisionFinal(int req_no, int period);
 */

void CProxyElement_MetaBalancer::LoadBalanceDecisionFinal(int req_no, int period, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveIterationNo(int impl_noname_0);
 */

void CProxyElement_MetaBalancer::ReceiveIterationNo(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RegisterNoObjCallback(int impl_noname_1);
 */

void CProxyElement_MetaBalancer::RegisterNoObjCallback(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TriggerAdaptiveReduction();
 */

void CProxyElement_MetaBalancer::TriggerAdaptiveReduction(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaLBCallLBOnChares();
 */

void CProxyElement_MetaBalancer::MetaLBCallLBOnChares(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaBalancer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaBalancer();
 */

CkGroupID CProxy_MetaBalancer::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MetaBalancer::__idx, CkIndex_MetaBalancer::idx_MetaBalancer_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_MetaBalancer_void() {
  int epidx = CkRegisterEp("MetaBalancer()",
      _call_MetaBalancer_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_MetaBalancer::_call_MetaBalancer_void(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) MetaBalancer();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMinStats(const double *load, int n);
 */

void CProxy_MetaBalancer::ReceiveMinStats(const double *load, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *load, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::ReceiveMinStats(const double *load, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *load, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::ReceiveMinStats(const double *load, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *load, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_ReceiveMinStats_marshall2() {
  int epidx = CkRegisterEp("ReceiveMinStats(const double *load, int n)",
      _call_ReceiveMinStats_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveMinStats_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveMinStats_marshall2);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_MetaBalancer::reg_redn_wrapper_ReceiveMinStats_marshall2() {
  return CkRegisterEp("redn_wrapper_ReceiveMinStats(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_ReceiveMinStats_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
}


void CkIndex_MetaBalancer::_call_ReceiveMinStats_marshall2(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const double *load, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_load, impl_cnt_load; 
  implP|impl_off_load;
  implP|impl_cnt_load;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *load=(double *)(impl_buf+impl_off_load);
  impl_obj->ReceiveMinStats(load, n);
}

int CkIndex_MetaBalancer::_callmarshall_ReceiveMinStats_marshall2(char* impl_buf, void* impl_obj_void) {
  MetaBalancer* impl_obj = static_cast< MetaBalancer *>(impl_obj_void);
  /*Unmarshall pup'd fields: const double *load, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_load, impl_cnt_load; 
  implP|impl_off_load;
  implP|impl_cnt_load;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *load=(double *)(impl_buf+impl_off_load);
  impl_obj->ReceiveMinStats(load, n);
  return implP.size();
}

void CkIndex_MetaBalancer::_marshallmessagepup_ReceiveMinStats_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const double *load, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_load, impl_cnt_load; 
  implP|impl_off_load;
  implP|impl_cnt_load;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *load=(double *)(impl_buf+impl_off_load);
  if (implDestP.hasComments()) implDestP.comment("load");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*load))<impl_cnt_load;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|load[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::ReceiveMinStats_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalanceDecision(int req_no, int period);
 */

void CProxy_MetaBalancer::LoadBalanceDecision(int req_no, int period, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::LoadBalanceDecision(int req_no, int period, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::LoadBalanceDecision(int req_no, int period, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_LoadBalanceDecision_marshall3() {
  int epidx = CkRegisterEp("LoadBalanceDecision(int req_no, int period)",
      _call_LoadBalanceDecision_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_LoadBalanceDecision_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_LoadBalanceDecision_marshall3);

  return epidx;
}


void CkIndex_MetaBalancer::_call_LoadBalanceDecision_marshall3(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int req_no, int period*/
  PUP::fromMem implP(impl_buf);
  int req_no; implP|req_no;
  int period; implP|period;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->LoadBalanceDecision(req_no, period);
}

int CkIndex_MetaBalancer::_callmarshall_LoadBalanceDecision_marshall3(char* impl_buf, void* impl_obj_void) {
  MetaBalancer* impl_obj = static_cast< MetaBalancer *>(impl_obj_void);
  /*Unmarshall pup'd fields: int req_no, int period*/
  PUP::fromMem implP(impl_buf);
  int req_no; implP|req_no;
  int period; implP|period;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->LoadBalanceDecision(req_no, period);
  return implP.size();
}

void CkIndex_MetaBalancer::_marshallmessagepup_LoadBalanceDecision_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int req_no, int period*/
  PUP::fromMem implP(impl_buf);
  int req_no; implP|req_no;
  int period; implP|period;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("req_no");
  implDestP|req_no;
  if (implDestP.hasComments()) implDestP.comment("period");
  implDestP|period;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::LoadBalanceDecision_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalanceDecisionFinal(int req_no, int period);
 */

void CProxy_MetaBalancer::LoadBalanceDecisionFinal(int req_no, int period, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::LoadBalanceDecisionFinal(int req_no, int period, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::LoadBalanceDecisionFinal(int req_no, int period, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_LoadBalanceDecisionFinal_marshall4() {
  int epidx = CkRegisterEp("LoadBalanceDecisionFinal(int req_no, int period)",
      _call_LoadBalanceDecisionFinal_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_LoadBalanceDecisionFinal_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_LoadBalanceDecisionFinal_marshall4);

  return epidx;
}


void CkIndex_MetaBalancer::_call_LoadBalanceDecisionFinal_marshall4(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int req_no, int period*/
  PUP::fromMem implP(impl_buf);
  int req_no; implP|req_no;
  int period; implP|period;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->LoadBalanceDecisionFinal(req_no, period);
}

int CkIndex_MetaBalancer::_callmarshall_LoadBalanceDecisionFinal_marshall4(char* impl_buf, void* impl_obj_void) {
  MetaBalancer* impl_obj = static_cast< MetaBalancer *>(impl_obj_void);
  /*Unmarshall pup'd fields: int req_no, int period*/
  PUP::fromMem implP(impl_buf);
  int req_no; implP|req_no;
  int period; implP|period;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->LoadBalanceDecisionFinal(req_no, period);
  return implP.size();
}

void CkIndex_MetaBalancer::_marshallmessagepup_LoadBalanceDecisionFinal_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int req_no, int period*/
  PUP::fromMem implP(impl_buf);
  int req_no; implP|req_no;
  int period; implP|period;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("req_no");
  implDestP|req_no;
  if (implDestP.hasComments()) implDestP.comment("period");
  implDestP|period;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::LoadBalanceDecisionFinal_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveIterationNo(int impl_noname_0);
 */

void CProxy_MetaBalancer::ReceiveIterationNo(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::ReceiveIterationNo(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::ReceiveIterationNo(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_ReceiveIterationNo_marshall5() {
  int epidx = CkRegisterEp("ReceiveIterationNo(int impl_noname_0)",
      _call_ReceiveIterationNo_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveIterationNo_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveIterationNo_marshall5);

  return epidx;
}


void CkIndex_MetaBalancer::_call_ReceiveIterationNo_marshall5(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveIterationNo(impl_noname_0);
}

int CkIndex_MetaBalancer::_callmarshall_ReceiveIterationNo_marshall5(char* impl_buf, void* impl_obj_void) {
  MetaBalancer* impl_obj = static_cast< MetaBalancer *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveIterationNo(impl_noname_0);
  return implP.size();
}

void CkIndex_MetaBalancer::_marshallmessagepup_ReceiveIterationNo_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::ReceiveIterationNo_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RegisterNoObjCallback(int impl_noname_1);
 */

void CProxy_MetaBalancer::RegisterNoObjCallback(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::RegisterNoObjCallback(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::RegisterNoObjCallback(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_RegisterNoObjCallback_marshall6() {
  int epidx = CkRegisterEp("RegisterNoObjCallback(int impl_noname_1)",
      _call_RegisterNoObjCallback_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_RegisterNoObjCallback_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_RegisterNoObjCallback_marshall6);

  return epidx;
}


void CkIndex_MetaBalancer::_call_RegisterNoObjCallback_marshall6(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->RegisterNoObjCallback(impl_noname_1);
}

int CkIndex_MetaBalancer::_callmarshall_RegisterNoObjCallback_marshall6(char* impl_buf, void* impl_obj_void) {
  MetaBalancer* impl_obj = static_cast< MetaBalancer *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->RegisterNoObjCallback(impl_noname_1);
  return implP.size();
}

void CkIndex_MetaBalancer::_marshallmessagepup_RegisterNoObjCallback_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::RegisterNoObjCallback_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TriggerAdaptiveReduction();
 */

void CProxy_MetaBalancer::TriggerAdaptiveReduction(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::TriggerAdaptiveReduction(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::TriggerAdaptiveReduction(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_TriggerAdaptiveReduction_void() {
  int epidx = CkRegisterEp("TriggerAdaptiveReduction()",
      _call_TriggerAdaptiveReduction_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_MetaBalancer::_call_TriggerAdaptiveReduction_void(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->TriggerAdaptiveReduction();
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::TriggerAdaptiveReduction_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaLBCallLBOnChares();
 */

void CProxy_MetaBalancer::MetaLBCallLBOnChares(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::MetaLBCallLBOnChares(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancer::MetaLBCallLBOnChares(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancer::reg_MetaLBCallLBOnChares_void() {
  int epidx = CkRegisterEp("MetaLBCallLBOnChares()",
      _call_MetaLBCallLBOnChares_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_MetaBalancer::_call_MetaLBCallLBOnChares_void(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->MetaLBCallLBOnChares();
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancer::MetaLBCallLBOnChares_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaBalancer(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_MetaBalancer::reg_MetaBalancer_CkMigrateMessage() {
  int epidx = CkRegisterEp("MetaBalancer(CkMigrateMessage* impl_msg)",
      _call_MetaBalancer_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_MetaBalancer::_call_MetaBalancer_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  MetaBalancer* impl_obj = static_cast<MetaBalancer *>(impl_obj_void);
  new (impl_obj) MetaBalancer((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaBalancer();
 */
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveMinStats(const double *load, int n);
 */

void CProxySection_MetaBalancer::ReceiveMinStats(const double *load, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *load, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_load, impl_cnt_load;
  impl_off_load=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_load=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_load;
    implP|impl_cnt_load;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_load,load,impl_cnt_load);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_ReceiveMinStats_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalanceDecision(int req_no, int period);
 */

void CProxySection_MetaBalancer::LoadBalanceDecision(int req_no, int period, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_LoadBalanceDecision_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LoadBalanceDecisionFinal(int req_no, int period);
 */

void CProxySection_MetaBalancer::LoadBalanceDecisionFinal(int req_no, int period, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int req_no, int period
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|req_no;
    implP|period;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|req_no;
    implP|period;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_LoadBalanceDecisionFinal_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveIterationNo(int impl_noname_0);
 */

void CProxySection_MetaBalancer::ReceiveIterationNo(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_ReceiveIterationNo_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RegisterNoObjCallback(int impl_noname_1);
 */

void CProxySection_MetaBalancer::RegisterNoObjCallback(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_RegisterNoObjCallback_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void TriggerAdaptiveReduction();
 */

void CProxySection_MetaBalancer::TriggerAdaptiveReduction(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_TriggerAdaptiveReduction_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaLBCallLBOnChares();
 */

void CProxySection_MetaBalancer::MetaLBCallLBOnChares(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancer::idx_MetaLBCallLBOnChares_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaBalancer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MetaBalancer::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MetaBalancer::isIrreducible());
  // REG: void MetaBalancer();
  idx_MetaBalancer_void();
  CkRegisterDefaultCtor(__idx, idx_MetaBalancer_void());

  _registerInitCall(MetaBalancer::initnodeFn,1);

  // REG: void ReceiveMinStats(const double *load, int n);
  idx_ReceiveMinStats_marshall2();
  idx_redn_wrapper_ReceiveMinStats_marshall2();

  // REG: void LoadBalanceDecision(int req_no, int period);
  idx_LoadBalanceDecision_marshall3();

  // REG: void LoadBalanceDecisionFinal(int req_no, int period);
  idx_LoadBalanceDecisionFinal_marshall4();

  // REG: void ReceiveIterationNo(int impl_noname_0);
  idx_ReceiveIterationNo_marshall5();

  // REG: void RegisterNoObjCallback(int impl_noname_1);
  idx_RegisterNoObjCallback_marshall6();

  // REG: void TriggerAdaptiveReduction();
  idx_TriggerAdaptiveReduction_void();

  // REG: void MetaLBCallLBOnChares();
  idx_MetaLBCallLBOnChares_void();

  // REG: MetaBalancer(CkMigrateMessage* impl_msg);
  idx_MetaBalancer_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MetaBalancer_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MetaBalancerRedn: IrrGroup{
void MetaBalancerRedn();
void ReceiveIterNo(int max_iter);
void getMaxIter(int impl_noname_2);
MetaBalancerRedn(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MetaBalancerRedn::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaBalancerRedn();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveIterNo(int max_iter);
 */

void CProxyElement_MetaBalancerRedn::ReceiveIterNo(int max_iter, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int max_iter
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|max_iter;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|max_iter;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CkIndex_MetaBalancerRedn::_call_redn_wrapper_ReceiveIterNo_marshall2(void* impl_msg, void* impl_obj_void)
{
  MetaBalancerRedn* impl_obj = static_cast<MetaBalancerRedn*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int max_iter*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  int max_iter; implP|max_iter;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveIterNo(max_iter);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMaxIter(int impl_noname_2);
 */

void CProxyElement_MetaBalancerRedn::getMaxIter(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaBalancerRedn();
 */

CkGroupID CProxy_MetaBalancerRedn::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MetaBalancerRedn::__idx, CkIndex_MetaBalancerRedn::idx_MetaBalancerRedn_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_MetaBalancerRedn::reg_MetaBalancerRedn_void() {
  int epidx = CkRegisterEp("MetaBalancerRedn()",
      _call_MetaBalancerRedn_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_MetaBalancerRedn::_call_MetaBalancerRedn_void(void* impl_msg, void* impl_obj_void)
{
  MetaBalancerRedn* impl_obj = static_cast<MetaBalancerRedn *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) MetaBalancerRedn();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveIterNo(int max_iter);
 */

void CProxy_MetaBalancerRedn::ReceiveIterNo(int max_iter, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int max_iter
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|max_iter;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|max_iter;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancerRedn::ReceiveIterNo(int max_iter, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int max_iter
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|max_iter;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|max_iter;
  }
  CkSendMsgBranchMulti(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_MetaBalancerRedn::ReceiveIterNo(int max_iter, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int max_iter
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|max_iter;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|max_iter;
  }
  CkSendMsgBranchGroup(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_MetaBalancerRedn::reg_ReceiveIterNo_marshall2() {
  int epidx = CkRegisterEp("ReceiveIterNo(int max_iter)",
      _call_ReceiveIterNo_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceiveIterNo_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceiveIterNo_marshall2);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_MetaBalancerRedn::reg_redn_wrapper_ReceiveIterNo_marshall2() {
  return CkRegisterEp("redn_wrapper_ReceiveIterNo(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_ReceiveIterNo_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
}


void CkIndex_MetaBalancerRedn::_call_ReceiveIterNo_marshall2(void* impl_msg, void* impl_obj_void)
{
  MetaBalancerRedn* impl_obj = static_cast<MetaBalancerRedn *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int max_iter*/
  PUP::fromMem implP(impl_buf);
  int max_iter; implP|max_iter;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveIterNo(max_iter);
}

int CkIndex_MetaBalancerRedn::_callmarshall_ReceiveIterNo_marshall2(char* impl_buf, void* impl_obj_void) {
  MetaBalancerRedn* impl_obj = static_cast< MetaBalancerRedn *>(impl_obj_void);
  /*Unmarshall pup'd fields: int max_iter*/
  PUP::fromMem implP(impl_buf);
  int max_iter; implP|max_iter;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceiveIterNo(max_iter);
  return implP.size();
}

void CkIndex_MetaBalancerRedn::_marshallmessagepup_ReceiveIterNo_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int max_iter*/
  PUP::fromMem implP(impl_buf);
  int max_iter; implP|max_iter;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("max_iter");
  implDestP|max_iter;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancerRedn::ReceiveIterNo_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMaxIter(int impl_noname_2);
 */

void CProxy_MetaBalancerRedn::getMaxIter(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupID(),0);
}

void CProxy_MetaBalancerRedn::getMaxIter(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_MetaBalancerRedn::getMaxIter(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_MetaBalancerRedn::reg_getMaxIter_marshall3() {
  int epidx = CkRegisterEp("getMaxIter(int impl_noname_2)",
      _call_getMaxIter_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getMaxIter_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getMaxIter_marshall3);

  return epidx;
}


void CkIndex_MetaBalancerRedn::_call_getMaxIter_marshall3(void* impl_msg, void* impl_obj_void)
{
  MetaBalancerRedn* impl_obj = static_cast<MetaBalancerRedn *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getMaxIter(impl_noname_2);
}

int CkIndex_MetaBalancerRedn::_callmarshall_getMaxIter_marshall3(char* impl_buf, void* impl_obj_void) {
  MetaBalancerRedn* impl_obj = static_cast< MetaBalancerRedn *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getMaxIter(impl_noname_2);
  return implP.size();
}

void CkIndex_MetaBalancerRedn::_marshallmessagepup_getMaxIter_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_MetaBalancerRedn::getMaxIter_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_MetaBalancerRedn::reg_MetaBalancerRedn_CkMigrateMessage() {
  int epidx = CkRegisterEp("MetaBalancerRedn(CkMigrateMessage* impl_msg)",
      _call_MetaBalancerRedn_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_MetaBalancerRedn::_call_MetaBalancerRedn_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  MetaBalancerRedn* impl_obj = static_cast<MetaBalancerRedn *>(impl_obj_void);
  new (impl_obj) MetaBalancerRedn((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MetaBalancerRedn();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ReceiveIterNo(int max_iter);
 */

void CProxySection_MetaBalancerRedn::ReceiveIterNo(int max_iter, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int max_iter
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|max_iter;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|max_iter;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancerRedn::idx_ReceiveIterNo_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMaxIter(int impl_noname_2);
 */

void CProxySection_MetaBalancerRedn::getMaxIter(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MetaBalancerRedn::idx_getMaxIter_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MetaBalancerRedn::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MetaBalancerRedn::isIrreducible());
  // REG: void MetaBalancerRedn();
  idx_MetaBalancerRedn_void();
  CkRegisterDefaultCtor(__idx, idx_MetaBalancerRedn_void());

  // REG: void ReceiveIterNo(int max_iter);
  idx_ReceiveIterNo_marshall2();
  idx_redn_wrapper_ReceiveIterNo_marshall2();

  // REG: void getMaxIter(int impl_noname_2);
  idx_getMaxIter_marshall3();

  // REG: MetaBalancerRedn(CkMigrateMessage* impl_msg);
  idx_MetaBalancerRedn_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MetaBalancerRedn_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerMetaBalancer(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("_metalb","CkGroupID",sizeof(_metalb),(void *) &_metalb,__xlater_roPup__metalb);

  CkRegisterReadonly("_metalbred","CkGroupID",sizeof(_metalbred),(void *) &_metalbred,__xlater_roPup__metalbred);

/* REG: mainchare MetaLBInit: Chare{
MetaLBInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_MetaLBInit::__register("MetaLBInit", sizeof(MetaLBInit));

  _registerInitCall(registerLBDataCollection,1);

/* REG: group MetaBalancer: IrrGroup{
void MetaBalancer();
  initcall void initnodeFn(void);
void ReceiveMinStats(const double *load, int n);
void LoadBalanceDecision(int req_no, int period);
void LoadBalanceDecisionFinal(int req_no, int period);
void ReceiveIterationNo(int impl_noname_0);
void RegisterNoObjCallback(int impl_noname_1);
void TriggerAdaptiveReduction();
void MetaLBCallLBOnChares();
MetaBalancer(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MetaBalancer::__register("MetaBalancer", sizeof(MetaBalancer));

/* REG: group MetaBalancerRedn: IrrGroup{
void MetaBalancerRedn();
void ReceiveIterNo(int max_iter);
void getMaxIter(int impl_noname_2);
MetaBalancerRedn(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MetaBalancerRedn::__register("MetaBalancerRedn", sizeof(MetaBalancerRedn));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MetaLBInit::virtual_pup(PUP::er &p) {
    recursive_pup<MetaLBInit >(dynamic_cast<MetaLBInit* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MetaBalancer::virtual_pup(PUP::er &p) {
    recursive_pup<MetaBalancer >(dynamic_cast<MetaBalancer* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MetaBalancerRedn::virtual_pup(PUP::er &p) {
    recursive_pup<MetaBalancerRedn >(dynamic_cast<MetaBalancerRedn* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
