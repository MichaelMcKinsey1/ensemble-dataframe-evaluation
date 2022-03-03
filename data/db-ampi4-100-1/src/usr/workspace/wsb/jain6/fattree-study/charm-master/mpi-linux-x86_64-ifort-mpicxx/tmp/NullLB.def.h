



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NullLB::migrationsDone_2_closure : public SDAG::Closure {
      

      migrationsDone_2_closure() {
        init();
      }
      migrationsDone_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~migrationsDone_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(migrationsDone_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */






/* DEFS: group NullLB: BaseLB{
void NullLB(const CkLBOptions &impl_noname_0);
void migrationsDone();
NullLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NullLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NullLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void migrationsDone();
 */

void CProxyElement_NullLB::migrationsDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NullLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NullLB(const CkLBOptions &impl_noname_0);
 */

CkGroupID CProxy_NullLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  CkGroupID gId = CkCreateGroup(CkIndex_NullLB::__idx, CkIndex_NullLB::idx_NullLB_marshall1(), impl_msg);
  return gId;
}

  CProxy_NullLB::CProxy_NullLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateGroup(CkIndex_NullLB::__idx, CkIndex_NullLB::idx_NullLB_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_NullLB::reg_NullLB_marshall1() {
  int epidx = CkRegisterEp("NullLB(const CkLBOptions &impl_noname_0)",
      _call_NullLB_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_NullLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_NullLB_marshall1);

  return epidx;
}


void CkIndex_NullLB::_call_NullLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  NullLB* impl_obj = static_cast<NullLB *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) NullLB(impl_noname_0);
}

int CkIndex_NullLB::_callmarshall_NullLB_marshall1(char* impl_buf, void* impl_obj_void) {
  NullLB* impl_obj = static_cast< NullLB *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) NullLB(impl_noname_0);
  return implP.size();
}

void CkIndex_NullLB::_marshallmessagepup_NullLB_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void migrationsDone();
 */

void CProxy_NullLB::migrationsDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupID(),0);
}

void CProxy_NullLB::migrationsDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_NullLB::migrationsDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_NullLB::reg_migrationsDone_void() {
  int epidx = CkRegisterEp("migrationsDone()",
      _call_migrationsDone_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_NullLB::_call_migrationsDone_void(void* impl_msg, void* impl_obj_void)
{
  NullLB* impl_obj = static_cast<NullLB *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->migrationsDone();
}
PUPable_def(SINGLE_ARG(Closure_NullLB::migrationsDone_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NullLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_NullLB::reg_NullLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("NullLB(CkMigrateMessage* impl_msg)",
      _call_NullLB_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_NullLB::_call_NullLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  NullLB* impl_obj = static_cast<NullLB *>(impl_obj_void);
  new (impl_obj) NullLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NullLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void migrationsDone();
 */

void CProxySection_NullLB::migrationsDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_NullLB::idx_migrationsDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_NullLB::idx_migrationsDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NullLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NullLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_BaseLB::__idx);
   CkRegisterGroupIrr(__idx,NullLB::isIrreducible());
  // REG: void NullLB(const CkLBOptions &impl_noname_0);
  idx_NullLB_marshall1();

  // REG: void migrationsDone();
  idx_migrationsDone_void();

  // REG: NullLB(CkMigrateMessage* impl_msg);
  idx_NullLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_NullLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNullLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerLBDatabase();

  _registerBaseLB();

  _registerInitCall(lbinit,1);

  _registerInitCall(lbprocinit,0);

/* REG: group NullLB: BaseLB{
void NullLB(const CkLBOptions &impl_noname_0);
void migrationsDone();
NullLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_NullLB::__register("NullLB", sizeof(NullLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_NullLB::virtual_pup(PUP::er &p) {
    recursive_pup<NullLB >(dynamic_cast<NullLB* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
