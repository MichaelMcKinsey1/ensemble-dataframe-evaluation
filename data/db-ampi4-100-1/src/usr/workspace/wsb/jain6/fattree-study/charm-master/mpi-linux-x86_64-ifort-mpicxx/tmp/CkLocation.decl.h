#ifndef _DECL_CkLocation_H_
#define _DECL_CkLocation_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CkMarshall.decl.h"

/* DECLS: message CkArrayElementMigrateMessage{
char packData[];
}
;
 */
class CkArrayElementMigrateMessage;
class CMessage_CkArrayElementMigrateMessage:public CkMessage{
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
    CMessage_CkArrayElementMigrateMessage();
    static void *pack(CkArrayElementMigrateMessage *p);
    static CkArrayElementMigrateMessage* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group CkLocMgr: IrrGroup{
CkLocMgr(const CkArrayOptions &opts);
void immigrate(CkArrayElementMigrateMessage* impl_msg);
void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr);
void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere);
void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe);
void updateLocation(const CmiUInt8 &id, int nowOnPe);
void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
void dummyAtSync();
CkLocMgr(CkMigrateMessage* impl_msg);
};
 */
 class CkLocMgr;
 class CkIndex_CkLocMgr;
 class CProxy_CkLocMgr;
 class CProxyElement_CkLocMgr;
 class CProxySection_CkLocMgr;
/* --------------- index object ------------------ */
class CkIndex_CkLocMgr:public CkIndex_IrrGroup{
  public:
    typedef CkLocMgr local_t;
    typedef CkIndex_CkLocMgr index_t;
    typedef CProxy_CkLocMgr proxy_t;
    typedef CProxyElement_CkLocMgr element_t;
    typedef CProxySection_CkLocMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkLocMgr(const CkArrayOptions &opts);
     */
    // Entry point registration at startup
    
    static int reg_CkLocMgr_marshall1();
    // Entry point index lookup
    
    inline static int idx_CkLocMgr_marshall1() {
      static int epidx = reg_CkLocMgr_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkArrayOptions &opts) { return idx_CkLocMgr_marshall1(); }
    
    static void _call_CkLocMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkLocMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkLocMgr_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkLocMgr_marshall1(PUP::er &p,void *msg);
    /* DECLS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_immigrate_CkArrayElementMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_immigrate_CkArrayElementMigrateMessage() {
      static int epidx = reg_immigrate_CkArrayElementMigrateMessage();
      return epidx;
    }

    
    inline static int idx_immigrate(void (CkLocMgr::*)(CkArrayElementMigrateMessage* impl_msg) ) {
      return idx_immigrate_CkArrayElementMigrateMessage();
    }


    
    static int immigrate(CkArrayElementMigrateMessage* impl_msg) { return idx_immigrate_CkArrayElementMigrateMessage(); }
    
    static void _call_immigrate_CkArrayElementMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_immigrate_CkArrayElementMigrateMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr);
     */
    // Entry point registration at startup
    
    static int reg_requestLocation_marshall3();
    // Entry point index lookup
    
    inline static int idx_requestLocation_marshall3() {
      static int epidx = reg_requestLocation_marshall3();
      return epidx;
    }

    
    inline static int idx_requestLocation(void (CkLocMgr::*)(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr) ) {
      return idx_requestLocation_marshall3();
    }


    
    static int requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr) { return idx_requestLocation_marshall3(); }
    
    static void _call_requestLocation_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestLocation_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestLocation_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestLocation_marshall3(PUP::er &p,void *msg);
    /* DECLS: void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere);
     */
    // Entry point registration at startup
    
    static int reg_requestLocation_marshall4();
    // Entry point index lookup
    
    inline static int idx_requestLocation_marshall4() {
      static int epidx = reg_requestLocation_marshall4();
      return epidx;
    }

    
    inline static int idx_requestLocation(void (CkLocMgr::*)(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere) ) {
      return idx_requestLocation_marshall4();
    }


    
    static int requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere) { return idx_requestLocation_marshall4(); }
    
    static void _call_requestLocation_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestLocation_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestLocation_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestLocation_marshall4(PUP::er &p,void *msg);
    /* DECLS: void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe);
     */
    // Entry point registration at startup
    
    static int reg_updateLocation_marshall5();
    // Entry point index lookup
    
    inline static int idx_updateLocation_marshall5() {
      static int epidx = reg_updateLocation_marshall5();
      return epidx;
    }

    
    inline static int idx_updateLocation(void (CkLocMgr::*)(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe) ) {
      return idx_updateLocation_marshall5();
    }


    
    static int updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe) { return idx_updateLocation_marshall5(); }
    
    static void _call_updateLocation_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocation_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateLocation_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateLocation_marshall5(PUP::er &p,void *msg);
    /* DECLS: void updateLocation(const CmiUInt8 &id, int nowOnPe);
     */
    // Entry point registration at startup
    
    static int reg_updateLocation_marshall6();
    // Entry point index lookup
    
    inline static int idx_updateLocation_marshall6() {
      static int epidx = reg_updateLocation_marshall6();
      return epidx;
    }

    
    inline static int idx_updateLocation(void (CkLocMgr::*)(const CmiUInt8 &id, int nowOnPe) ) {
      return idx_updateLocation_marshall6();
    }


    
    static int updateLocation(const CmiUInt8 &id, int nowOnPe) { return idx_updateLocation_marshall6(); }
    
    static void _call_updateLocation_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocation_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateLocation_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateLocation_marshall6(PUP::er &p,void *msg);
    /* DECLS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
     */
    // Entry point registration at startup
    
    static int reg_reclaimRemote_marshall7();
    // Entry point index lookup
    
    inline static int idx_reclaimRemote_marshall7() {
      static int epidx = reg_reclaimRemote_marshall7();
      return epidx;
    }

    
    inline static int idx_reclaimRemote(void (CkLocMgr::*)(const CkArrayIndex &idx, int deletedOnPe) ) {
      return idx_reclaimRemote_marshall7();
    }


    
    static int reclaimRemote(const CkArrayIndex &idx, int deletedOnPe) { return idx_reclaimRemote_marshall7(); }
    
    static void _call_reclaimRemote_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reclaimRemote_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reclaimRemote_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reclaimRemote_marshall7(PUP::er &p,void *msg);
    /* DECLS: void dummyAtSync();
     */
    // Entry point registration at startup
    
    static int reg_dummyAtSync_void();
    // Entry point index lookup
    
    inline static int idx_dummyAtSync_void() {
      static int epidx = reg_dummyAtSync_void();
      return epidx;
    }

    
    inline static int idx_dummyAtSync(void (CkLocMgr::*)() ) {
      return idx_dummyAtSync_void();
    }


    
    static int dummyAtSync() { return idx_dummyAtSync_void(); }
    
    static void _call_dummyAtSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_dummyAtSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: CkLocMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkLocMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkLocMgr_CkMigrateMessage() {
      static int epidx = reg_CkLocMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkLocMgr_CkMigrateMessage(); }
    
    static void _call_CkLocMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkLocMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkLocMgr: public CProxyElement_IrrGroup{
  public:
    typedef CkLocMgr local_t;
    typedef CkIndex_CkLocMgr index_t;
    typedef CProxy_CkLocMgr proxy_t;
    typedef CProxyElement_CkLocMgr element_t;
    typedef CProxySection_CkLocMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkLocMgr(void) {
    }
    CProxyElement_CkLocMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkLocMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkLocMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkLocMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkLocMgr* ckLocalBranch(CkGroupID gID) {
      return (CkLocMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkLocMgr(const CkArrayOptions &opts);
 */
    

/* DECLS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
 */
    
    void immigrate(CkArrayElementMigrateMessage* impl_msg);

/* DECLS: void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr);
 */
    
    void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere);
 */
    
    void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe);
 */
    
    void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocation(const CmiUInt8 &id, int nowOnPe);
 */
    
    void updateLocation(const CmiUInt8 &id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
 */
    
    void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void dummyAtSync();
 */
    
    void dummyAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkLocMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkLocMgr)
/* ---------------- collective proxy -------------- */
class CProxy_CkLocMgr: public CProxy_IrrGroup{
  public:
    typedef CkLocMgr local_t;
    typedef CkIndex_CkLocMgr index_t;
    typedef CProxy_CkLocMgr proxy_t;
    typedef CProxyElement_CkLocMgr element_t;
    typedef CProxySection_CkLocMgr section_t;

    CProxy_CkLocMgr(void) {
    }
    CProxy_CkLocMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkLocMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkLocMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkLocMgr operator[](int onPE) const
      {return CProxyElement_CkLocMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkLocMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkLocMgr* ckLocalBranch(CkGroupID gID) {
      return (CkLocMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkLocMgr(const CkArrayOptions &opts);
 */
    
    static CkGroupID ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkLocMgr(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
 */
    
    void immigrate(CkArrayElementMigrateMessage* impl_msg);
    
    void immigrate(CkArrayElementMigrateMessage* impl_msg, int npes, int *pes);
    
    void immigrate(CkArrayElementMigrateMessage* impl_msg, CmiGroup &grp);

/* DECLS: void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr);
 */
    
    void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere);
 */
    
    void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe);
 */
    
    void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocation(const CmiUInt8 &id, int nowOnPe);
 */
    
    void updateLocation(const CmiUInt8 &id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocation(const CmiUInt8 &id, int nowOnPe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocation(const CmiUInt8 &id, int nowOnPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
 */
    
    void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, const CkEntryOptions *impl_e_opts=NULL);
    
    void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void dummyAtSync();
 */
    
    void dummyAtSync(const CkEntryOptions *impl_e_opts=NULL);
    
    void dummyAtSync(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void dummyAtSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkLocMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkLocMgr)
/* ---------------- section proxy -------------- */
class CProxySection_CkLocMgr: public CProxySection_IrrGroup{
  public:
    typedef CkLocMgr local_t;
    typedef CkIndex_CkLocMgr index_t;
    typedef CProxy_CkLocMgr proxy_t;
    typedef CProxyElement_CkLocMgr element_t;
    typedef CProxySection_CkLocMgr section_t;

    CProxySection_CkLocMgr(void) {
    }
    CProxySection_CkLocMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkLocMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkLocMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkLocMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkLocMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkLocMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkLocMgr* ckLocalBranch(CkGroupID gID) {
      return (CkLocMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkLocMgr(const CkArrayOptions &opts);
 */
    

/* DECLS: void immigrate(CkArrayElementMigrateMessage* impl_msg);
 */
    
    void immigrate(CkArrayElementMigrateMessage* impl_msg);

/* DECLS: void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr);
 */
    
    void requestLocation(const CkArrayIndex &idx, int peToTell, const bool &suppressIfHere, int ifNonExistent, int chareType, const CkArrayID &mgr, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere);
 */
    
    void requestLocation(const CmiUInt8 &id, int peToTell, const bool &suppressIfHere, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe);
 */
    
    void updateLocation(const CkArrayIndex &idx, const CmiUInt8 &id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocation(const CmiUInt8 &id, int nowOnPe);
 */
    
    void updateLocation(const CmiUInt8 &id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe);
 */
    
    void reclaimRemote(const CkArrayIndex &idx, int deletedOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void dummyAtSync();
 */
    
    void dummyAtSync(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkLocMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkLocMgr)
#define CkLocMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkLocMgr>CBase_CkLocMgr;

/* DECLS: group CkArrayMap: IrrGroup;
 */
 class CkArrayMap;
 class CkIndex_CkArrayMap;
 class CProxy_CkArrayMap;
 class CProxyElement_CkArrayMap;
 class CProxySection_CkArrayMap;
/* --------------- index object ------------------ */
class CkIndex_CkArrayMap:public CkIndex_IrrGroup{
  public:
    typedef CkArrayMap local_t;
    typedef CkIndex_CkArrayMap index_t;
    typedef CProxy_CkArrayMap proxy_t;
    typedef CProxyElement_CkArrayMap element_t;
    typedef CProxySection_CkArrayMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkArrayMap: public CProxyElement_IrrGroup{
  public:
    typedef CkArrayMap local_t;
    typedef CkIndex_CkArrayMap index_t;
    typedef CProxy_CkArrayMap proxy_t;
    typedef CProxyElement_CkArrayMap element_t;
    typedef CProxySection_CkArrayMap section_t;


    /* TRAM aggregators */

    CProxyElement_CkArrayMap(void) {
    }
    CProxyElement_CkArrayMap(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkArrayMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkArrayMap(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkArrayMap* ckLocalBranch(CkGroupID gID) {
      return (CkArrayMap*)CkLocalBranch(gID);
    }
};
PUPmarshall(CProxyElement_CkArrayMap)
/* ---------------- collective proxy -------------- */
class CProxy_CkArrayMap: public CProxy_IrrGroup{
  public:
    typedef CkArrayMap local_t;
    typedef CkIndex_CkArrayMap index_t;
    typedef CProxy_CkArrayMap proxy_t;
    typedef CProxyElement_CkArrayMap element_t;
    typedef CProxySection_CkArrayMap section_t;

    CProxy_CkArrayMap(void) {
    }
    CProxy_CkArrayMap(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkArrayMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkArrayMap(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkArrayMap operator[](int onPE) const
      {return CProxyElement_CkArrayMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkArrayMap* ckLocalBranch(CkGroupID gID) {
      return (CkArrayMap*)CkLocalBranch(gID);
    }
};
PUPmarshall(CProxy_CkArrayMap)
/* ---------------- section proxy -------------- */
class CProxySection_CkArrayMap: public CProxySection_IrrGroup{
  public:
    typedef CkArrayMap local_t;
    typedef CkIndex_CkArrayMap index_t;
    typedef CProxy_CkArrayMap proxy_t;
    typedef CProxyElement_CkArrayMap element_t;
    typedef CProxySection_CkArrayMap section_t;

    CProxySection_CkArrayMap(void) {
    }
    CProxySection_CkArrayMap(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkArrayMap* ckLocalBranch(CkGroupID gID) {
      return (CkArrayMap*)CkLocalBranch(gID);
    }
};
PUPmarshall(CProxySection_CkArrayMap)
typedef CBaseT1<Group, CProxy_CkArrayMap>CBase_CkArrayMap;

/* DECLS: group RRMap: CkArrayMap{
RRMap();
RRMap(CkMigrateMessage* impl_msg);
};
 */
 class RRMap;
 class CkIndex_RRMap;
 class CProxy_RRMap;
 class CProxyElement_RRMap;
 class CProxySection_RRMap;
/* --------------- index object ------------------ */
class CkIndex_RRMap:public CkIndex_CkArrayMap{
  public:
    typedef RRMap local_t;
    typedef CkIndex_RRMap index_t;
    typedef CProxy_RRMap proxy_t;
    typedef CProxyElement_RRMap element_t;
    typedef CProxySection_RRMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: RRMap();
     */
    // Entry point registration at startup
    
    static int reg_RRMap_void();
    // Entry point index lookup
    
    inline static int idx_RRMap_void() {
      static int epidx = reg_RRMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_RRMap_void(); }
    
    static void _call_RRMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RRMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: RRMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_RRMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_RRMap_CkMigrateMessage() {
      static int epidx = reg_RRMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_RRMap_CkMigrateMessage(); }
    
    static void _call_RRMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RRMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_RRMap: public CProxyElement_CkArrayMap{
  public:
    typedef RRMap local_t;
    typedef CkIndex_RRMap index_t;
    typedef CProxy_RRMap proxy_t;
    typedef CProxyElement_RRMap element_t;
    typedef CProxySection_RRMap section_t;


    /* TRAM aggregators */

    CProxyElement_RRMap(void) {
    }
    CProxyElement_RRMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_RRMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_RRMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    RRMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static RRMap* ckLocalBranch(CkGroupID gID) {
      return (RRMap*)CkLocalBranch(gID);
    }
/* DECLS: RRMap();
 */
    

/* DECLS: RRMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_RRMap)
/* ---------------- collective proxy -------------- */
class CProxy_RRMap: public CProxy_CkArrayMap{
  public:
    typedef RRMap local_t;
    typedef CkIndex_RRMap index_t;
    typedef CProxy_RRMap proxy_t;
    typedef CProxyElement_RRMap element_t;
    typedef CProxySection_RRMap section_t;

    CProxy_RRMap(void) {
    }
    CProxy_RRMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_RRMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_RRMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_RRMap operator[](int onPE) const
      {return CProxyElement_RRMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    RRMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static RRMap* ckLocalBranch(CkGroupID gID) {
      return (RRMap*)CkLocalBranch(gID);
    }
/* DECLS: RRMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: RRMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_RRMap)
/* ---------------- section proxy -------------- */
class CProxySection_RRMap: public CProxySection_CkArrayMap{
  public:
    typedef RRMap local_t;
    typedef CkIndex_RRMap index_t;
    typedef CProxy_RRMap proxy_t;
    typedef CProxyElement_RRMap element_t;
    typedef CProxySection_RRMap section_t;

    CProxySection_RRMap(void) {
    }
    CProxySection_RRMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_RRMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_RRMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_RRMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_RRMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    RRMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static RRMap* ckLocalBranch(CkGroupID gID) {
      return (RRMap*)CkLocalBranch(gID);
    }
/* DECLS: RRMap();
 */
    

/* DECLS: RRMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_RRMap)
#define RRMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_RRMap>CBase_RRMap;

/* DECLS: readonly CkGroupID _defaultArrayMapID;
 */

/* DECLS: group DefaultArrayMap: RRMap{
DefaultArrayMap();
DefaultArrayMap(CkMigrateMessage* impl_msg);
};
 */
 class DefaultArrayMap;
 class CkIndex_DefaultArrayMap;
 class CProxy_DefaultArrayMap;
 class CProxyElement_DefaultArrayMap;
 class CProxySection_DefaultArrayMap;
/* --------------- index object ------------------ */
class CkIndex_DefaultArrayMap:public CkIndex_RRMap{
  public:
    typedef DefaultArrayMap local_t;
    typedef CkIndex_DefaultArrayMap index_t;
    typedef CProxy_DefaultArrayMap proxy_t;
    typedef CProxyElement_DefaultArrayMap element_t;
    typedef CProxySection_DefaultArrayMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: DefaultArrayMap();
     */
    // Entry point registration at startup
    
    static int reg_DefaultArrayMap_void();
    // Entry point index lookup
    
    inline static int idx_DefaultArrayMap_void() {
      static int epidx = reg_DefaultArrayMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_DefaultArrayMap_void(); }
    
    static void _call_DefaultArrayMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DefaultArrayMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: DefaultArrayMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_DefaultArrayMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_DefaultArrayMap_CkMigrateMessage() {
      static int epidx = reg_DefaultArrayMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_DefaultArrayMap_CkMigrateMessage(); }
    
    static void _call_DefaultArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DefaultArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_DefaultArrayMap: public CProxyElement_RRMap{
  public:
    typedef DefaultArrayMap local_t;
    typedef CkIndex_DefaultArrayMap index_t;
    typedef CProxy_DefaultArrayMap proxy_t;
    typedef CProxyElement_DefaultArrayMap element_t;
    typedef CProxySection_DefaultArrayMap section_t;


    /* TRAM aggregators */

    CProxyElement_DefaultArrayMap(void) {
    }
    CProxyElement_DefaultArrayMap(const IrrGroup *g) : CProxyElement_RRMap(g){
    }
    CProxyElement_DefaultArrayMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_RRMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_DefaultArrayMap(CkGroupID _gid,int _onPE) : CProxyElement_RRMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_RRMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_RRMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_RRMap::ckSetGroupID(g);
    }
    DefaultArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DefaultArrayMap* ckLocalBranch(CkGroupID gID) {
      return (DefaultArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: DefaultArrayMap();
 */
    

/* DECLS: DefaultArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_DefaultArrayMap)
/* ---------------- collective proxy -------------- */
class CProxy_DefaultArrayMap: public CProxy_RRMap{
  public:
    typedef DefaultArrayMap local_t;
    typedef CkIndex_DefaultArrayMap index_t;
    typedef CProxy_DefaultArrayMap proxy_t;
    typedef CProxyElement_DefaultArrayMap element_t;
    typedef CProxySection_DefaultArrayMap section_t;

    CProxy_DefaultArrayMap(void) {
    }
    CProxy_DefaultArrayMap(const IrrGroup *g) : CProxy_RRMap(g){
    }
    CProxy_DefaultArrayMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_RRMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_DefaultArrayMap(CkGroupID _gid) : CProxy_RRMap(_gid){  }
    CProxyElement_DefaultArrayMap operator[](int onPE) const
      {return CProxyElement_DefaultArrayMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_RRMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_RRMap::ckSetGroupID(g);
    }
    DefaultArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DefaultArrayMap* ckLocalBranch(CkGroupID gID) {
      return (DefaultArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: DefaultArrayMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DefaultArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_DefaultArrayMap)
/* ---------------- section proxy -------------- */
class CProxySection_DefaultArrayMap: public CProxySection_RRMap{
  public:
    typedef DefaultArrayMap local_t;
    typedef CkIndex_DefaultArrayMap index_t;
    typedef CProxy_DefaultArrayMap proxy_t;
    typedef CProxyElement_DefaultArrayMap element_t;
    typedef CProxySection_DefaultArrayMap section_t;

    CProxySection_DefaultArrayMap(void) {
    }
    CProxySection_DefaultArrayMap(const IrrGroup *g) : CProxySection_RRMap(g){
    }
    CProxySection_DefaultArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_RRMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_DefaultArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_RRMap(_gid,_pelist,_npes){  }
    CProxySection_DefaultArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_RRMap(n,_gid,_pelist,_npes){  }
    CProxySection_DefaultArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_RRMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_RRMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_RRMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_RRMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_RRMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_RRMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_RRMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_RRMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_RRMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_RRMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_RRMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_RRMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_RRMap::ckSetGroupID(g);
    }
    DefaultArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DefaultArrayMap* ckLocalBranch(CkGroupID gID) {
      return (DefaultArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: DefaultArrayMap();
 */
    

/* DECLS: DefaultArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_DefaultArrayMap)
#define DefaultArrayMap_SDAG_CODE 
typedef CBaseT1<RRMap, CProxy_DefaultArrayMap>CBase_DefaultArrayMap;

/* DECLS: group FastArrayMap: DefaultArrayMap{
FastArrayMap();
FastArrayMap(CkMigrateMessage* impl_msg);
};
 */
 class FastArrayMap;
 class CkIndex_FastArrayMap;
 class CProxy_FastArrayMap;
 class CProxyElement_FastArrayMap;
 class CProxySection_FastArrayMap;
/* --------------- index object ------------------ */
class CkIndex_FastArrayMap:public CkIndex_DefaultArrayMap{
  public:
    typedef FastArrayMap local_t;
    typedef CkIndex_FastArrayMap index_t;
    typedef CProxy_FastArrayMap proxy_t;
    typedef CProxyElement_FastArrayMap element_t;
    typedef CProxySection_FastArrayMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: FastArrayMap();
     */
    // Entry point registration at startup
    
    static int reg_FastArrayMap_void();
    // Entry point index lookup
    
    inline static int idx_FastArrayMap_void() {
      static int epidx = reg_FastArrayMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_FastArrayMap_void(); }
    
    static void _call_FastArrayMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FastArrayMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: FastArrayMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_FastArrayMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_FastArrayMap_CkMigrateMessage() {
      static int epidx = reg_FastArrayMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_FastArrayMap_CkMigrateMessage(); }
    
    static void _call_FastArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FastArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_FastArrayMap: public CProxyElement_DefaultArrayMap{
  public:
    typedef FastArrayMap local_t;
    typedef CkIndex_FastArrayMap index_t;
    typedef CProxy_FastArrayMap proxy_t;
    typedef CProxyElement_FastArrayMap element_t;
    typedef CProxySection_FastArrayMap section_t;


    /* TRAM aggregators */

    CProxyElement_FastArrayMap(void) {
    }
    CProxyElement_FastArrayMap(const IrrGroup *g) : CProxyElement_DefaultArrayMap(g){
    }
    CProxyElement_FastArrayMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_DefaultArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_FastArrayMap(CkGroupID _gid,int _onPE) : CProxyElement_DefaultArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_DefaultArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_DefaultArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_DefaultArrayMap::ckSetGroupID(g);
    }
    FastArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FastArrayMap* ckLocalBranch(CkGroupID gID) {
      return (FastArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: FastArrayMap();
 */
    

/* DECLS: FastArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_FastArrayMap)
/* ---------------- collective proxy -------------- */
class CProxy_FastArrayMap: public CProxy_DefaultArrayMap{
  public:
    typedef FastArrayMap local_t;
    typedef CkIndex_FastArrayMap index_t;
    typedef CProxy_FastArrayMap proxy_t;
    typedef CProxyElement_FastArrayMap element_t;
    typedef CProxySection_FastArrayMap section_t;

    CProxy_FastArrayMap(void) {
    }
    CProxy_FastArrayMap(const IrrGroup *g) : CProxy_DefaultArrayMap(g){
    }
    CProxy_FastArrayMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_DefaultArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_FastArrayMap(CkGroupID _gid) : CProxy_DefaultArrayMap(_gid){  }
    CProxyElement_FastArrayMap operator[](int onPE) const
      {return CProxyElement_FastArrayMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_DefaultArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_DefaultArrayMap::ckSetGroupID(g);
    }
    FastArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FastArrayMap* ckLocalBranch(CkGroupID gID) {
      return (FastArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: FastArrayMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: FastArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_FastArrayMap)
/* ---------------- section proxy -------------- */
class CProxySection_FastArrayMap: public CProxySection_DefaultArrayMap{
  public:
    typedef FastArrayMap local_t;
    typedef CkIndex_FastArrayMap index_t;
    typedef CProxy_FastArrayMap proxy_t;
    typedef CProxyElement_FastArrayMap element_t;
    typedef CProxySection_FastArrayMap section_t;

    CProxySection_FastArrayMap(void) {
    }
    CProxySection_FastArrayMap(const IrrGroup *g) : CProxySection_DefaultArrayMap(g){
    }
    CProxySection_FastArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_DefaultArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_FastArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_DefaultArrayMap(_gid,_pelist,_npes){  }
    CProxySection_FastArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_DefaultArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_FastArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_DefaultArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_DefaultArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_DefaultArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_DefaultArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_DefaultArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_DefaultArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_DefaultArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_DefaultArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_DefaultArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_DefaultArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_DefaultArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_DefaultArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_DefaultArrayMap::ckSetGroupID(g);
    }
    FastArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FastArrayMap* ckLocalBranch(CkGroupID gID) {
      return (FastArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: FastArrayMap();
 */
    

/* DECLS: FastArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_FastArrayMap)
#define FastArrayMap_SDAG_CODE 
typedef CBaseT1<DefaultArrayMap, CProxy_FastArrayMap>CBase_FastArrayMap;

/* DECLS: group HilbertArrayMap: DefaultArrayMap{
HilbertArrayMap();
HilbertArrayMap(CkMigrateMessage* impl_msg);
};
 */
 class HilbertArrayMap;
 class CkIndex_HilbertArrayMap;
 class CProxy_HilbertArrayMap;
 class CProxyElement_HilbertArrayMap;
 class CProxySection_HilbertArrayMap;
/* --------------- index object ------------------ */
class CkIndex_HilbertArrayMap:public CkIndex_DefaultArrayMap{
  public:
    typedef HilbertArrayMap local_t;
    typedef CkIndex_HilbertArrayMap index_t;
    typedef CProxy_HilbertArrayMap proxy_t;
    typedef CProxyElement_HilbertArrayMap element_t;
    typedef CProxySection_HilbertArrayMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: HilbertArrayMap();
     */
    // Entry point registration at startup
    
    static int reg_HilbertArrayMap_void();
    // Entry point index lookup
    
    inline static int idx_HilbertArrayMap_void() {
      static int epidx = reg_HilbertArrayMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_HilbertArrayMap_void(); }
    
    static void _call_HilbertArrayMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HilbertArrayMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: HilbertArrayMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_HilbertArrayMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_HilbertArrayMap_CkMigrateMessage() {
      static int epidx = reg_HilbertArrayMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_HilbertArrayMap_CkMigrateMessage(); }
    
    static void _call_HilbertArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HilbertArrayMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_HilbertArrayMap: public CProxyElement_DefaultArrayMap{
  public:
    typedef HilbertArrayMap local_t;
    typedef CkIndex_HilbertArrayMap index_t;
    typedef CProxy_HilbertArrayMap proxy_t;
    typedef CProxyElement_HilbertArrayMap element_t;
    typedef CProxySection_HilbertArrayMap section_t;


    /* TRAM aggregators */

    CProxyElement_HilbertArrayMap(void) {
    }
    CProxyElement_HilbertArrayMap(const IrrGroup *g) : CProxyElement_DefaultArrayMap(g){
    }
    CProxyElement_HilbertArrayMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_DefaultArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_HilbertArrayMap(CkGroupID _gid,int _onPE) : CProxyElement_DefaultArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_DefaultArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_DefaultArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_DefaultArrayMap::ckSetGroupID(g);
    }
    HilbertArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HilbertArrayMap* ckLocalBranch(CkGroupID gID) {
      return (HilbertArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: HilbertArrayMap();
 */
    

/* DECLS: HilbertArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_HilbertArrayMap)
/* ---------------- collective proxy -------------- */
class CProxy_HilbertArrayMap: public CProxy_DefaultArrayMap{
  public:
    typedef HilbertArrayMap local_t;
    typedef CkIndex_HilbertArrayMap index_t;
    typedef CProxy_HilbertArrayMap proxy_t;
    typedef CProxyElement_HilbertArrayMap element_t;
    typedef CProxySection_HilbertArrayMap section_t;

    CProxy_HilbertArrayMap(void) {
    }
    CProxy_HilbertArrayMap(const IrrGroup *g) : CProxy_DefaultArrayMap(g){
    }
    CProxy_HilbertArrayMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_DefaultArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_HilbertArrayMap(CkGroupID _gid) : CProxy_DefaultArrayMap(_gid){  }
    CProxyElement_HilbertArrayMap operator[](int onPE) const
      {return CProxyElement_HilbertArrayMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_DefaultArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_DefaultArrayMap::ckSetGroupID(g);
    }
    HilbertArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HilbertArrayMap* ckLocalBranch(CkGroupID gID) {
      return (HilbertArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: HilbertArrayMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: HilbertArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_HilbertArrayMap)
/* ---------------- section proxy -------------- */
class CProxySection_HilbertArrayMap: public CProxySection_DefaultArrayMap{
  public:
    typedef HilbertArrayMap local_t;
    typedef CkIndex_HilbertArrayMap index_t;
    typedef CProxy_HilbertArrayMap proxy_t;
    typedef CProxyElement_HilbertArrayMap element_t;
    typedef CProxySection_HilbertArrayMap section_t;

    CProxySection_HilbertArrayMap(void) {
    }
    CProxySection_HilbertArrayMap(const IrrGroup *g) : CProxySection_DefaultArrayMap(g){
    }
    CProxySection_HilbertArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_DefaultArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_HilbertArrayMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_DefaultArrayMap(_gid,_pelist,_npes){  }
    CProxySection_HilbertArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_DefaultArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_HilbertArrayMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_DefaultArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_DefaultArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_DefaultArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_DefaultArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_DefaultArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_DefaultArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_DefaultArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_DefaultArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_DefaultArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_DefaultArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_DefaultArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_DefaultArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_DefaultArrayMap::ckSetGroupID(g);
    }
    HilbertArrayMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HilbertArrayMap* ckLocalBranch(CkGroupID gID) {
      return (HilbertArrayMap*)CkLocalBranch(gID);
    }
/* DECLS: HilbertArrayMap();
 */
    

/* DECLS: HilbertArrayMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_HilbertArrayMap)
#define HilbertArrayMap_SDAG_CODE 
typedef CBaseT1<DefaultArrayMap, CProxy_HilbertArrayMap>CBase_HilbertArrayMap;

/* DECLS: group ReadFileMap: DefaultArrayMap{
ReadFileMap();
ReadFileMap(CkMigrateMessage* impl_msg);
};
 */
 class ReadFileMap;
 class CkIndex_ReadFileMap;
 class CProxy_ReadFileMap;
 class CProxyElement_ReadFileMap;
 class CProxySection_ReadFileMap;
/* --------------- index object ------------------ */
class CkIndex_ReadFileMap:public CkIndex_DefaultArrayMap{
  public:
    typedef ReadFileMap local_t;
    typedef CkIndex_ReadFileMap index_t;
    typedef CProxy_ReadFileMap proxy_t;
    typedef CProxyElement_ReadFileMap element_t;
    typedef CProxySection_ReadFileMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ReadFileMap();
     */
    // Entry point registration at startup
    
    static int reg_ReadFileMap_void();
    // Entry point index lookup
    
    inline static int idx_ReadFileMap_void() {
      static int epidx = reg_ReadFileMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ReadFileMap_void(); }
    
    static void _call_ReadFileMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReadFileMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: ReadFileMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReadFileMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ReadFileMap_CkMigrateMessage() {
      static int epidx = reg_ReadFileMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ReadFileMap_CkMigrateMessage(); }
    
    static void _call_ReadFileMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReadFileMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ReadFileMap: public CProxyElement_DefaultArrayMap{
  public:
    typedef ReadFileMap local_t;
    typedef CkIndex_ReadFileMap index_t;
    typedef CProxy_ReadFileMap proxy_t;
    typedef CProxyElement_ReadFileMap element_t;
    typedef CProxySection_ReadFileMap section_t;


    /* TRAM aggregators */

    CProxyElement_ReadFileMap(void) {
    }
    CProxyElement_ReadFileMap(const IrrGroup *g) : CProxyElement_DefaultArrayMap(g){
    }
    CProxyElement_ReadFileMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_DefaultArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ReadFileMap(CkGroupID _gid,int _onPE) : CProxyElement_DefaultArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_DefaultArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_DefaultArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_DefaultArrayMap::ckSetGroupID(g);
    }
    ReadFileMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReadFileMap* ckLocalBranch(CkGroupID gID) {
      return (ReadFileMap*)CkLocalBranch(gID);
    }
/* DECLS: ReadFileMap();
 */
    

/* DECLS: ReadFileMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ReadFileMap)
/* ---------------- collective proxy -------------- */
class CProxy_ReadFileMap: public CProxy_DefaultArrayMap{
  public:
    typedef ReadFileMap local_t;
    typedef CkIndex_ReadFileMap index_t;
    typedef CProxy_ReadFileMap proxy_t;
    typedef CProxyElement_ReadFileMap element_t;
    typedef CProxySection_ReadFileMap section_t;

    CProxy_ReadFileMap(void) {
    }
    CProxy_ReadFileMap(const IrrGroup *g) : CProxy_DefaultArrayMap(g){
    }
    CProxy_ReadFileMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_DefaultArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ReadFileMap(CkGroupID _gid) : CProxy_DefaultArrayMap(_gid){  }
    CProxyElement_ReadFileMap operator[](int onPE) const
      {return CProxyElement_ReadFileMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_DefaultArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_DefaultArrayMap::ckSetGroupID(g);
    }
    ReadFileMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReadFileMap* ckLocalBranch(CkGroupID gID) {
      return (ReadFileMap*)CkLocalBranch(gID);
    }
/* DECLS: ReadFileMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ReadFileMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ReadFileMap)
/* ---------------- section proxy -------------- */
class CProxySection_ReadFileMap: public CProxySection_DefaultArrayMap{
  public:
    typedef ReadFileMap local_t;
    typedef CkIndex_ReadFileMap index_t;
    typedef CProxy_ReadFileMap proxy_t;
    typedef CProxyElement_ReadFileMap element_t;
    typedef CProxySection_ReadFileMap section_t;

    CProxySection_ReadFileMap(void) {
    }
    CProxySection_ReadFileMap(const IrrGroup *g) : CProxySection_DefaultArrayMap(g){
    }
    CProxySection_ReadFileMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_DefaultArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ReadFileMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_DefaultArrayMap(_gid,_pelist,_npes){  }
    CProxySection_ReadFileMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_DefaultArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_ReadFileMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_DefaultArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_DefaultArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_DefaultArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_DefaultArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_DefaultArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_DefaultArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DefaultArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_DefaultArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_DefaultArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_DefaultArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_DefaultArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_DefaultArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_DefaultArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_DefaultArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_DefaultArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_DefaultArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_DefaultArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_DefaultArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_DefaultArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_DefaultArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_DefaultArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_DefaultArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_DefaultArrayMap::ckSetGroupID(g);
    }
    ReadFileMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReadFileMap* ckLocalBranch(CkGroupID gID) {
      return (ReadFileMap*)CkLocalBranch(gID);
    }
/* DECLS: ReadFileMap();
 */
    

/* DECLS: ReadFileMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ReadFileMap)
#define ReadFileMap_SDAG_CODE 
typedef CBaseT1<DefaultArrayMap, CProxy_ReadFileMap>CBase_ReadFileMap;

/* DECLS: group BlockMap: RRMap{
BlockMap();
BlockMap(CkMigrateMessage* impl_msg);
};
 */
 class BlockMap;
 class CkIndex_BlockMap;
 class CProxy_BlockMap;
 class CProxyElement_BlockMap;
 class CProxySection_BlockMap;
/* --------------- index object ------------------ */
class CkIndex_BlockMap:public CkIndex_RRMap{
  public:
    typedef BlockMap local_t;
    typedef CkIndex_BlockMap index_t;
    typedef CProxy_BlockMap proxy_t;
    typedef CProxyElement_BlockMap element_t;
    typedef CProxySection_BlockMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: BlockMap();
     */
    // Entry point registration at startup
    
    static int reg_BlockMap_void();
    // Entry point index lookup
    
    inline static int idx_BlockMap_void() {
      static int epidx = reg_BlockMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_BlockMap_void(); }
    
    static void _call_BlockMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_BlockMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: BlockMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_BlockMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_BlockMap_CkMigrateMessage() {
      static int epidx = reg_BlockMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_BlockMap_CkMigrateMessage(); }
    
    static void _call_BlockMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_BlockMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_BlockMap: public CProxyElement_RRMap{
  public:
    typedef BlockMap local_t;
    typedef CkIndex_BlockMap index_t;
    typedef CProxy_BlockMap proxy_t;
    typedef CProxyElement_BlockMap element_t;
    typedef CProxySection_BlockMap section_t;


    /* TRAM aggregators */

    CProxyElement_BlockMap(void) {
    }
    CProxyElement_BlockMap(const IrrGroup *g) : CProxyElement_RRMap(g){
    }
    CProxyElement_BlockMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_RRMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_BlockMap(CkGroupID _gid,int _onPE) : CProxyElement_RRMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_RRMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_RRMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_RRMap::ckSetGroupID(g);
    }
    BlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static BlockMap* ckLocalBranch(CkGroupID gID) {
      return (BlockMap*)CkLocalBranch(gID);
    }
/* DECLS: BlockMap();
 */
    

/* DECLS: BlockMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_BlockMap)
/* ---------------- collective proxy -------------- */
class CProxy_BlockMap: public CProxy_RRMap{
  public:
    typedef BlockMap local_t;
    typedef CkIndex_BlockMap index_t;
    typedef CProxy_BlockMap proxy_t;
    typedef CProxyElement_BlockMap element_t;
    typedef CProxySection_BlockMap section_t;

    CProxy_BlockMap(void) {
    }
    CProxy_BlockMap(const IrrGroup *g) : CProxy_RRMap(g){
    }
    CProxy_BlockMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_RRMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_BlockMap(CkGroupID _gid) : CProxy_RRMap(_gid){  }
    CProxyElement_BlockMap operator[](int onPE) const
      {return CProxyElement_BlockMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_RRMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_RRMap::ckSetGroupID(g);
    }
    BlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static BlockMap* ckLocalBranch(CkGroupID gID) {
      return (BlockMap*)CkLocalBranch(gID);
    }
/* DECLS: BlockMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: BlockMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_BlockMap)
/* ---------------- section proxy -------------- */
class CProxySection_BlockMap: public CProxySection_RRMap{
  public:
    typedef BlockMap local_t;
    typedef CkIndex_BlockMap index_t;
    typedef CProxy_BlockMap proxy_t;
    typedef CProxyElement_BlockMap element_t;
    typedef CProxySection_BlockMap section_t;

    CProxySection_BlockMap(void) {
    }
    CProxySection_BlockMap(const IrrGroup *g) : CProxySection_RRMap(g){
    }
    CProxySection_BlockMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_RRMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_BlockMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_RRMap(_gid,_pelist,_npes){  }
    CProxySection_BlockMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_RRMap(n,_gid,_pelist,_npes){  }
    CProxySection_BlockMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_RRMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_RRMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_RRMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_RRMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_RRMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_RRMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_RRMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_RRMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_RRMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_RRMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_RRMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_RRMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_RRMap::ckSetGroupID(g);
    }
    BlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static BlockMap* ckLocalBranch(CkGroupID gID) {
      return (BlockMap*)CkLocalBranch(gID);
    }
/* DECLS: BlockMap();
 */
    

/* DECLS: BlockMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_BlockMap)
#define BlockMap_SDAG_CODE 
typedef CBaseT1<RRMap, CProxy_BlockMap>CBase_BlockMap;

/* DECLS: group CldMap: CkArrayMap{
CldMap();
CldMap(CkMigrateMessage* impl_msg);
};
 */
 class CldMap;
 class CkIndex_CldMap;
 class CProxy_CldMap;
 class CProxyElement_CldMap;
 class CProxySection_CldMap;
/* --------------- index object ------------------ */
class CkIndex_CldMap:public CkIndex_CkArrayMap{
  public:
    typedef CldMap local_t;
    typedef CkIndex_CldMap index_t;
    typedef CProxy_CldMap proxy_t;
    typedef CProxyElement_CldMap element_t;
    typedef CProxySection_CldMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CldMap();
     */
    // Entry point registration at startup
    
    static int reg_CldMap_void();
    // Entry point index lookup
    
    inline static int idx_CldMap_void() {
      static int epidx = reg_CldMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CldMap_void(); }
    
    static void _call_CldMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CldMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: CldMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CldMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CldMap_CkMigrateMessage() {
      static int epidx = reg_CldMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CldMap_CkMigrateMessage(); }
    
    static void _call_CldMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CldMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CldMap: public CProxyElement_CkArrayMap{
  public:
    typedef CldMap local_t;
    typedef CkIndex_CldMap index_t;
    typedef CProxy_CldMap proxy_t;
    typedef CProxyElement_CldMap element_t;
    typedef CProxySection_CldMap section_t;


    /* TRAM aggregators */

    CProxyElement_CldMap(void) {
    }
    CProxyElement_CldMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_CldMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CldMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    CldMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CldMap* ckLocalBranch(CkGroupID gID) {
      return (CldMap*)CkLocalBranch(gID);
    }
/* DECLS: CldMap();
 */
    

/* DECLS: CldMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CldMap)
/* ---------------- collective proxy -------------- */
class CProxy_CldMap: public CProxy_CkArrayMap{
  public:
    typedef CldMap local_t;
    typedef CkIndex_CldMap index_t;
    typedef CProxy_CldMap proxy_t;
    typedef CProxyElement_CldMap element_t;
    typedef CProxySection_CldMap section_t;

    CProxy_CldMap(void) {
    }
    CProxy_CldMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_CldMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CldMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_CldMap operator[](int onPE) const
      {return CProxyElement_CldMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    CldMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CldMap* ckLocalBranch(CkGroupID gID) {
      return (CldMap*)CkLocalBranch(gID);
    }
/* DECLS: CldMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CldMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CldMap)
/* ---------------- section proxy -------------- */
class CProxySection_CldMap: public CProxySection_CkArrayMap{
  public:
    typedef CldMap local_t;
    typedef CkIndex_CldMap index_t;
    typedef CProxy_CldMap proxy_t;
    typedef CProxyElement_CldMap element_t;
    typedef CProxySection_CldMap section_t;

    CProxySection_CldMap(void) {
    }
    CProxySection_CldMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_CldMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CldMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_CldMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_CldMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    CldMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CldMap* ckLocalBranch(CkGroupID gID) {
      return (CldMap*)CkLocalBranch(gID);
    }
/* DECLS: CldMap();
 */
    

/* DECLS: CldMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CldMap)
#define CldMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_CldMap>CBase_CldMap;

/* DECLS: group ConfigurableRRMap: RRMap{
ConfigurableRRMap();
ConfigurableRRMap(CkMigrateMessage* impl_msg);
};
 */
 class ConfigurableRRMap;
 class CkIndex_ConfigurableRRMap;
 class CProxy_ConfigurableRRMap;
 class CProxyElement_ConfigurableRRMap;
 class CProxySection_ConfigurableRRMap;
/* --------------- index object ------------------ */
class CkIndex_ConfigurableRRMap:public CkIndex_RRMap{
  public:
    typedef ConfigurableRRMap local_t;
    typedef CkIndex_ConfigurableRRMap index_t;
    typedef CProxy_ConfigurableRRMap proxy_t;
    typedef CProxyElement_ConfigurableRRMap element_t;
    typedef CProxySection_ConfigurableRRMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ConfigurableRRMap();
     */
    // Entry point registration at startup
    
    static int reg_ConfigurableRRMap_void();
    // Entry point index lookup
    
    inline static int idx_ConfigurableRRMap_void() {
      static int epidx = reg_ConfigurableRRMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ConfigurableRRMap_void(); }
    
    static void _call_ConfigurableRRMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ConfigurableRRMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ConfigurableRRMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ConfigurableRRMap_CkMigrateMessage() {
      static int epidx = reg_ConfigurableRRMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ConfigurableRRMap_CkMigrateMessage(); }
    
    static void _call_ConfigurableRRMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ConfigurableRRMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ConfigurableRRMap: public CProxyElement_RRMap{
  public:
    typedef ConfigurableRRMap local_t;
    typedef CkIndex_ConfigurableRRMap index_t;
    typedef CProxy_ConfigurableRRMap proxy_t;
    typedef CProxyElement_ConfigurableRRMap element_t;
    typedef CProxySection_ConfigurableRRMap section_t;


    /* TRAM aggregators */

    CProxyElement_ConfigurableRRMap(void) {
    }
    CProxyElement_ConfigurableRRMap(const IrrGroup *g) : CProxyElement_RRMap(g){
    }
    CProxyElement_ConfigurableRRMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_RRMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ConfigurableRRMap(CkGroupID _gid,int _onPE) : CProxyElement_RRMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_RRMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_RRMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_RRMap::ckSetGroupID(g);
    }
    ConfigurableRRMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ConfigurableRRMap* ckLocalBranch(CkGroupID gID) {
      return (ConfigurableRRMap*)CkLocalBranch(gID);
    }
/* DECLS: ConfigurableRRMap();
 */
    

/* DECLS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ConfigurableRRMap)
/* ---------------- collective proxy -------------- */
class CProxy_ConfigurableRRMap: public CProxy_RRMap{
  public:
    typedef ConfigurableRRMap local_t;
    typedef CkIndex_ConfigurableRRMap index_t;
    typedef CProxy_ConfigurableRRMap proxy_t;
    typedef CProxyElement_ConfigurableRRMap element_t;
    typedef CProxySection_ConfigurableRRMap section_t;

    CProxy_ConfigurableRRMap(void) {
    }
    CProxy_ConfigurableRRMap(const IrrGroup *g) : CProxy_RRMap(g){
    }
    CProxy_ConfigurableRRMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_RRMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ConfigurableRRMap(CkGroupID _gid) : CProxy_RRMap(_gid){  }
    CProxyElement_ConfigurableRRMap operator[](int onPE) const
      {return CProxyElement_ConfigurableRRMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_RRMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_RRMap::ckSetGroupID(g);
    }
    ConfigurableRRMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ConfigurableRRMap* ckLocalBranch(CkGroupID gID) {
      return (ConfigurableRRMap*)CkLocalBranch(gID);
    }
/* DECLS: ConfigurableRRMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ConfigurableRRMap)
/* ---------------- section proxy -------------- */
class CProxySection_ConfigurableRRMap: public CProxySection_RRMap{
  public:
    typedef ConfigurableRRMap local_t;
    typedef CkIndex_ConfigurableRRMap index_t;
    typedef CProxy_ConfigurableRRMap proxy_t;
    typedef CProxyElement_ConfigurableRRMap element_t;
    typedef CProxySection_ConfigurableRRMap section_t;

    CProxySection_ConfigurableRRMap(void) {
    }
    CProxySection_ConfigurableRRMap(const IrrGroup *g) : CProxySection_RRMap(g){
    }
    CProxySection_ConfigurableRRMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_RRMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ConfigurableRRMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_RRMap(_gid,_pelist,_npes){  }
    CProxySection_ConfigurableRRMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_RRMap(n,_gid,_pelist,_npes){  }
    CProxySection_ConfigurableRRMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_RRMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_RRMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_RRMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_RRMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_RRMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_RRMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_RRMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_RRMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_RRMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_RRMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_RRMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_RRMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_RRMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_RRMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_RRMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_RRMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_RRMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_RRMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_RRMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_RRMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_RRMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_RRMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_RRMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_RRMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_RRMap::ckSetGroupID(g);
    }
    ConfigurableRRMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ConfigurableRRMap* ckLocalBranch(CkGroupID gID) {
      return (ConfigurableRRMap*)CkLocalBranch(gID);
    }
/* DECLS: ConfigurableRRMap();
 */
    

/* DECLS: ConfigurableRRMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ConfigurableRRMap)
#define ConfigurableRRMap_SDAG_CODE 
typedef CBaseT1<RRMap, CProxy_ConfigurableRRMap>CBase_ConfigurableRRMap;




/* DECLS: group PropMap: CkArrayMap{
PropMap();
PropMap(CkMigrateMessage* impl_msg);
};
 */
 class PropMap;
 class CkIndex_PropMap;
 class CProxy_PropMap;
 class CProxyElement_PropMap;
 class CProxySection_PropMap;
/* --------------- index object ------------------ */
class CkIndex_PropMap:public CkIndex_CkArrayMap{
  public:
    typedef PropMap local_t;
    typedef CkIndex_PropMap index_t;
    typedef CProxy_PropMap proxy_t;
    typedef CProxyElement_PropMap element_t;
    typedef CProxySection_PropMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PropMap();
     */
    // Entry point registration at startup
    
    static int reg_PropMap_void();
    // Entry point index lookup
    
    inline static int idx_PropMap_void() {
      static int epidx = reg_PropMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PropMap_void(); }
    
    static void _call_PropMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PropMap_void(void* impl_msg, void* impl_obj);
    /* DECLS: PropMap(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PropMap_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PropMap_CkMigrateMessage() {
      static int epidx = reg_PropMap_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PropMap_CkMigrateMessage(); }
    
    static void _call_PropMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PropMap_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PropMap: public CProxyElement_CkArrayMap{
  public:
    typedef PropMap local_t;
    typedef CkIndex_PropMap index_t;
    typedef CProxy_PropMap proxy_t;
    typedef CProxyElement_PropMap element_t;
    typedef CProxySection_PropMap section_t;


    /* TRAM aggregators */

    CProxyElement_PropMap(void) {
    }
    CProxyElement_PropMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_PropMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PropMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    PropMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PropMap* ckLocalBranch(CkGroupID gID) {
      return (PropMap*)CkLocalBranch(gID);
    }
/* DECLS: PropMap();
 */
    

/* DECLS: PropMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_PropMap)
/* ---------------- collective proxy -------------- */
class CProxy_PropMap: public CProxy_CkArrayMap{
  public:
    typedef PropMap local_t;
    typedef CkIndex_PropMap index_t;
    typedef CProxy_PropMap proxy_t;
    typedef CProxyElement_PropMap element_t;
    typedef CProxySection_PropMap section_t;

    CProxy_PropMap(void) {
    }
    CProxy_PropMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_PropMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PropMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_PropMap operator[](int onPE) const
      {return CProxyElement_PropMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    PropMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PropMap* ckLocalBranch(CkGroupID gID) {
      return (PropMap*)CkLocalBranch(gID);
    }
/* DECLS: PropMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: PropMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_PropMap)
/* ---------------- section proxy -------------- */
class CProxySection_PropMap: public CProxySection_CkArrayMap{
  public:
    typedef PropMap local_t;
    typedef CkIndex_PropMap index_t;
    typedef CProxy_PropMap proxy_t;
    typedef CProxyElement_PropMap element_t;
    typedef CProxySection_PropMap section_t;

    CProxySection_PropMap(void) {
    }
    CProxySection_PropMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_PropMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PropMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_PropMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_PropMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    PropMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PropMap* ckLocalBranch(CkGroupID gID) {
      return (PropMap*)CkLocalBranch(gID);
    }
/* DECLS: PropMap();
 */
    

/* DECLS: PropMap(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_PropMap)
#define PropMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_PropMap>CBase_PropMap;

/* DECLS: mainchare CkMapsInit: Chare{
CkMapsInit(CkArgMsg* impl_msg);
};
 */
 class CkMapsInit;
 class CkIndex_CkMapsInit;
 class CProxy_CkMapsInit;
/* --------------- index object ------------------ */
class CkIndex_CkMapsInit:public CkIndex_Chare{
  public:
    typedef CkMapsInit local_t;
    typedef CkIndex_CkMapsInit index_t;
    typedef CProxy_CkMapsInit proxy_t;
    typedef CProxy_CkMapsInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkMapsInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkMapsInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_CkMapsInit_CkArgMsg() {
      static int epidx = reg_CkMapsInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_CkMapsInit_CkArgMsg(); }
    
    static void _call_CkMapsInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkMapsInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CkMapsInit:public CProxy_Chare{
  public:
    typedef CkMapsInit local_t;
    typedef CkIndex_CkMapsInit index_t;
    typedef CProxy_CkMapsInit proxy_t;
    typedef CProxy_CkMapsInit element_t;

    CProxy_CkMapsInit(void) {};
    CProxy_CkMapsInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CkMapsInit(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    CkMapsInit *ckLocal(void) const
    { return (CkMapsInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CkMapsInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_CkMapsInit(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_CkMapsInit)
#define CkMapsInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CkMapsInit>CBase_CkMapsInit;



/* ---------------- method closures -------------- */
class Closure_CkLocMgr {
  public:



    struct requestLocation_3_closure;


    struct requestLocation_4_closure;


    struct updateLocation_5_closure;


    struct updateLocation_6_closure;


    struct reclaimRemote_7_closure;


    struct dummyAtSync_8_closure;


};

/* ---------------- method closures -------------- */
class Closure_CkArrayMap {
  public:
};

/* ---------------- method closures -------------- */
class Closure_RRMap {
  public:


};


/* ---------------- method closures -------------- */
class Closure_DefaultArrayMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_FastArrayMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_HilbertArrayMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_ReadFileMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_BlockMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_CldMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_ConfigurableRRMap {
  public:


};




/* ---------------- method closures -------------- */
class Closure_PropMap {
  public:


};

/* ---------------- method closures -------------- */
class Closure_CkMapsInit {
  public:

};

extern void _registerCkLocation(void);
#endif
