#ifndef _DECL_CkCheckpoint_H_
#define _DECL_CkCheckpoint_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID _sysChkptMgr;
 */

#include "CkCheckpointStatus.decl.h"

/* DECLS: group CkCheckpointMgr: IrrGroup{
CkCheckpointMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
void SendRestartCB();
CkCheckpointMgr(CkMigrateMessage* impl_msg);
};
 */
 class CkCheckpointMgr;
 class CkIndex_CkCheckpointMgr;
 class CProxy_CkCheckpointMgr;
 class CProxyElement_CkCheckpointMgr;
 class CProxySection_CkCheckpointMgr;
/* --------------- index object ------------------ */
class CkIndex_CkCheckpointMgr:public CkIndex_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkCheckpointMgr();
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointMgr_void();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointMgr_void() {
      static int epidx = reg_CkCheckpointMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkCheckpointMgr_void(); }
    
    static void _call_CkCheckpointMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
     */
    // Entry point registration at startup
    
    static int reg_Checkpoint_marshall2();
    // Entry point index lookup
    
    inline static int idx_Checkpoint_marshall2() {
      static int epidx = reg_Checkpoint_marshall2();
      return epidx;
    }

    
    inline static int idx_Checkpoint(void (CkCheckpointMgr::*)(const char *dirname, const CkCallback &cb, const bool &requestStatus) ) {
      return idx_Checkpoint_marshall2();
    }


    
    static int Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus) { return idx_Checkpoint_marshall2(); }
    
    static void _call_Checkpoint_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Checkpoint_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Checkpoint_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Checkpoint_marshall2(PUP::er &p,void *msg);
    /* DECLS: void SendRestartCB();
     */
    // Entry point registration at startup
    
    static int reg_SendRestartCB_void();
    // Entry point index lookup
    
    inline static int idx_SendRestartCB_void() {
      static int epidx = reg_SendRestartCB_void();
      return epidx;
    }

    
    inline static int idx_SendRestartCB(void (CkCheckpointMgr::*)() ) {
      return idx_SendRestartCB_void();
    }


    
    static int SendRestartCB() { return idx_SendRestartCB_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_SendRestartCB_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_SendRestartCB_void() {
      static int epidx = reg_redn_wrapper_SendRestartCB_void();
      return epidx;
    }
    
    static int redn_wrapper_SendRestartCB(CkReductionMsg* impl_msg) { return idx_redn_wrapper_SendRestartCB_void(); }
    
    static void _call_redn_wrapper_SendRestartCB_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_SendRestartCB_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SendRestartCB_void(void* impl_msg, void* impl_obj);
    /* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointMgr_CkMigrateMessage() {
      static int epidx = reg_CkCheckpointMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkCheckpointMgr_CkMigrateMessage(); }
    
    static void _call_CkCheckpointMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkCheckpointMgr: public CProxyElement_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkCheckpointMgr(void) {
    }
    CProxyElement_CkCheckpointMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkCheckpointMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkCheckpointMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkCheckpointMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkCheckpointMgr();
 */
    

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendRestartCB();
 */
    
    void SendRestartCB(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkCheckpointMgr)
/* ---------------- collective proxy -------------- */
class CProxy_CkCheckpointMgr: public CProxy_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;

    CProxy_CkCheckpointMgr(void) {
    }
    CProxy_CkCheckpointMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkCheckpointMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkCheckpointMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkCheckpointMgr operator[](int onPE) const
      {return CProxyElement_CkCheckpointMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkCheckpointMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkCheckpointMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts=NULL);
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendRestartCB();
 */
    
    void SendRestartCB(const CkEntryOptions *impl_e_opts=NULL);
    
    void SendRestartCB(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void SendRestartCB(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkCheckpointMgr)
/* ---------------- section proxy -------------- */
class CProxySection_CkCheckpointMgr: public CProxySection_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;

    CProxySection_CkCheckpointMgr(void) {
    }
    CProxySection_CkCheckpointMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkCheckpointMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkCheckpointMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkCheckpointMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkCheckpointMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkCheckpointMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkCheckpointMgr();
 */
    

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendRestartCB();
 */
    
    void SendRestartCB(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkCheckpointMgr)
#define CkCheckpointMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkCheckpointMgr>CBase_CkCheckpointMgr;

/* DECLS: mainchare CkCheckpointInit: Chare{
CkCheckpointInit(CkArgMsg* impl_msg);
};
 */
 class CkCheckpointInit;
 class CkIndex_CkCheckpointInit;
 class CProxy_CkCheckpointInit;
/* --------------- index object ------------------ */
class CkIndex_CkCheckpointInit:public CkIndex_Chare{
  public:
    typedef CkCheckpointInit local_t;
    typedef CkIndex_CkCheckpointInit index_t;
    typedef CProxy_CkCheckpointInit proxy_t;
    typedef CProxy_CkCheckpointInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkCheckpointInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointInit_CkArgMsg() {
      static int epidx = reg_CkCheckpointInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_CkCheckpointInit_CkArgMsg(); }
    
    static void _call_CkCheckpointInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CkCheckpointInit:public CProxy_Chare{
  public:
    typedef CkCheckpointInit local_t;
    typedef CkIndex_CkCheckpointInit index_t;
    typedef CProxy_CkCheckpointInit proxy_t;
    typedef CProxy_CkCheckpointInit element_t;

    CProxy_CkCheckpointInit(void) {};
    CProxy_CkCheckpointInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CkCheckpointInit(const Chare *c) : CProxy_Chare(c){  }

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
    CkCheckpointInit *ckLocal(void) const
    { return (CkCheckpointInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CkCheckpointInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_CkCheckpointInit(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_CkCheckpointInit)
#define CkCheckpointInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CkCheckpointInit>CBase_CkCheckpointInit;



/* ---------------- method closures -------------- */
class Closure_CkCheckpointMgr {
  public:


    struct Checkpoint_2_closure;


    struct SendRestartCB_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_CkCheckpointInit {
  public:

};

extern void _registerCkCheckpoint(void);
#endif
