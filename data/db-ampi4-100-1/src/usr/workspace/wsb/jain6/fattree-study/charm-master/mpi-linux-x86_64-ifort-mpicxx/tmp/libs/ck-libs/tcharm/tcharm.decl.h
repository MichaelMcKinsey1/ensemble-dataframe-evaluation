#ifndef _DECL_tcharm_H_
#define _DECL_tcharm_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: message TCharmInitMsg{
char data[];
}
;
 */
class TCharmInitMsg;
class CMessage_TCharmInitMsg:public CkMessage{
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
    CMessage_TCharmInitMsg();
    static void *pack(TCharmInitMsg *p);
    static TCharmInitMsg* unpack(void* p);
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

/* DECLS: array TCharm: ArrayElement{
TCharm(TCharmInitMsg* impl_msg);
void atBarrier();
void atExit();
void migrateDelayed(int destPE);
void start();
void callSystem(const callSystemStruct &s);
  initcall void procInit(void);
  initcall void nodeInit(void);
TCharm(CkMigrateMessage* impl_msg);
};
 */
 class TCharm;
 class CkIndex_TCharm;
 class CProxy_TCharm;
 class CProxyElement_TCharm;
 class CProxySection_TCharm;
/* --------------- index object ------------------ */
class CkIndex_TCharm:public CkIndex_ArrayElement{
  public:
    typedef TCharm local_t;
    typedef CkIndex_TCharm index_t;
    typedef CProxy_TCharm proxy_t;
    typedef CProxyElement_TCharm element_t;
    typedef CProxySection_TCharm section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TCharm(TCharmInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TCharm_TCharmInitMsg();
    // Entry point index lookup
    
    inline static int idx_TCharm_TCharmInitMsg() {
      static int epidx = reg_TCharm_TCharmInitMsg();
      return epidx;
    }

    
    static int ckNew(TCharmInitMsg* impl_msg) { return idx_TCharm_TCharmInitMsg(); }
    
    static void _call_TCharm_TCharmInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TCharm_TCharmInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void atBarrier();
     */
    // Entry point registration at startup
    
    static int reg_atBarrier_void();
    // Entry point index lookup
    
    inline static int idx_atBarrier_void() {
      static int epidx = reg_atBarrier_void();
      return epidx;
    }

    
    inline static int idx_atBarrier(void (TCharm::*)() ) {
      return idx_atBarrier_void();
    }


    
    static int atBarrier() { return idx_atBarrier_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_atBarrier_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_atBarrier_void() {
      static int epidx = reg_redn_wrapper_atBarrier_void();
      return epidx;
    }
    
    static int redn_wrapper_atBarrier(CkReductionMsg* impl_msg) { return idx_redn_wrapper_atBarrier_void(); }
    
    static void _call_redn_wrapper_atBarrier_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_atBarrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_atBarrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: void atExit();
     */
    // Entry point registration at startup
    
    static int reg_atExit_void();
    // Entry point index lookup
    
    inline static int idx_atExit_void() {
      static int epidx = reg_atExit_void();
      return epidx;
    }

    
    inline static int idx_atExit(void (TCharm::*)() ) {
      return idx_atExit_void();
    }


    
    static int atExit() { return idx_atExit_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_atExit_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_atExit_void() {
      static int epidx = reg_redn_wrapper_atExit_void();
      return epidx;
    }
    
    static int redn_wrapper_atExit(CkReductionMsg* impl_msg) { return idx_redn_wrapper_atExit_void(); }
    
    static void _call_redn_wrapper_atExit_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_atExit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_atExit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void migrateDelayed(int destPE);
     */
    // Entry point registration at startup
    
    static int reg_migrateDelayed_marshall4();
    // Entry point index lookup
    
    inline static int idx_migrateDelayed_marshall4() {
      static int epidx = reg_migrateDelayed_marshall4();
      return epidx;
    }

    
    inline static int idx_migrateDelayed(void (TCharm::*)(int destPE) ) {
      return idx_migrateDelayed_marshall4();
    }


    
    static int migrateDelayed(int destPE) { return idx_migrateDelayed_marshall4(); }
    
    static void _call_migrateDelayed_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_migrateDelayed_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_migrateDelayed_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_migrateDelayed_marshall4(PUP::er &p,void *msg);
    /* DECLS: void start();
     */
    // Entry point registration at startup
    
    static int reg_start_void();
    // Entry point index lookup
    
    inline static int idx_start_void() {
      static int epidx = reg_start_void();
      return epidx;
    }

    
    inline static int idx_start(void (TCharm::*)() ) {
      return idx_start_void();
    }


    
    static int start() { return idx_start_void(); }
    
    static void _call_start_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_void(void* impl_msg, void* impl_obj);
    /* DECLS: void callSystem(const callSystemStruct &s);
     */
    // Entry point registration at startup
    
    static int reg_callSystem_marshall6();
    // Entry point index lookup
    
    inline static int idx_callSystem_marshall6() {
      static int epidx = reg_callSystem_marshall6();
      return epidx;
    }

    
    inline static int idx_callSystem(void (TCharm::*)(const callSystemStruct &s) ) {
      return idx_callSystem_marshall6();
    }


    
    static int callSystem(const callSystemStruct &s) { return idx_callSystem_marshall6(); }
    
    static void _call_callSystem_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_callSystem_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_callSystem_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_callSystem_marshall6(PUP::er &p,void *msg);
    /* DECLS: TCharm(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TCharm_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TCharm_CkMigrateMessage() {
      static int epidx = reg_TCharm_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TCharm_CkMigrateMessage(); }
    
    static void _call_TCharm_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TCharm_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_TCharm : public CProxyElement_ArrayElement{
  public:
    typedef TCharm local_t;
    typedef CkIndex_TCharm index_t;
    typedef CProxy_TCharm proxy_t;
    typedef CProxyElement_TCharm element_t;
    typedef CProxySection_TCharm section_t;


    /* TRAM aggregators */

    CProxyElement_TCharm(void) {
    }
    CProxyElement_TCharm(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    TCharm *ckLocal(void) const
    { return (TCharm *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_TCharm(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_TCharm(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_TCharm(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_TCharm(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: TCharm(TCharmInitMsg* impl_msg);
 */
    
    void insert(TCharmInitMsg* impl_msg, int onPE=-1);
/* DECLS: void atBarrier();
 */
    
    void atBarrier(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void atExit();
 */
    
    void atExit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void migrateDelayed(int destPE);
 */
    
    void migrateDelayed(int destPE, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void callSystem(const callSystemStruct &s);
 */
    
    void callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts=NULL) ;



/* DECLS: TCharm(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_TCharm)
/* ---------------- collective proxy -------------- */
 class CProxy_TCharm : public CProxy_ArrayElement{
  public:
    typedef TCharm local_t;
    typedef CkIndex_TCharm index_t;
    typedef CProxy_TCharm proxy_t;
    typedef CProxyElement_TCharm element_t;
    typedef CProxySection_TCharm section_t;

    CProxy_TCharm(void) {
    }
    CProxy_TCharm(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_TCharm operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_TCharm(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TCharm operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_TCharm(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TCharm operator [] (int idx) const 
        {return CProxyElement_TCharm(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_TCharm operator () (int idx) const 
        {return CProxyElement_TCharm(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_TCharm(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_TCharm(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: TCharm(TCharmInitMsg* impl_msg);
 */
    
    static CkArrayID ckNew(TCharmInitMsg* impl_msg, const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(TCharmInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(TCharmInitMsg* impl_msg, const int s1);
    static void ckNew(TCharmInitMsg* impl_msg, const int s1, CkCallback _ck_array_creation_cb);

/* DECLS: void atBarrier();
 */
    
    void atBarrier(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void atExit();
 */
    
    void atExit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void migrateDelayed(int destPE);
 */
    
    void migrateDelayed(int destPE, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void callSystem(const callSystemStruct &s);
 */
    
    void callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts=NULL) ;



/* DECLS: TCharm(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_TCharm)
/* ---------------- section proxy -------------- */
 class CProxySection_TCharm : public CProxySection_ArrayElement{
  public:
    typedef TCharm local_t;
    typedef CkIndex_TCharm index_t;
    typedef CProxy_TCharm proxy_t;
    typedef CProxyElement_TCharm element_t;
    typedef CProxySection_TCharm section_t;

    CProxySection_TCharm(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_TCharm operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_TCharm(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TCharm operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_TCharm(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TCharm operator [] (int idx) const 
        {return CProxyElement_TCharm(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_TCharm operator () (int idx) const 
        {return CProxyElement_TCharm(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size(), factor);
    } 
    CProxySection_TCharm(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TCharm(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_TCharm(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_TCharm(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TCharm(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_TCharm(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: TCharm(TCharmInitMsg* impl_msg);
 */
    

/* DECLS: void atBarrier();
 */
    
    void atBarrier(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void atExit();
 */
    
    void atExit(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void migrateDelayed(int destPE);
 */
    
    void migrateDelayed(int destPE, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void callSystem(const callSystemStruct &s);
 */
    
    void callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts=NULL) ;



/* DECLS: TCharm(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_TCharm)
#define TCharm_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_TCharm>CBase_TCharm;


/* ---------------- method closures -------------- */
class Closure_TCharm {
  public:


    struct atBarrier_2_closure;


    struct atExit_3_closure;


    struct migrateDelayed_4_closure;


    struct start_5_closure;


    struct callSystem_6_closure;




};

extern void _registertcharm(void);
#endif
