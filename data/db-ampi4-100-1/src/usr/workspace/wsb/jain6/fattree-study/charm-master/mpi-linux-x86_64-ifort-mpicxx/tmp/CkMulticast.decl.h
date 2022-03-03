#ifndef _DECL_CkMulticast_H_
#define _DECL_CkMulticast_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: message cookieMsg;
 */
class cookieMsg;
class CMessage_cookieMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_cookieMsg();
    static void *pack(cookieMsg *p);
    static cookieMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message multicastSetupMsg{
CkArrayIndex arrIdx[];
int lastKnown[];
}
;
 */
class multicastSetupMsg;
class CMessage_multicastSetupMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_multicastSetupMsg();
    static void *pack(multicastSetupMsg *p);
    static multicastSetupMsg* unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message multicastGrpMsg;
 */
class multicastGrpMsg;
class CMessage_multicastGrpMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_multicastGrpMsg();
    static void *pack(multicastGrpMsg *p);
    static multicastGrpMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group CkMulticastMgr: IrrGroup{
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
 class CkMulticastMgr;
 class CkIndex_CkMulticastMgr;
 class CProxy_CkMulticastMgr;
 class CProxyElement_CkMulticastMgr;
 class CProxySection_CkMulticastMgr;
/* --------------- index object ------------------ */
class CkIndex_CkMulticastMgr:public CkIndex_IrrGroup{
  public:
    typedef CkMulticastMgr local_t;
    typedef CkIndex_CkMulticastMgr index_t;
    typedef CProxy_CkMulticastMgr proxy_t;
    typedef CProxyElement_CkMulticastMgr element_t;
    typedef CProxySection_CkMulticastMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
     */
    // Entry point registration at startup
    
    static int reg_CkMulticastMgr_marshall1();
    // Entry point index lookup
    
    inline static int idx_CkMulticastMgr_marshall1() {
      static int epidx = reg_CkMulticastMgr_marshall1();
      return epidx;
    }

    
    static int ckNew(int _dfactor = 2, unsigned int _split_size = 32768, unsigned int _split_threshold = 32768) { return idx_CkMulticastMgr_marshall1(); }
    
    static void _call_CkMulticastMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkMulticastMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkMulticastMgr_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkMulticastMgr_marshall1(PUP::er &p,void *msg);
    /* DECLS: void setup(multicastSetupMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setup_multicastSetupMsg();
    // Entry point index lookup
    
    inline static int idx_setup_multicastSetupMsg() {
      static int epidx = reg_setup_multicastSetupMsg();
      return epidx;
    }

    
    inline static int idx_setup(void (CkMulticastMgr::*)(multicastSetupMsg* impl_msg) ) {
      return idx_setup_multicastSetupMsg();
    }


    
    static int setup(multicastSetupMsg* impl_msg) { return idx_setup_multicastSetupMsg(); }
    
    static void _call_setup_multicastSetupMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setup_multicastSetupMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
     */
    // Entry point registration at startup
    
    static int reg_recvCookie_marshall3();
    // Entry point index lookup
    
    inline static int idx_recvCookie_marshall3() {
      static int epidx = reg_recvCookie_marshall3();
      return epidx;
    }

    
    inline static int idx_recvCookie(void (CkMulticastMgr::*)(const CkSectionInfo &sid, const CkSectionInfo &child) ) {
      return idx_recvCookie_marshall3();
    }


    
    static int recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child) { return idx_recvCookie_marshall3(); }
    
    static void _call_recvCookie_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCookie_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvCookie_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvCookie_marshall3(PUP::er &p,void *msg);
    /* DECLS: void teardown(const CkSectionInfo &sid);
     */
    // Entry point registration at startup
    
    static int reg_teardown_marshall4();
    // Entry point index lookup
    
    inline static int idx_teardown_marshall4() {
      static int epidx = reg_teardown_marshall4();
      return epidx;
    }

    
    inline static int idx_teardown(void (CkMulticastMgr::*)(const CkSectionInfo &sid) ) {
      return idx_teardown_marshall4();
    }


    
    static int teardown(const CkSectionInfo &sid) { return idx_teardown_marshall4(); }
    
    static void _call_teardown_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_teardown_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_teardown_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_teardown_marshall4(PUP::er &p,void *msg);
    /* DECLS: void freeup(const CkSectionInfo &sid);
     */
    // Entry point registration at startup
    
    static int reg_freeup_marshall5();
    // Entry point index lookup
    
    inline static int idx_freeup_marshall5() {
      static int epidx = reg_freeup_marshall5();
      return epidx;
    }

    
    inline static int idx_freeup(void (CkMulticastMgr::*)(const CkSectionInfo &sid) ) {
      return idx_freeup_marshall5();
    }


    
    static int freeup(const CkSectionInfo &sid) { return idx_freeup_marshall5(); }
    
    static void _call_freeup_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_freeup_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_freeup_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_freeup_marshall5(PUP::er &p,void *msg);
    /* DECLS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
     */
    // Entry point registration at startup
    
    static int reg_retrieveCookie_marshall6();
    // Entry point index lookup
    
    inline static int idx_retrieveCookie_marshall6() {
      static int epidx = reg_retrieveCookie_marshall6();
      return epidx;
    }

    
    inline static int idx_retrieveCookie(void (CkMulticastMgr::*)(const CkSectionInfo &s, const CkSectionInfo &srcInfo) ) {
      return idx_retrieveCookie_marshall6();
    }


    
    static int retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo) { return idx_retrieveCookie_marshall6(); }
    
    static void _call_retrieveCookie_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_retrieveCookie_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_retrieveCookie_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_retrieveCookie_marshall6(PUP::er &p,void *msg);
    /* DECLS: void recvCookieInfo(const CkSectionInfo &s, int red);
     */
    // Entry point registration at startup
    
    static int reg_recvCookieInfo_marshall7();
    // Entry point index lookup
    
    inline static int idx_recvCookieInfo_marshall7() {
      static int epidx = reg_recvCookieInfo_marshall7();
      return epidx;
    }

    
    inline static int idx_recvCookieInfo(void (CkMulticastMgr::*)(const CkSectionInfo &s, int red) ) {
      return idx_recvCookieInfo_marshall7();
    }


    
    static int recvCookieInfo(const CkSectionInfo &s, int red) { return idx_recvCookieInfo_marshall7(); }
    
    static void _call_recvCookieInfo_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCookieInfo_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvCookieInfo_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvCookieInfo_marshall7(PUP::er &p,void *msg);
    /* DECLS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
     */
    // Entry point registration at startup
    
    static int reg_retire_marshall8();
    // Entry point index lookup
    
    inline static int idx_retire_marshall8() {
      static int epidx = reg_retire_marshall8();
      return epidx;
    }

    
    inline static int idx_retire(void (CkMulticastMgr::*)(const CkSectionInfo &sid, const CkSectionInfo &root) ) {
      return idx_retire_marshall8();
    }


    
    static int retire(const CkSectionInfo &sid, const CkSectionInfo &root) { return idx_retire_marshall8(); }
    
    static void _call_retire_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_retire_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_retire_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_retire_marshall8(PUP::er &p,void *msg);
    /* DECLS: void recvMsg(multicastGrpMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMsg_multicastGrpMsg();
    // Entry point index lookup
    
    inline static int idx_recvMsg_multicastGrpMsg() {
      static int epidx = reg_recvMsg_multicastGrpMsg();
      return epidx;
    }

    
    inline static int idx_recvMsg(void (CkMulticastMgr::*)(multicastGrpMsg* impl_msg) ) {
      return idx_recvMsg_multicastGrpMsg();
    }


    
    static int recvMsg(multicastGrpMsg* impl_msg) { return idx_recvMsg_multicastGrpMsg(); }
    
    static void _call_recvMsg_multicastGrpMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMsg_multicastGrpMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sendToLocal(multicastGrpMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendToLocal_multicastGrpMsg();
    // Entry point index lookup
    
    inline static int idx_sendToLocal_multicastGrpMsg() {
      static int epidx = reg_sendToLocal_multicastGrpMsg();
      return epidx;
    }

    
    inline static int idx_sendToLocal(void (CkMulticastMgr::*)(multicastGrpMsg* impl_msg) ) {
      return idx_sendToLocal_multicastGrpMsg();
    }


    
    static int sendToLocal(multicastGrpMsg* impl_msg) { return idx_sendToLocal_multicastGrpMsg(); }
    
    static void _call_sendToLocal_multicastGrpMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendToLocal_multicastGrpMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
     */
    // Entry point registration at startup
    
    static int reg_recvPacket_marshall11();
    // Entry point index lookup
    
    inline static int idx_recvPacket_marshall11() {
      static int epidx = reg_recvPacket_marshall11();
      return epidx;
    }

    
    inline static int idx_recvPacket(void (CkMulticastMgr::*)(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer) ) {
      return idx_recvPacket_marshall11();
    }


    
    static int recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer) { return idx_recvPacket_marshall11(); }
    
    static void _call_recvPacket_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvPacket_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvPacket_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvPacket_marshall11(PUP::er &p,void *msg);
    /* DECLS: void recvRedMsg(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvRedMsg_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_recvRedMsg_CkReductionMsg() {
      static int epidx = reg_recvRedMsg_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_recvRedMsg(void (CkMulticastMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_recvRedMsg_CkReductionMsg();
    }


    
    static int recvRedMsg(CkReductionMsg* impl_msg) { return idx_recvRedMsg_CkReductionMsg(); }
    
    static void _call_recvRedMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvRedMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void updateRedNo(const mCastEntryPtr &e, int no);
     */
    // Entry point registration at startup
    
    static int reg_updateRedNo_marshall13();
    // Entry point index lookup
    
    inline static int idx_updateRedNo_marshall13() {
      static int epidx = reg_updateRedNo_marshall13();
      return epidx;
    }

    
    inline static int idx_updateRedNo(void (CkMulticastMgr::*)(const mCastEntryPtr &e, int no) ) {
      return idx_updateRedNo_marshall13();
    }


    
    static int updateRedNo(const mCastEntryPtr &e, int no) { return idx_updateRedNo_marshall13(); }
    
    static void _call_updateRedNo_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateRedNo_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateRedNo_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateRedNo_marshall13(PUP::er &p,void *msg);
    /* DECLS: CkMulticastMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkMulticastMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkMulticastMgr_CkMigrateMessage() {
      static int epidx = reg_CkMulticastMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkMulticastMgr_CkMigrateMessage(); }
    
    static void _call_CkMulticastMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkMulticastMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkMulticastMgr: public CProxyElement_IrrGroup{
  public:
    typedef CkMulticastMgr local_t;
    typedef CkIndex_CkMulticastMgr index_t;
    typedef CProxy_CkMulticastMgr proxy_t;
    typedef CProxyElement_CkMulticastMgr element_t;
    typedef CProxySection_CkMulticastMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkMulticastMgr(void) {
    }
    CProxyElement_CkMulticastMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkMulticastMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkMulticastMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    CkMulticastMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkMulticastMgr* ckLocalBranch(CkGroupID gID) {
      return (CkMulticastMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
 */
    

/* DECLS: void setup(multicastSetupMsg* impl_msg);
 */
    
    void setup(multicastSetupMsg* impl_msg);

/* DECLS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
 */
    
    void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void teardown(const CkSectionInfo &sid);
 */
    
    void teardown(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void freeup(const CkSectionInfo &sid);
 */
    
    void freeup(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
 */
    
    void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCookieInfo(const CkSectionInfo &s, int red);
 */
    
    void recvCookieInfo(const CkSectionInfo &s, int red, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
 */
    
    void retire(const CkSectionInfo &sid, const CkSectionInfo &root, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMsg(multicastGrpMsg* impl_msg);
 */
    
    void recvMsg(multicastGrpMsg* impl_msg);

/* DECLS: void sendToLocal(multicastGrpMsg* impl_msg);
 */
    
    void sendToLocal(multicastGrpMsg* impl_msg);

/* DECLS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
 */
    
    void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRedMsg(CkReductionMsg* impl_msg);
 */
    
    void recvRedMsg(CkReductionMsg* impl_msg);

/* DECLS: void updateRedNo(const mCastEntryPtr &e, int no);
 */
    
    void updateRedNo(const mCastEntryPtr &e, int no, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkMulticastMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkMulticastMgr)
/* ---------------- collective proxy -------------- */
class CProxy_CkMulticastMgr: public CProxy_IrrGroup{
  public:
    typedef CkMulticastMgr local_t;
    typedef CkIndex_CkMulticastMgr index_t;
    typedef CProxy_CkMulticastMgr proxy_t;
    typedef CProxyElement_CkMulticastMgr element_t;
    typedef CProxySection_CkMulticastMgr section_t;

    CProxy_CkMulticastMgr(void) {
    }
    CProxy_CkMulticastMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkMulticastMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkMulticastMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkMulticastMgr operator[](int onPE) const
      {return CProxyElement_CkMulticastMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    CkMulticastMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkMulticastMgr* ckLocalBranch(CkGroupID gID) {
      return (CkMulticastMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
 */
    
    static CkGroupID ckNew(int _dfactor = 2, unsigned int _split_size = 32768, unsigned int _split_threshold = 32768, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkMulticastMgr(int _dfactor = 2, unsigned int _split_size = 32768, unsigned int _split_threshold = 32768, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setup(multicastSetupMsg* impl_msg);
 */
    
    void setup(multicastSetupMsg* impl_msg);
    
    void setup(multicastSetupMsg* impl_msg, int npes, int *pes);
    
    void setup(multicastSetupMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
 */
    
    void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void teardown(const CkSectionInfo &sid);
 */
    
    void teardown(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts=NULL);
    
    void teardown(const CkSectionInfo &sid, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void teardown(const CkSectionInfo &sid, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void freeup(const CkSectionInfo &sid);
 */
    
    void freeup(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts=NULL);
    
    void freeup(const CkSectionInfo &sid, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void freeup(const CkSectionInfo &sid, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
 */
    
    void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, const CkEntryOptions *impl_e_opts=NULL);
    
    void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCookieInfo(const CkSectionInfo &s, int red);
 */
    
    void recvCookieInfo(const CkSectionInfo &s, int red, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvCookieInfo(const CkSectionInfo &s, int red, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvCookieInfo(const CkSectionInfo &s, int red, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
 */
    
    void retire(const CkSectionInfo &sid, const CkSectionInfo &root, const CkEntryOptions *impl_e_opts=NULL);
    
    void retire(const CkSectionInfo &sid, const CkSectionInfo &root, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void retire(const CkSectionInfo &sid, const CkSectionInfo &root, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMsg(multicastGrpMsg* impl_msg);
 */
    
    void recvMsg(multicastGrpMsg* impl_msg);
    
    void recvMsg(multicastGrpMsg* impl_msg, int npes, int *pes);
    
    void recvMsg(multicastGrpMsg* impl_msg, CmiGroup &grp);

/* DECLS: void sendToLocal(multicastGrpMsg* impl_msg);
 */
    
    void sendToLocal(multicastGrpMsg* impl_msg);
    
    void sendToLocal(multicastGrpMsg* impl_msg, int npes, int *pes);
    
    void sendToLocal(multicastGrpMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
 */
    
    void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRedMsg(CkReductionMsg* impl_msg);
 */
    
    void recvRedMsg(CkReductionMsg* impl_msg);
    
    void recvRedMsg(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void recvRedMsg(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateRedNo(const mCastEntryPtr &e, int no);
 */
    
    void updateRedNo(const mCastEntryPtr &e, int no, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateRedNo(const mCastEntryPtr &e, int no, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateRedNo(const mCastEntryPtr &e, int no, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkMulticastMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkMulticastMgr)
/* ---------------- section proxy -------------- */
class CProxySection_CkMulticastMgr: public CProxySection_IrrGroup{
  public:
    typedef CkMulticastMgr local_t;
    typedef CkIndex_CkMulticastMgr index_t;
    typedef CProxy_CkMulticastMgr proxy_t;
    typedef CProxyElement_CkMulticastMgr element_t;
    typedef CProxySection_CkMulticastMgr section_t;

    CProxySection_CkMulticastMgr(void) {
    }
    CProxySection_CkMulticastMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkMulticastMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkMulticastMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkMulticastMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkMulticastMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    CkMulticastMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkMulticastMgr* ckLocalBranch(CkGroupID gID) {
      return (CkMulticastMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkMulticastMgr(int _dfactor, unsigned int _split_size, unsigned int _split_threshold);
 */
    

/* DECLS: void setup(multicastSetupMsg* impl_msg);
 */
    
    void setup(multicastSetupMsg* impl_msg);

/* DECLS: void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child);
 */
    
    void recvCookie(const CkSectionInfo &sid, const CkSectionInfo &child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void teardown(const CkSectionInfo &sid);
 */
    
    void teardown(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void freeup(const CkSectionInfo &sid);
 */
    
    void freeup(const CkSectionInfo &sid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo);
 */
    
    void retrieveCookie(const CkSectionInfo &s, const CkSectionInfo &srcInfo, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCookieInfo(const CkSectionInfo &s, int red);
 */
    
    void recvCookieInfo(const CkSectionInfo &s, int red, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void retire(const CkSectionInfo &sid, const CkSectionInfo &root);
 */
    
    void retire(const CkSectionInfo &sid, const CkSectionInfo &root, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMsg(multicastGrpMsg* impl_msg);
 */
    
    void recvMsg(multicastGrpMsg* impl_msg);

/* DECLS: void sendToLocal(multicastGrpMsg* impl_msg);
 */
    
    void sendToLocal(multicastGrpMsg* impl_msg);

/* DECLS: void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer);
 */
    
    void recvPacket(const CkSectionInfo &_cookie, int offset, int n, const char *data, int seqno, int count, int totalsize, int frombufer, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRedMsg(CkReductionMsg* impl_msg);
 */
    
    void recvRedMsg(CkReductionMsg* impl_msg);

/* DECLS: void updateRedNo(const mCastEntryPtr &e, int no);
 */
    
    void updateRedNo(const mCastEntryPtr &e, int no, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkMulticastMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkMulticastMgr)
#define CkMulticastMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkMulticastMgr>CBase_CkMulticastMgr;





/* ---------------- method closures -------------- */
class Closure_CkMulticastMgr {
  public:



    struct recvCookie_3_closure;


    struct teardown_4_closure;


    struct freeup_5_closure;


    struct retrieveCookie_6_closure;


    struct recvCookieInfo_7_closure;


    struct retire_8_closure;




    struct recvPacket_11_closure;



    struct updateRedNo_13_closure;


};


extern void _registerCkMulticast(void);
#endif
