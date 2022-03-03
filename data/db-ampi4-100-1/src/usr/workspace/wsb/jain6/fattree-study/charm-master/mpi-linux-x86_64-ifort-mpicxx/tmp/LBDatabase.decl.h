#ifndef _DECL_LBDatabase_H_
#define _DECL_LBDatabase_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CkMarshall.decl.h"

#include "NullLB.decl.h"

/* DECLS: readonly CkGroupID _lbdb;
 */

/* DECLS: mainchare LBDBInit: Chare{
LBDBInit(CkArgMsg* impl_msg);
};
 */
 class LBDBInit;
 class CkIndex_LBDBInit;
 class CProxy_LBDBInit;
/* --------------- index object ------------------ */
class CkIndex_LBDBInit:public CkIndex_Chare{
  public:
    typedef LBDBInit local_t;
    typedef CkIndex_LBDBInit index_t;
    typedef CProxy_LBDBInit proxy_t;
    typedef CProxy_LBDBInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LBDBInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LBDBInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_LBDBInit_CkArgMsg() {
      static int epidx = reg_LBDBInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_LBDBInit_CkArgMsg(); }
    
    static void _call_LBDBInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBDBInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_LBDBInit:public CProxy_Chare{
  public:
    typedef LBDBInit local_t;
    typedef CkIndex_LBDBInit index_t;
    typedef CProxy_LBDBInit proxy_t;
    typedef CProxy_LBDBInit element_t;

    CProxy_LBDBInit(void) {};
    CProxy_LBDBInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_LBDBInit(const Chare *c) : CProxy_Chare(c){  }

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
    LBDBInit *ckLocal(void) const
    { return (LBDBInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: LBDBInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_LBDBInit(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_LBDBInit)
#define LBDBInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_LBDBInit>CBase_LBDBInit;

/* DECLS: group LBDatabase: IrrGroup{
void LBDatabase();
void ResumeClients();
  initcall void initnodeFn(void);
LBDatabase(CkMigrateMessage* impl_msg);
};
 */
 class LBDatabase;
 class CkIndex_LBDatabase;
 class CProxy_LBDatabase;
 class CProxyElement_LBDatabase;
 class CProxySection_LBDatabase;
/* --------------- index object ------------------ */
class CkIndex_LBDatabase:public CkIndex_IrrGroup{
  public:
    typedef LBDatabase local_t;
    typedef CkIndex_LBDatabase index_t;
    typedef CProxy_LBDatabase proxy_t;
    typedef CProxyElement_LBDatabase element_t;
    typedef CProxySection_LBDatabase section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void LBDatabase();
     */
    // Entry point registration at startup
    
    static int reg_LBDatabase_void();
    // Entry point index lookup
    
    inline static int idx_LBDatabase_void() {
      static int epidx = reg_LBDatabase_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LBDatabase_void(); }
    
    static void _call_LBDatabase_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBDatabase_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ResumeClients();
     */
    // Entry point registration at startup
    
    static int reg_ResumeClients_void();
    // Entry point index lookup
    
    inline static int idx_ResumeClients_void() {
      static int epidx = reg_ResumeClients_void();
      return epidx;
    }

    
    inline static int idx_ResumeClients(void (LBDatabase::*)() ) {
      return idx_ResumeClients_void();
    }


    
    static int ResumeClients() { return idx_ResumeClients_void(); }
    
    static void _call_ResumeClients_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeClients_void(void* impl_msg, void* impl_obj);
    /* DECLS: LBDatabase(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LBDatabase_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_LBDatabase_CkMigrateMessage() {
      static int epidx = reg_LBDatabase_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_LBDatabase_CkMigrateMessage(); }
    
    static void _call_LBDatabase_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LBDatabase_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LBDatabase: public CProxyElement_IrrGroup{
  public:
    typedef LBDatabase local_t;
    typedef CkIndex_LBDatabase index_t;
    typedef CProxy_LBDatabase proxy_t;
    typedef CProxyElement_LBDatabase element_t;
    typedef CProxySection_LBDatabase section_t;


    /* TRAM aggregators */

    CProxyElement_LBDatabase(void) {
    }
    CProxyElement_LBDatabase(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LBDatabase(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LBDatabase(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LBDatabase* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBDatabase* ckLocalBranch(CkGroupID gID) {
      return (LBDatabase*)CkLocalBranch(gID);
    }
/* DECLS: void LBDatabase();
 */
    

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: LBDatabase(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_LBDatabase)
/* ---------------- collective proxy -------------- */
class CProxy_LBDatabase: public CProxy_IrrGroup{
  public:
    typedef LBDatabase local_t;
    typedef CkIndex_LBDatabase index_t;
    typedef CProxy_LBDatabase proxy_t;
    typedef CProxyElement_LBDatabase element_t;
    typedef CProxySection_LBDatabase section_t;

    CProxy_LBDatabase(void) {
    }
    CProxy_LBDatabase(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LBDatabase(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LBDatabase(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LBDatabase operator[](int onPE) const
      {return CProxyElement_LBDatabase(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LBDatabase* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBDatabase* ckLocalBranch(CkGroupID gID) {
      return (LBDatabase*)CkLocalBranch(gID);
    }
/* DECLS: void LBDatabase();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: LBDatabase(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_LBDatabase)
/* ---------------- section proxy -------------- */
class CProxySection_LBDatabase: public CProxySection_IrrGroup{
  public:
    typedef LBDatabase local_t;
    typedef CkIndex_LBDatabase index_t;
    typedef CProxy_LBDatabase proxy_t;
    typedef CProxyElement_LBDatabase element_t;
    typedef CProxySection_LBDatabase section_t;

    CProxySection_LBDatabase(void) {
    }
    CProxySection_LBDatabase(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LBDatabase(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LBDatabase(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_LBDatabase(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_LBDatabase(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LBDatabase* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LBDatabase* ckLocalBranch(CkGroupID gID) {
      return (LBDatabase*)CkLocalBranch(gID);
    }
/* DECLS: void LBDatabase();
 */
    

/* DECLS: void ResumeClients();
 */
    
    void ResumeClients(const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: LBDatabase(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_LBDatabase)
#define LBDatabase_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LBDatabase>CBase_LBDatabase;




/* ---------------- method closures -------------- */
class Closure_LBDBInit {
  public:

};

/* ---------------- method closures -------------- */
class Closure_LBDatabase {
  public:


    struct ResumeClients_2_closure;



};

extern void _registerLBDatabase(void);
#endif
