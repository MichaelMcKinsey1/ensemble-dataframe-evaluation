


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::recvCookie_3_closure : public SDAG::Closure {
      CkSectionInfo sid;
      CkSectionInfo child;


      recvCookie_3_closure() {
        init();
      }
      recvCookie_3_closure(CkMigrateMessage*) {
        init();
      }
      CkSectionInfo & getP0() { return sid;}
      CkSectionInfo & getP1() { return child;}
      void pup(PUP::er& __p) {
        __p | sid;
        __p | child;
        packClosure(__p);
      }
      virtual ~recvCookie_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvCookie_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::teardown_4_closure : public SDAG::Closure {
      CkSectionInfo sid;


      teardown_4_closure() {
        init();
      }
      teardown_4_closure(CkMigrateMessage*) {
        init();
      }
      CkSectionInfo & getP0() { return sid;}
      void pup(PUP::er& __p) {
        __p | sid;
        packClosure(__p);
      }
      virtual ~teardown_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(teardown_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::freeup_5_closure : public SDAG::Closure {
      CkSectionInfo sid;


      freeup_5_closure() {
        init();
      }
      freeup_5_closure(CkMigrateMessage*) {
        init();
      }
      CkSectionInfo & getP0() { return sid;}
      void pup(PUP::er& __p) {
        __p | sid;
        packClosure(__p);
      }
      virtual ~freeup_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(freeup_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::retrieveCookie_6_closure : public SDAG::Closure {
      CkSectionInfo s;
      CkSectionInfo srcInfo;


      retrieveCookie_6_closure() {
        init();
      }
      retrieveCookie_6_closure(CkMigrateMessage*) {
        init();
      }
      CkSectionInfo & getP0() { return s;}
      CkSectionInfo & getP1() { return srcInfo;}
      void pup(PUP::er& __p) {
        __p | s;
        __p | srcInfo;
        packClosure(__p);
      }
      virtual ~retrieveCookie_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(retrieveCookie_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::recvCookieInfo_7_closure : public SDAG::Closure {
      CkSectionInfo s;
      int red;


      recvCookieInfo_7_closure() {
        init();
      }
      recvCookieInfo_7_closure(CkMigrateMessage*) {
        init();
      }
      CkSectionInfo & getP0() { return s;}
      int & getP1() { return red;}
      void pup(PUP::er& __p) {
        __p | s;
        __p | red;
        packClosure(__p);
      }
      virtual ~recvCookieInfo_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvCookieInfo_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::retire_8_closure : public SDAG::Closure {
      CkSectionInfo sid;
      CkSectionInfo root;


      retire_8_closure() {
        init();
      }
      retire_8_closure(CkMigrateMessage*) {
        init();
      }
      CkSectionInfo & getP0() { return sid;}
      CkSectionInfo & getP1() { return root;}
      void pup(PUP::er& __p) {
        __p | sid;
        __p | root;
        packClosure(__p);
      }
      virtual ~retire_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(retire_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::recvPacket_11_closure : public SDAG::Closure {
      CkSectionInfo _cookie;
      int offset;
      int n;
      char *data;
      int seqno;
      int count;
      int totalsize;
      int frombufer;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      recvPacket_11_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      recvPacket_11_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      CkSectionInfo & getP0() { return _cookie;}
      int & getP1() { return offset;}
      int & getP2() { return n;}
      char *& getP3() { return data;}
      int & getP4() { return seqno;}
      int & getP5() { return count;}
      int & getP6() { return totalsize;}
      int & getP7() { return frombufer;}
      void pup(PUP::er& __p) {
        __p | _cookie;
        __p | offset;
        __p | n;
        __p | seqno;
        __p | count;
        __p | totalsize;
        __p | frombufer;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  CkSectionInfo _cookie; implP|_cookie;
  int offset; implP|offset;
  int n; implP|n;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  int seqno; implP|seqno;
  int count; implP|count;
  int totalsize; implP|totalsize;
  int frombufer; implP|frombufer;
          impl_buf+=CK_ALIGN(implP.size(),16);
          data = (char *)(impl_buf+impl_off_data);
        }
      }
      virtual ~recvPacket_11_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(recvPacket_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CkMulticastMgr::updateRedNo_13_closure : public SDAG::Closure {
      mCastEntryPtr e;
      int no;


      updateRedNo_13_closure() {
        init();
      }
      updateRedNo_13_closure(CkMigrateMessage*) {
        init();
      }
      mCastEntryPtr & getP0() { return e;}
      int & getP1() { return no;}
      void pup(PUP::er& __p) {
        __p | e;
        __p | no;
        packClosure(__p);
      }
      virtual ~updateRedNo_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateRedNo_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message cookieMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_cookieMsg::operator new(size_t s){
  return cookieMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_cookieMsg::operator new(size_t s, int* sz){
  return cookieMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_cookieMsg::operator new(size_t s, int* sz,const int pb){
  return cookieMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_cookieMsg::operator new(size_t s, const int p) {
  return cookieMsg::alloc(__idx, s, 0, p);
}
void* CMessage_cookieMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_cookieMsg::CMessage_cookieMsg() {
cookieMsg *newmsg = (cookieMsg *)this;
}
void CMessage_cookieMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_cookieMsg::pack(cookieMsg *msg) {
  return (void *) msg;
}
cookieMsg* CMessage_cookieMsg::unpack(void* buf) {
  cookieMsg *msg = (cookieMsg *) buf;
  return msg;
}
int CMessage_cookieMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message multicastSetupMsg{
CkArrayIndex arrIdx[];
int lastKnown[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_multicastSetupMsg::operator new(size_t s){
  return multicastSetupMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_multicastSetupMsg::operator new(size_t s, int* sz){
  return multicastSetupMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_multicastSetupMsg::operator new(size_t s, int* sz,const int pb){
  return multicastSetupMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_multicastSetupMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return multicastSetupMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_multicastSetupMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return multicastSetupMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_multicastSetupMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(CkArrayIndex)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_multicastSetupMsg::CMessage_multicastSetupMsg() {
multicastSetupMsg *newmsg = (multicastSetupMsg *)this;
  newmsg->arrIdx = (CkArrayIndex *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->lastKnown = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_multicastSetupMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_multicastSetupMsg::pack(multicastSetupMsg *msg) {
  msg->arrIdx = (CkArrayIndex *) ((char *)msg->arrIdx - (char *)msg);
  msg->lastKnown = (int *) ((char *)msg->lastKnown - (char *)msg);
  return (void *) msg;
}
multicastSetupMsg* CMessage_multicastSetupMsg::unpack(void* buf) {
  multicastSetupMsg *msg = (multicastSetupMsg *) buf;
  msg->arrIdx = (CkArrayIndex *) ((size_t)msg->arrIdx + (char *)msg);
  msg->lastKnown = (int *) ((size_t)msg->lastKnown + (char *)msg);
  return msg;
}
int CMessage_multicastSetupMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message multicastGrpMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_multicastGrpMsg::operator new(size_t s){
  return multicastGrpMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_multicastGrpMsg::operator new(size_t s, int* sz){
  return multicastGrpMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_multicastGrpMsg::operator new(size_t s, int* sz,const int pb){
  return multicastGrpMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_multicastGrpMsg::operator new(size_t s, const int p) {
  return multicastGrpMsg::alloc(__idx, s, 0, p);
}
void* CMessage_multicastGrpMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_multicastGrpMsg::CMessage_multicastGrpMsg() {
multicastGrpMsg *newmsg = (multicastGrpMsg *)this;
}
void CMessage_multicastGrpMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_multicastGrpMsg::pack(multicastGrpMsg *msg) {
  return (void *) msg;
}
multicastGrpMsg* CMessage_multicastGrpMsg::unpack(void* buf) {
  multicastGrpMsg *msg = (multicastGrpMsg *) buf;
  return msg;
}
int CMessage_multicastGrpMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkMulticastMgr: IrrGroup{
CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
void setup(multicastSetupMsg* impl_msg);
void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
void teardown(const CkSectionInfo &sid);
void freeup(const CkSectionInfo &sid);
void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
void recvCookieInfo(const CkSectionInfo &s, int red);
void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
void recvMsg(multicastGrpMsg* impl_msg);
void sendToLocal(multicastGrpMsg* impl_msg);
void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
void recvRedMsg(CkReductionMsg* impl_msg);
void updateRedNo(const mCastEntryPtr &e, int no);
CkMulticastMgr(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CkMulticastMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(multicastSetupMsg* impl_msg);
 */

void CProxyElement_CkMulticastMgr::setup(multicastSetupMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
 */

void CProxyElement_CkMulticastMgr::recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void teardown(const CkSectionInfo &sid);
 */

void CProxyElement_CkMulticastMgr::teardown(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void freeup(const CkSectionInfo &sid);
 */

void CProxyElement_CkMulticastMgr::freeup(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
 */

void CProxyElement_CkMulticastMgr::retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &s, const CkSectionInfo &srcInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCookieInfo(const CkSectionInfo &s, int red);
 */

void CProxyElement_CkMulticastMgr::recvCookieInfo(const CkSectionInfo &s, int red, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &s, int red
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
 */

void CProxyElement_CkMulticastMgr::retire(const CkSectionInfo &sid, const CkSectionInfo &root, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &root
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsg(multicastGrpMsg* impl_msg);
 */

void CProxyElement_CkMulticastMgr::recvMsg(multicastGrpMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendToLocal(multicastGrpMsg* impl_msg);
 */

void CProxyElement_CkMulticastMgr::sendToLocal(multicastGrpMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
 */

void CProxyElement_CkMulticastMgr::recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvRedMsg(CkReductionMsg* impl_msg);
 */

void CProxyElement_CkMulticastMgr::recvRedMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateRedNo(const mCastEntryPtr &e, int no);
 */

void CProxyElement_CkMulticastMgr::updateRedNo(const mCastEntryPtr &e, int no, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const mCastEntryPtr &e, int no
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMulticastMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
 */

CkGroupID CProxy_CkMulticastMgr::ckNew(int _dfactor, unsigned int _split_size, unsigned int _split_threshold, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int _dfactor, unsigned int _split_size, unsigned int _split_threshold
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_dfactor;
    implP|_split_size;
    implP|_split_threshold;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_dfactor;
    implP|_split_size;
    implP|_split_threshold;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  CkGroupID gId = CkCreateGroup(CkIndex_CkMulticastMgr::__idx, CkIndex_CkMulticastMgr::idx_CkMulticastMgr_marshall1(), impl_msg);
  return gId;
}

  CProxy_CkMulticastMgr::CProxy_CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int _dfactor, unsigned int _split_size, unsigned int _split_threshold
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_dfactor;
    implP|_split_size;
    implP|_split_threshold;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_dfactor;
    implP|_split_size;
    implP|_split_threshold;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateGroup(CkIndex_CkMulticastMgr::__idx, CkIndex_CkMulticastMgr::idx_CkMulticastMgr_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_CkMulticastMgr_marshall1() {
  int epidx = CkRegisterEp("CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold)",
      _call_CkMulticastMgr_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkMulticastMgr_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkMulticastMgr_marshall1);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_CkMulticastMgr_marshall1(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int _dfactor, unsigned int _split_size, unsigned int _split_threshold*/
  PUP::fromMem implP(impl_buf);
  int _dfactor; implP|_dfactor;
  unsigned int _split_size; implP|_split_size;
  unsigned int _split_threshold; implP|_split_threshold;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) CkMulticastMgr(_dfactor, _split_size, _split_threshold);
}

int CkIndex_CkMulticastMgr::_callmarshall_CkMulticastMgr_marshall1(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: int _dfactor, unsigned int _split_size, unsigned int _split_threshold*/
  PUP::fromMem implP(impl_buf);
  int _dfactor; implP|_dfactor;
  unsigned int _split_size; implP|_split_size;
  unsigned int _split_threshold; implP|_split_threshold;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) CkMulticastMgr(_dfactor, _split_size, _split_threshold);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_CkMulticastMgr_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int _dfactor, unsigned int _split_size, unsigned int _split_threshold*/
  PUP::fromMem implP(impl_buf);
  int _dfactor; implP|_dfactor;
  unsigned int _split_size; implP|_split_size;
  unsigned int _split_threshold; implP|_split_threshold;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("_dfactor");
  implDestP|_dfactor;
  if (implDestP.hasComments()) implDestP.comment("_split_size");
  implDestP|_split_size;
  if (implDestP.hasComments()) implDestP.comment("_split_threshold");
  implDestP|_split_threshold;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(multicastSetupMsg* impl_msg);
 */

void CProxy_CkMulticastMgr::setup(multicastSetupMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::setup(multicastSetupMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::setup(multicastSetupMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_setup_multicastSetupMsg() {
  int epidx = CkRegisterEp("setup(multicastSetupMsg* impl_msg)",
      _call_setup_multicastSetupMsg, CMessage_multicastSetupMsg::__idx, __idx, 0+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)multicastSetupMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkMulticastMgr::_call_setup_multicastSetupMsg(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  impl_obj->setup((multicastSetupMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
 */

void CProxy_CkMulticastMgr::recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_recvCookie_marshall3() {
  int epidx = CkRegisterEp("recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child)",
      _call_recvCookie_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvCookie_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvCookie_marshall3);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_recvCookie_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid, const CkSectionInfo &child*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  CkSectionInfo child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvCookie(sid, child);
}

int CkIndex_CkMulticastMgr::_callmarshall_recvCookie_marshall3(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &sid, const CkSectionInfo &child*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  CkSectionInfo child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvCookie(sid, child);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_recvCookie_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid, const CkSectionInfo &child*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  CkSectionInfo child; implP|child;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("sid");
  implDestP|sid;
  if (implDestP.hasComments()) implDestP.comment("child");
  implDestP|child;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::recvCookie_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void teardown(const CkSectionInfo &sid);
 */

void CProxy_CkMulticastMgr::teardown(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::teardown(const CkSectionInfo &sid, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::teardown(const CkSectionInfo &sid, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_teardown_marshall4() {
  int epidx = CkRegisterEp("teardown(const CkSectionInfo &sid)",
      _call_teardown_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_teardown_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_teardown_marshall4);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_teardown_marshall4(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->teardown(sid);
}

int CkIndex_CkMulticastMgr::_callmarshall_teardown_marshall4(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &sid*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->teardown(sid);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_teardown_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("sid");
  implDestP|sid;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::teardown_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void freeup(const CkSectionInfo &sid);
 */

void CProxy_CkMulticastMgr::freeup(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::freeup(const CkSectionInfo &sid, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::freeup(const CkSectionInfo &sid, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_freeup_marshall5() {
  int epidx = CkRegisterEp("freeup(const CkSectionInfo &sid)",
      _call_freeup_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_freeup_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_freeup_marshall5);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_freeup_marshall5(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->freeup(sid);
}

int CkIndex_CkMulticastMgr::_callmarshall_freeup_marshall5(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &sid*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->freeup(sid);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_freeup_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("sid");
  implDestP|sid;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::freeup_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
 */

void CProxy_CkMulticastMgr::retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &s, const CkSectionInfo &srcInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &s, const CkSectionInfo &srcInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &s, const CkSectionInfo &srcInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_retrieveCookie_marshall6() {
  int epidx = CkRegisterEp("retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo)",
      _call_retrieveCookie_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_retrieveCookie_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_retrieveCookie_marshall6);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_retrieveCookie_marshall6(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &s, const CkSectionInfo &srcInfo*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo s; implP|s;
  CkSectionInfo srcInfo; implP|srcInfo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->retrieveCookie(s, srcInfo);
}

int CkIndex_CkMulticastMgr::_callmarshall_retrieveCookie_marshall6(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &s, const CkSectionInfo &srcInfo*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo s; implP|s;
  CkSectionInfo srcInfo; implP|srcInfo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->retrieveCookie(s, srcInfo);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_retrieveCookie_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &s, const CkSectionInfo &srcInfo*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo s; implP|s;
  CkSectionInfo srcInfo; implP|srcInfo;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
  if (implDestP.hasComments()) implDestP.comment("srcInfo");
  implDestP|srcInfo;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::retrieveCookie_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCookieInfo(const CkSectionInfo &s, int red);
 */

void CProxy_CkMulticastMgr::recvCookieInfo(const CkSectionInfo &s, int red, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &s, int red
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::recvCookieInfo(const CkSectionInfo &s, int red, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &s, int red
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::recvCookieInfo(const CkSectionInfo &s, int red, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &s, int red
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_recvCookieInfo_marshall7() {
  int epidx = CkRegisterEp("recvCookieInfo(const CkSectionInfo &s, int red)",
      _call_recvCookieInfo_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvCookieInfo_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvCookieInfo_marshall7);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_recvCookieInfo_marshall7(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &s, int red*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo s; implP|s;
  int red; implP|red;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvCookieInfo(s, red);
}

int CkIndex_CkMulticastMgr::_callmarshall_recvCookieInfo_marshall7(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &s, int red*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo s; implP|s;
  int red; implP|red;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvCookieInfo(s, red);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_recvCookieInfo_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &s, int red*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo s; implP|s;
  int red; implP|red;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
  if (implDestP.hasComments()) implDestP.comment("red");
  implDestP|red;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::recvCookieInfo_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
 */

void CProxy_CkMulticastMgr::retire(const CkSectionInfo &sid, const CkSectionInfo &root, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &root
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::retire(const CkSectionInfo &sid, const CkSectionInfo &root, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &root
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::retire(const CkSectionInfo &sid, const CkSectionInfo &root, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &root
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_retire_marshall8() {
  int epidx = CkRegisterEp("retire(const CkSectionInfo &sid, const CkSectionInfo &root)",
      _call_retire_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_retire_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_retire_marshall8);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_retire_marshall8(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid, const CkSectionInfo &root*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  CkSectionInfo root; implP|root;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->retire(sid, root);
}

int CkIndex_CkMulticastMgr::_callmarshall_retire_marshall8(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &sid, const CkSectionInfo &root*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  CkSectionInfo root; implP|root;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->retire(sid, root);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_retire_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &sid, const CkSectionInfo &root*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo sid; implP|sid;
  CkSectionInfo root; implP|root;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("sid");
  implDestP|sid;
  if (implDestP.hasComments()) implDestP.comment("root");
  implDestP|root;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::retire_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsg(multicastGrpMsg* impl_msg);
 */

void CProxy_CkMulticastMgr::recvMsg(multicastGrpMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::recvMsg(multicastGrpMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::recvMsg(multicastGrpMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_recvMsg_multicastGrpMsg() {
  int epidx = CkRegisterEp("recvMsg(multicastGrpMsg* impl_msg)",
      _call_recvMsg_multicastGrpMsg, CMessage_multicastGrpMsg::__idx, __idx, 0+CK_EP_TRACEDISABLE+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)multicastGrpMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkMulticastMgr::_call_recvMsg_multicastGrpMsg(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  impl_obj->recvMsg((multicastGrpMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendToLocal(multicastGrpMsg* impl_msg);
 */

void CProxy_CkMulticastMgr::sendToLocal(multicastGrpMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::sendToLocal(multicastGrpMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::sendToLocal(multicastGrpMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_sendToLocal_multicastGrpMsg() {
  int epidx = CkRegisterEp("sendToLocal(multicastGrpMsg* impl_msg)",
      _call_sendToLocal_multicastGrpMsg, CMessage_multicastGrpMsg::__idx, __idx, 0+CK_EP_TRACEDISABLE+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)multicastGrpMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkMulticastMgr::_call_sendToLocal_multicastGrpMsg(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  impl_obj->sendToLocal((multicastGrpMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
 */

void CProxy_CkMulticastMgr::recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_recvPacket_marshall11() {
  int epidx = CkRegisterEp("recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer)",
      _call_recvPacket_marshall11, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvPacket_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvPacket_marshall11);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_recvPacket_marshall11(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo _cookie; implP|_cookie;
  int offset; implP|offset;
  int n; implP|n;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  int seqno; implP|seqno;
  int count; implP|count;
  int totalsize; implP|totalsize;
  int frombufer; implP|frombufer;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  impl_obj->recvPacket(_cookie, offset, n, data, seqno, count, totalsize, frombufer);
}

int CkIndex_CkMulticastMgr::_callmarshall_recvPacket_marshall11(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo _cookie; implP|_cookie;
  int offset; implP|offset;
  int n; implP|n;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  int seqno; implP|seqno;
  int count; implP|count;
  int totalsize; implP|totalsize;
  int frombufer; implP|frombufer;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  impl_obj->recvPacket(_cookie, offset, n, data, seqno, count, totalsize, frombufer);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_recvPacket_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer*/
  PUP::fromMem implP(impl_buf);
  CkSectionInfo _cookie; implP|_cookie;
  int offset; implP|offset;
  int n; implP|n;
  int impl_off_data, impl_cnt_data; 
  implP|impl_off_data;
  implP|impl_cnt_data;
  int seqno; implP|seqno;
  int count; implP|count;
  int totalsize; implP|totalsize;
  int frombufer; implP|frombufer;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  if (implDestP.hasComments()) implDestP.comment("_cookie");
  implDestP|_cookie;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*data))<impl_cnt_data;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|data[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("seqno");
  implDestP|seqno;
  if (implDestP.hasComments()) implDestP.comment("count");
  implDestP|count;
  if (implDestP.hasComments()) implDestP.comment("totalsize");
  implDestP|totalsize;
  if (implDestP.hasComments()) implDestP.comment("frombufer");
  implDestP|frombufer;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::recvPacket_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvRedMsg(CkReductionMsg* impl_msg);
 */

void CProxy_CkMulticastMgr::recvRedMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::recvRedMsg(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_CkMulticastMgr::recvRedMsg(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_recvRedMsg_CkReductionMsg() {
  int epidx = CkRegisterEp("recvRedMsg(CkReductionMsg* impl_msg)",
      _call_recvRedMsg_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_TRACEDISABLE+CK_EP_INTRINSIC);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_CkMulticastMgr::_call_recvRedMsg_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  impl_obj->recvRedMsg((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateRedNo(const mCastEntryPtr &e, int no);
 */

void CProxy_CkMulticastMgr::updateRedNo(const mCastEntryPtr &e, int no, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const mCastEntryPtr &e, int no
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupID(),0);
}

void CProxy_CkMulticastMgr::updateRedNo(const mCastEntryPtr &e, int no, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const mCastEntryPtr &e, int no
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
  }
  CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_CkMulticastMgr::updateRedNo(const mCastEntryPtr &e, int no, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const mCastEntryPtr &e, int no
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
  }
  CkSendMsgBranchGroup(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_updateRedNo_marshall13() {
  int epidx = CkRegisterEp("updateRedNo(const mCastEntryPtr &e, int no)",
      _call_updateRedNo_marshall13, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_INTRINSIC);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateRedNo_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateRedNo_marshall13);

  return epidx;
}


void CkIndex_CkMulticastMgr::_call_updateRedNo_marshall13(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const mCastEntryPtr &e, int no*/
  PUP::fromMem implP(impl_buf);
  mCastEntryPtr e; implP|e;
  int no; implP|no;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateRedNo(e, no);
}

int CkIndex_CkMulticastMgr::_callmarshall_updateRedNo_marshall13(char* impl_buf, void* impl_obj_void) {
  CkMulticastMgr* impl_obj = static_cast< CkMulticastMgr *>(impl_obj_void);
  /*Unmarshall pup'd fields: const mCastEntryPtr &e, int no*/
  PUP::fromMem implP(impl_buf);
  mCastEntryPtr e; implP|e;
  int no; implP|no;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateRedNo(e, no);
  return implP.size();
}

void CkIndex_CkMulticastMgr::_marshallmessagepup_updateRedNo_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const mCastEntryPtr &e, int no*/
  PUP::fromMem implP(impl_buf);
  mCastEntryPtr e; implP|e;
  int no; implP|no;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("e");
  implDestP|e;
  if (implDestP.hasComments()) implDestP.comment("no");
  implDestP|no;
}
PUPable_def(SINGLE_ARG(Closure_CkMulticastMgr::updateRedNo_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMulticastMgr(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_CkMulticastMgr::reg_CkMulticastMgr_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkMulticastMgr(CkMigrateMessage* impl_msg)",
      _call_CkMulticastMgr_CkMigrateMessage, 0, __idx, 0+CK_EP_INTRINSIC);
  return epidx;
}


void CkIndex_CkMulticastMgr::_call_CkMulticastMgr_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  CkMulticastMgr* impl_obj = static_cast<CkMulticastMgr *>(impl_obj_void);
  new (impl_obj) CkMulticastMgr((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(multicastSetupMsg* impl_msg);
 */

void CProxySection_CkMulticastMgr::setup(multicastSetupMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_setup_multicastSetupMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
 */

void CProxySection_CkMulticastMgr::recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &child
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)child;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvCookie_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void teardown(const CkSectionInfo &sid);
 */

void CProxySection_CkMulticastMgr::teardown(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_teardown_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void freeup(const CkSectionInfo &sid);
 */

void CProxySection_CkMulticastMgr::freeup(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_freeup_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
 */

void CProxySection_CkMulticastMgr::retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &s, const CkSectionInfo &srcInfo
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)srcInfo;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_retrieveCookie_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCookieInfo(const CkSectionInfo &s, int red);
 */

void CProxySection_CkMulticastMgr::recvCookieInfo(const CkSectionInfo &s, int red, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &s, int red
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)s;
    implP|red;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvCookieInfo_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
 */

void CProxySection_CkMulticastMgr::retire(const CkSectionInfo &sid, const CkSectionInfo &root, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &sid, const CkSectionInfo &root
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)sid;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)root;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_retire_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsg(multicastGrpMsg* impl_msg);
 */

void CProxySection_CkMulticastMgr::recvMsg(multicastGrpMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvMsg_multicastGrpMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendToLocal(multicastGrpMsg* impl_msg);
 */

void CProxySection_CkMulticastMgr::sendToLocal(multicastGrpMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_sendToLocal_multicastGrpMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
 */

void CProxySection_CkMulticastMgr::recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkSectionInfo &)_cookie;
    implP|offset;
    implP|n;
    implP|impl_off_data;
    implP|impl_cnt_data;
    implP|seqno;
    implP|count;
    implP|totalsize;
    implP|frombufer;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvPacket_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvRedMsg(CkReductionMsg* impl_msg);
 */

void CProxySection_CkMulticastMgr::recvRedMsg(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_recvRedMsg_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateRedNo(const mCastEntryPtr &e, int no);
 */

void CProxySection_CkMulticastMgr::updateRedNo(const mCastEntryPtr &e, int no, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const mCastEntryPtr &e, int no
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(mCastEntryPtr &)e;
    implP|no;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkMulticastMgr::idx_updateRedNo_marshall13(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CkMulticastMgr(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CkMulticastMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterChareInCharm(__idx);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkMulticastMgr::isIrreducible());
  // REG: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
  idx_CkMulticastMgr_marshall1();

  // REG: void setup(multicastSetupMsg* impl_msg);
  idx_setup_multicastSetupMsg();

  // REG: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
  idx_recvCookie_marshall3();

  // REG: void teardown(const CkSectionInfo &sid);
  idx_teardown_marshall4();

  // REG: void freeup(const CkSectionInfo &sid);
  idx_freeup_marshall5();

  // REG: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
  idx_retrieveCookie_marshall6();

  // REG: void recvCookieInfo(const CkSectionInfo &s, int red);
  idx_recvCookieInfo_marshall7();

  // REG: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
  idx_retire_marshall8();

  // REG: void recvMsg(multicastGrpMsg* impl_msg);
  idx_recvMsg_multicastGrpMsg();

  // REG: void sendToLocal(multicastGrpMsg* impl_msg);
  idx_sendToLocal_multicastGrpMsg();

  // REG: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
  idx_recvPacket_marshall11();

  // REG: void recvRedMsg(CkReductionMsg* impl_msg);
  idx_recvRedMsg_CkReductionMsg();

  // REG: void updateRedNo(const mCastEntryPtr &e, int no);
  idx_updateRedNo_marshall13();

  // REG: CkMulticastMgr(CkMigrateMessage* impl_msg);
  idx_CkMulticastMgr_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkMulticastMgr_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void _registerCkMulticast(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message cookieMsg;
*/
CMessage_cookieMsg::__register("cookieMsg", sizeof(cookieMsg),(CkPackFnPtr) cookieMsg::pack,(CkUnpackFnPtr) cookieMsg::unpack);

/* REG: message multicastSetupMsg{
CkArrayIndex arrIdx[];
int lastKnown[];
}
;
*/
CMessage_multicastSetupMsg::__register("multicastSetupMsg", sizeof(multicastSetupMsg),(CkPackFnPtr) multicastSetupMsg::pack,(CkUnpackFnPtr) multicastSetupMsg::unpack);

/* REG: message multicastGrpMsg;
*/
CMessage_multicastGrpMsg::__register("multicastGrpMsg", sizeof(multicastGrpMsg),(CkPackFnPtr) multicastGrpMsg::pack,(CkUnpackFnPtr) multicastGrpMsg::unpack);

/* REG: group CkMulticastMgr: IrrGroup{
CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
void setup(multicastSetupMsg* impl_msg);
void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
void teardown(const CkSectionInfo &sid);
void freeup(const CkSectionInfo &sid);
void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
void recvCookieInfo(const CkSectionInfo &s, int red);
void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
void recvMsg(multicastGrpMsg* impl_msg);
void sendToLocal(multicastGrpMsg* impl_msg);
void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
void recvRedMsg(CkReductionMsg* impl_msg);
void updateRedNo(const mCastEntryPtr &e, int no);
CkMulticastMgr(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_CkMulticastMgr::__register("CkMulticastMgr", sizeof(CkMulticastMgr));

  _registerInitCall(_ckMulticastInit,1);

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CkMulticastMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CkMulticastMgr >(dynamic_cast<CkMulticastMgr* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
