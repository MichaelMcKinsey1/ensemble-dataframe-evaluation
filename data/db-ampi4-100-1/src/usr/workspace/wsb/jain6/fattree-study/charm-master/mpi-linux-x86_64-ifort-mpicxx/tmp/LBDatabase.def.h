


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LBDatabase::ResumeClients_2_closure : public SDAG::Closure {
      

      ResumeClients_2_closure() {
        init();
      }
      ResumeClients_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeClients_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: readonly CkGroupID _lbdb;
 */
extern CkGroupID _lbdb;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__lbdb(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_lbdb;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare LBDBInit: Chare{
LBDBInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LBDBInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBDBInit(CkArgMsg* impl_msg);
 */

CkChareID CProxy_LBDBInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_LBDBInit::__idx, CkIndex_LBDBInit::idx_LBDBInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_LBDBInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_LBDBInit::__idx, CkIndex_LBDBInit::idx_LBDBInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_LBDBInit::CProxy_LBDBInit(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_LBDBInit::__idx, CkIndex_LBDBInit::idx_LBDBInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_LBDBInit::reg_LBDBInit_CkArgMsg() {
  int epidx = CkRegisterEp("LBDBInit(CkArgMsg* impl_msg)",
      _call_LBDBInit_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_LBDBInit::_call_LBDBInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  LBDBInit* impl_obj = static_cast<LBDBInit *>(impl_obj_void);
  new (impl_obj) LBDBInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LBDBInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: LBDBInit(CkArgMsg* impl_msg);
  idx_LBDBInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_LBDBInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LBDatabase: IrrGroup{
void LBDatabase();
void ResumeClients();
  initcall void initnodeFn(void);
LBDatabase(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LBDatabase::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LBDatabase();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */

void CProxyElement_LBDatabase::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBDatabase(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LBDatabase();
 */

CkGroupID CProxy_LBDatabase::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LBDatabase::__idx, CkIndex_LBDatabase::idx_LBDatabase_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_LBDatabase::reg_LBDatabase_void() {
  int epidx = CkRegisterEp("LBDatabase()",
      _call_LBDatabase_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_LBDatabase::_call_LBDatabase_void(void* impl_msg, void* impl_obj_void)
{
  LBDatabase* impl_obj = static_cast<LBDatabase *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) LBDatabase();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */

void CProxy_LBDatabase::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupID(),0);
}

void CProxy_LBDatabase::ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_LBDatabase::ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_LBDatabase::reg_ResumeClients_void() {
  int epidx = CkRegisterEp("ResumeClients()",
      _call_ResumeClients_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_LBDatabase::_call_ResumeClients_void(void* impl_msg, void* impl_obj_void)
{
  LBDatabase* impl_obj = static_cast<LBDatabase *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->ResumeClients();
}
PUPable_def(SINGLE_ARG(Closure_LBDatabase::ResumeClients_2_closure))
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBDatabase(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_LBDatabase::reg_LBDatabase_CkMigrateMessage() {
  int epidx = CkRegisterEp("LBDatabase(CkMigrateMessage* impl_msg)",
      _call_LBDatabase_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_LBDatabase::_call_LBDatabase_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  LBDatabase* impl_obj = static_cast<LBDatabase *>(impl_obj_void);
  new (impl_obj) LBDatabase((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LBDatabase();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */

void CProxySection_LBDatabase::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LBDatabase::idx_ResumeClients_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBDatabase(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LBDatabase::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LBDatabase::isIrreducible());
  // REG: void LBDatabase();
  idx_LBDatabase_void();
  CkRegisterDefaultCtor(__idx, idx_LBDatabase_void());

  // REG: void ResumeClients();
  idx_ResumeClients_void();

  _registerInitCall(LBDatabase::initnodeFn,1);

  // REG: LBDatabase(CkMigrateMessage* impl_msg);
  idx_LBDatabase_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_LBDatabase_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerLBDatabase(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCkMarshall();

  _registerNullLB();

  CkRegisterReadonly("_lbdb","CkGroupID",sizeof(_lbdb),(void *) &_lbdb,__xlater_roPup__lbdb);

/* REG: mainchare LBDBInit: Chare{
LBDBInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_LBDBInit::__register("LBDBInit", sizeof(LBDBInit));

/* REG: group LBDatabase: IrrGroup{
void LBDatabase();
void ResumeClients();
  initcall void initnodeFn(void);
LBDatabase(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_LBDatabase::__register("LBDatabase", sizeof(LBDatabase));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LBDBInit::virtual_pup(PUP::er &p) {
    recursive_pup<LBDBInit >(dynamic_cast<LBDBInit* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LBDatabase::virtual_pup(PUP::er &p) {
    recursive_pup<LBDatabase >(dynamic_cast<LBDatabase* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
