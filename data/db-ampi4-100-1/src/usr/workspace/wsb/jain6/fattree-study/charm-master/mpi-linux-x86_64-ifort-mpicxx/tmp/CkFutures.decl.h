#ifndef _DECL_CkFutures_H_
#define _DECL_CkFutures_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: message CkQdMsg;
 */
class CkQdMsg;
class CMessage_CkQdMsg:public CkMessage{
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
    CMessage_CkQdMsg();
    static void *pack(CkQdMsg *p);
    static CkQdMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message FutureInitMsg;
 */
class FutureInitMsg;
class CMessage_FutureInitMsg:public CkMessage{
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
    CMessage_FutureInitMsg();
    static void *pack(FutureInitMsg *p);
    static FutureInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group FutureBOC: IrrGroup{
FutureBOC(FutureInitMsg* impl_msg);
void SetFuture(FutureInitMsg* impl_msg);
void SetSema(FutureInitMsg* impl_msg);
FutureBOC(CkMigrateMessage* impl_msg);
};
 */
 class FutureBOC;
 class CkIndex_FutureBOC;
 class CProxy_FutureBOC;
 class CProxyElement_FutureBOC;
 class CProxySection_FutureBOC;
/* --------------- index object ------------------ */
class CkIndex_FutureBOC:public CkIndex_IrrGroup{
  public:
    typedef FutureBOC local_t;
    typedef CkIndex_FutureBOC index_t;
    typedef CProxy_FutureBOC proxy_t;
    typedef CProxyElement_FutureBOC element_t;
    typedef CProxySection_FutureBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: FutureBOC(FutureInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_FutureBOC_FutureInitMsg();
    // Entry point index lookup
    
    inline static int idx_FutureBOC_FutureInitMsg() {
      static int epidx = reg_FutureBOC_FutureInitMsg();
      return epidx;
    }

    
    static int ckNew(FutureInitMsg* impl_msg) { return idx_FutureBOC_FutureInitMsg(); }
    
    static void _call_FutureBOC_FutureInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FutureBOC_FutureInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void SetFuture(FutureInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_SetFuture_FutureInitMsg();
    // Entry point index lookup
    
    inline static int idx_SetFuture_FutureInitMsg() {
      static int epidx = reg_SetFuture_FutureInitMsg();
      return epidx;
    }

    
    inline static int idx_SetFuture(void (FutureBOC::*)(FutureInitMsg* impl_msg) ) {
      return idx_SetFuture_FutureInitMsg();
    }


    
    static int SetFuture(FutureInitMsg* impl_msg) { return idx_SetFuture_FutureInitMsg(); }
    
    static void _call_SetFuture_FutureInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SetFuture_FutureInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void SetSema(FutureInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_SetSema_FutureInitMsg();
    // Entry point index lookup
    
    inline static int idx_SetSema_FutureInitMsg() {
      static int epidx = reg_SetSema_FutureInitMsg();
      return epidx;
    }

    
    inline static int idx_SetSema(void (FutureBOC::*)(FutureInitMsg* impl_msg) ) {
      return idx_SetSema_FutureInitMsg();
    }


    
    static int SetSema(FutureInitMsg* impl_msg) { return idx_SetSema_FutureInitMsg(); }
    
    static void _call_SetSema_FutureInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SetSema_FutureInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: FutureBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_FutureBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_FutureBOC_CkMigrateMessage() {
      static int epidx = reg_FutureBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_FutureBOC_CkMigrateMessage(); }
    
    static void _call_FutureBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FutureBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_FutureBOC: public CProxyElement_IrrGroup{
  public:
    typedef FutureBOC local_t;
    typedef CkIndex_FutureBOC index_t;
    typedef CProxy_FutureBOC proxy_t;
    typedef CProxyElement_FutureBOC element_t;
    typedef CProxySection_FutureBOC section_t;


    /* TRAM aggregators */

    CProxyElement_FutureBOC(void) {
    }
    CProxyElement_FutureBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_FutureBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_FutureBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    FutureBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FutureBOC* ckLocalBranch(CkGroupID gID) {
      return (FutureBOC*)CkLocalBranch(gID);
    }
/* DECLS: FutureBOC(FutureInitMsg* impl_msg);
 */
    

/* DECLS: void SetFuture(FutureInitMsg* impl_msg);
 */
    
    void SetFuture(FutureInitMsg* impl_msg);

/* DECLS: void SetSema(FutureInitMsg* impl_msg);
 */
    
    void SetSema(FutureInitMsg* impl_msg);

/* DECLS: FutureBOC(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_FutureBOC)
/* ---------------- collective proxy -------------- */
class CProxy_FutureBOC: public CProxy_IrrGroup{
  public:
    typedef FutureBOC local_t;
    typedef CkIndex_FutureBOC index_t;
    typedef CProxy_FutureBOC proxy_t;
    typedef CProxyElement_FutureBOC element_t;
    typedef CProxySection_FutureBOC section_t;

    CProxy_FutureBOC(void) {
    }
    CProxy_FutureBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_FutureBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_FutureBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_FutureBOC operator[](int onPE) const
      {return CProxyElement_FutureBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    FutureBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FutureBOC* ckLocalBranch(CkGroupID gID) {
      return (FutureBOC*)CkLocalBranch(gID);
    }
/* DECLS: FutureBOC(FutureInitMsg* impl_msg);
 */
    
    static CkGroupID ckNew(FutureInitMsg* impl_msg);
    CProxy_FutureBOC(FutureInitMsg* impl_msg);

/* DECLS: void SetFuture(FutureInitMsg* impl_msg);
 */
    
    void SetFuture(FutureInitMsg* impl_msg);
    
    void SetFuture(FutureInitMsg* impl_msg, int npes, int *pes);
    
    void SetFuture(FutureInitMsg* impl_msg, CmiGroup &grp);

/* DECLS: void SetSema(FutureInitMsg* impl_msg);
 */
    
    void SetSema(FutureInitMsg* impl_msg);
    
    void SetSema(FutureInitMsg* impl_msg, int npes, int *pes);
    
    void SetSema(FutureInitMsg* impl_msg, CmiGroup &grp);

/* DECLS: FutureBOC(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_FutureBOC)
/* ---------------- section proxy -------------- */
class CProxySection_FutureBOC: public CProxySection_IrrGroup{
  public:
    typedef FutureBOC local_t;
    typedef CkIndex_FutureBOC index_t;
    typedef CProxy_FutureBOC proxy_t;
    typedef CProxyElement_FutureBOC element_t;
    typedef CProxySection_FutureBOC section_t;

    CProxySection_FutureBOC(void) {
    }
    CProxySection_FutureBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_FutureBOC(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_FutureBOC(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_FutureBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_FutureBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    FutureBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static FutureBOC* ckLocalBranch(CkGroupID gID) {
      return (FutureBOC*)CkLocalBranch(gID);
    }
/* DECLS: FutureBOC(FutureInitMsg* impl_msg);
 */
    

/* DECLS: void SetFuture(FutureInitMsg* impl_msg);
 */
    
    void SetFuture(FutureInitMsg* impl_msg);

/* DECLS: void SetSema(FutureInitMsg* impl_msg);
 */
    
    void SetSema(FutureInitMsg* impl_msg);

/* DECLS: FutureBOC(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_FutureBOC)
#define FutureBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_FutureBOC>CBase_FutureBOC;

/* DECLS: mainchare FutureMain: Chare{
FutureMain(CkArgMsg* impl_msg);
};
 */
 class FutureMain;
 class CkIndex_FutureMain;
 class CProxy_FutureMain;
/* --------------- index object ------------------ */
class CkIndex_FutureMain:public CkIndex_Chare{
  public:
    typedef FutureMain local_t;
    typedef CkIndex_FutureMain index_t;
    typedef CProxy_FutureMain proxy_t;
    typedef CProxy_FutureMain element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: FutureMain(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_FutureMain_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_FutureMain_CkArgMsg() {
      static int epidx = reg_FutureMain_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_FutureMain_CkArgMsg(); }
    
    static void _call_FutureMain_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FutureMain_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_FutureMain:public CProxy_Chare{
  public:
    typedef FutureMain local_t;
    typedef CkIndex_FutureMain index_t;
    typedef CProxy_FutureMain proxy_t;
    typedef CProxy_FutureMain element_t;

    CProxy_FutureMain(void) {};
    CProxy_FutureMain(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_FutureMain(const Chare *c) : CProxy_Chare(c){  }

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
    FutureMain *ckLocal(void) const
    { return (FutureMain *)CkLocalChare(&ckGetChareID()); }
/* DECLS: FutureMain(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_FutureMain(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_FutureMain)
#define FutureMain_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_FutureMain>CBase_FutureMain;

/* DECLS: readonly CkGroupID _fbocID;
 */



/* ---------------- method closures -------------- */
class Closure_FutureBOC {
  public:




};

/* ---------------- method closures -------------- */
class Closure_FutureMain {
  public:

};


extern void _registerCkFutures(void);
#endif
