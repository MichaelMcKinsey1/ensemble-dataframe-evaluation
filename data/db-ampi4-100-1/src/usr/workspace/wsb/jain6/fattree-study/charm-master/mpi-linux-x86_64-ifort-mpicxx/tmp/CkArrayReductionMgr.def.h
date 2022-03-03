
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkArrayReductionMgr::setAttachedGroup_3_closure : public SDAG::Closure {
      CkGroupID groupID;


      setAttachedGroup_3_closure() {
        init();
      }
      setAttachedGroup_3_closure(CkMigrateMessage*) {
        init();
      }
      CkGroupID & getP0() { return groupID;}
      void pup(PUP::er& __p) {
        __p | groupID;
        packClosure(__p);
      }
      virtual ~setAttachedGroup_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setAttachedGroup_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: nodegroup CkArrayReductionMgr: NodeGroup{
CkArrayReductionMgr();
CkArrayReductionMgr(int dummy, const CkGroupID &gid);
void setAttachedGroup(const CkGroupID &groupID);
CkArrayReductionMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkArrayReductionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr(int dummy, const CkGroupID &gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setAttachedGroup(const CkGroupID &groupID);
 */

void CProxyElement_CkArrayReductionMgr::setAttachedGroup(const CkGroupID &groupID, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkGroupID &groupID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)groupID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)groupID;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr();
 */

CkGroupID CProxy_CkArrayReductionMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_CkArrayReductionMgr::__idx, CkIndex_CkArrayReductionMgr::idx_CkArrayReductionMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function

int CkIndex_CkArrayReductionMgr::reg_CkArrayReductionMgr_void() {
  int epidx = CkRegisterEp("CkArrayReductionMgr()",
      _call_CkArrayReductionMgr_void, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkArrayReductionMgr::_call_CkArrayReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  CkArrayReductionMgr* impl_obj = static_cast<CkArrayReductionMgr *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) CkArrayReductionMgr();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr(int dummy, const CkGroupID &gid);
 */

CkGroupID CProxy_CkArrayReductionMgr::ckNew(int dummy, const CkGroupID &gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int dummy, const CkGroupID &gid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
  }
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  CkGroupID gId = CkCreateNodeGroup(CkIndex_CkArrayReductionMgr::__idx, CkIndex_CkArrayReductionMgr::idx_CkArrayReductionMgr_marshall2(), impl_msg);
  return gId;
}

  CProxy_CkArrayReductionMgr::CProxy_CkArrayReductionMgr(int dummy, const CkGroupID &gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int dummy, const CkGroupID &gid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
  }
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateNodeGroup(CkIndex_CkArrayReductionMgr::__idx, CkIndex_CkArrayReductionMgr::idx_CkArrayReductionMgr_marshall2(), impl_msg));
}

// Entry point registration function

int CkIndex_CkArrayReductionMgr::reg_CkArrayReductionMgr_marshall2() {
  int epidx = CkRegisterEp("CkArrayReductionMgr(int dummy, const CkGroupID &gid)",
      _call_CkArrayReductionMgr_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkArrayReductionMgr_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkArrayReductionMgr_marshall2);

  return epidx;
}


void CkIndex_CkArrayReductionMgr::_call_CkArrayReductionMgr_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkArrayReductionMgr* impl_obj = static_cast<CkArrayReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int dummy, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  int dummy; implP|dummy;
  CkGroupID gid; implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) CkArrayReductionMgr(dummy, gid);
}

int CkIndex_CkArrayReductionMgr::_callmarshall_CkArrayReductionMgr_marshall2(char* impl_buf, void* impl_obj_void) {
  CkArrayReductionMgr* impl_obj = static_cast< CkArrayReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int dummy, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  int dummy; implP|dummy;
  CkGroupID gid; implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) CkArrayReductionMgr(dummy, gid);
  return implP.size();
}

void CkIndex_CkArrayReductionMgr::_marshallmessagepup_CkArrayReductionMgr_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int dummy, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  int dummy; implP|dummy;
  CkGroupID gid; implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dummy");
  implDestP|dummy;
  if (implDestP.hasComments()) implDestP.comment("gid");
  implDestP|gid;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setAttachedGroup(const CkGroupID &groupID);
 */

void CProxy_CkArrayReductionMgr::setAttachedGroup(const CkGroupID &groupID, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkGroupID &groupID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)groupID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)groupID;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_CkArrayReductionMgr::reg_setAttachedGroup_marshall3() {
  int epidx = CkRegisterEp("setAttachedGroup(const CkGroupID &groupID)",
      _call_setAttachedGroup_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setAttachedGroup_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setAttachedGroup_marshall3);

  return epidx;
}


void CkIndex_CkArrayReductionMgr::_call_setAttachedGroup_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkArrayReductionMgr* impl_obj = static_cast<CkArrayReductionMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkGroupID &groupID*/
  PUP::fromMem implP(impl_buf);
  CkGroupID groupID; implP|groupID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setAttachedGroup(groupID);
}

int CkIndex_CkArrayReductionMgr::_callmarshall_setAttachedGroup_marshall3(char* impl_buf, void* impl_obj_void) {
  CkArrayReductionMgr* impl_obj = static_cast< CkArrayReductionMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkGroupID &groupID*/
  PUP::fromMem implP(impl_buf);
  CkGroupID groupID; implP|groupID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setAttachedGroup(groupID);
  return implP.size();
}

void CkIndex_CkArrayReductionMgr::_marshallmessagepup_setAttachedGroup_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkGroupID &groupID*/
  PUP::fromMem implP(impl_buf);
  CkGroupID groupID; implP|groupID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("groupID");
  implDestP|groupID;
}
PUPable_def(SINGLE_ARG(Closure_CkArrayReductionMgr::setAttachedGroup_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_CkArrayReductionMgr::reg_CkArrayReductionMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkArrayReductionMgr(CkMigrateMessage* impl_msg)",
      _call_CkArrayReductionMgr_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkArrayReductionMgr::_call_CkArrayReductionMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  CkArrayReductionMgr* impl_obj = static_cast<CkArrayReductionMgr *>(impl_obj_void);
  new (impl_obj) CkArrayReductionMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr(int dummy, const CkGroupID &gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setAttachedGroup(const CkGroupID &groupID);
 */

void CProxySection_CkArrayReductionMgr::setAttachedGroup(const CkGroupID &groupID, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkGroupID &groupID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)groupID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)groupID;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_CkArrayReductionMgr::idx_setAttachedGroup_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkArrayReductionMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkArrayReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,CkArrayReductionMgr::isIrreducible());
  // REG: CkArrayReductionMgr();
  idx_CkArrayReductionMgr_void();
  CkRegisterDefaultCtor(__idx, idx_CkArrayReductionMgr_void());

  // REG: CkArrayReductionMgr(int dummy, const CkGroupID &gid);
  idx_CkArrayReductionMgr_marshall2();

  // REG: void setAttachedGroup(const CkGroupID &groupID);
  idx_setAttachedGroup_marshall3();

  // REG: CkArrayReductionMgr(CkMigrateMessage* impl_msg);
  idx_CkArrayReductionMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkArrayReductionMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkArrayReductionMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCkReduction();

/* REG: nodegroup CkArrayReductionMgr: NodeGroup{
CkArrayReductionMgr();
CkArrayReductionMgr(int dummy, const CkGroupID &gid);
void setAttachedGroup(const CkGroupID &groupID);
CkArrayReductionMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkArrayReductionMgr::__register("CkArrayReductionMgr", sizeof(CkArrayReductionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkArrayReductionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkArrayReductionMgr >(dynamic_cast<CkArrayReductionMgr* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
