#ifndef _DECL_ampi_H_
#define _DECL_ampi_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: message AmpiMsg{
char data[];
}
;
 */
class AmpiMsg;
class CMessage_AmpiMsg:public CkMessage{
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
    CMessage_AmpiMsg();
    static void *pack(AmpiMsg *p);
    static AmpiMsg* unpack(void* p);
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



/* DECLS: array ampiParent: ArrayElement{
ampiParent(int universeNo, const CProxy_TCharm &threads_);
void ResumeThread();
void Checkpoint(int len, const char *dname);
void ExchangeProxy(const CProxy_ampi &impl_noname_0);
ampiParent(CkMigrateMessage* impl_msg);
};
 */
 class ampiParent;
 class CkIndex_ampiParent;
 class CProxy_ampiParent;
 class CProxyElement_ampiParent;
 class CProxySection_ampiParent;
/* --------------- index object ------------------ */
class CkIndex_ampiParent:public CkIndex_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
     */
    // Entry point registration at startup
    
    static int reg_ampiParent_marshall1();
    // Entry point index lookup
    
    inline static int idx_ampiParent_marshall1() {
      static int epidx = reg_ampiParent_marshall1();
      return epidx;
    }

    
    static int ckNew(int universeNo, const CProxy_TCharm &threads_) { return idx_ampiParent_marshall1(); }
    
    static void _call_ampiParent_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiParent_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ampiParent_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ampiParent_marshall1(PUP::er &p,void *msg);
    /* DECLS: void ResumeThread();
     */
    // Entry point registration at startup
    
    static int reg_ResumeThread_void();
    // Entry point index lookup
    
    inline static int idx_ResumeThread_void() {
      static int epidx = reg_ResumeThread_void();
      return epidx;
    }

    
    inline static int idx_ResumeThread(void (ampiParent::*)() ) {
      return idx_ResumeThread_void();
    }


    
    static int ResumeThread() { return idx_ResumeThread_void(); }
    
    static void _call_ResumeThread_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeThread_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Checkpoint(int len, const char *dname);
     */
    // Entry point registration at startup
    
    static int reg_Checkpoint_marshall3();
    // Entry point index lookup
    
    inline static int idx_Checkpoint_marshall3() {
      static int epidx = reg_Checkpoint_marshall3();
      return epidx;
    }

    
    inline static int idx_Checkpoint(void (ampiParent::*)(int len, const char *dname) ) {
      return idx_Checkpoint_marshall3();
    }


    
    static int Checkpoint(int len, const char *dname) { return idx_Checkpoint_marshall3(); }
    
    static void _call_Checkpoint_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Checkpoint_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Checkpoint_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Checkpoint_marshall3(PUP::er &p,void *msg);
    /* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_ExchangeProxy_marshall4();
    // Entry point index lookup
    
    inline static int idx_ExchangeProxy_marshall4() {
      static int epidx = reg_ExchangeProxy_marshall4();
      return epidx;
    }

    
    inline static int idx_ExchangeProxy(void (ampiParent::*)(const CProxy_ampi &impl_noname_0) ) {
      return idx_ExchangeProxy_marshall4();
    }


    
    static int ExchangeProxy(const CProxy_ampi &impl_noname_0) { return idx_ExchangeProxy_marshall4(); }
    
    static void _call_ExchangeProxy_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ExchangeProxy_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ExchangeProxy_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ExchangeProxy_marshall4(PUP::er &p,void *msg);
    /* DECLS: ampiParent(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ampiParent_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ampiParent_CkMigrateMessage() {
      static int epidx = reg_ampiParent_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ampiParent_CkMigrateMessage(); }
    
    static void _call_ampiParent_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiParent_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_ampiParent : public CProxyElement_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;


    /* TRAM aggregators */

    CProxyElement_ampiParent(void) {
    }
    CProxyElement_ampiParent(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    ampiParent *ckLocal(void) const
    { return (ampiParent *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampiParent(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
 */
    
    void insert(int universeNo, const CProxy_TCharm &threads_, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void ResumeThread();
 */
    
    void ResumeThread(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Checkpoint(int len, const char *dname);
 */
    
    void Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
    
    void ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampiParent(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ampiParent)
/* ---------------- collective proxy -------------- */
 class CProxy_ampiParent : public CProxy_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    CProxy_ampiParent(void) {
    }
    CProxy_ampiParent(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_ampiParent operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampiParent operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampiParent operator [] (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator () (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_ampiParent(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_ampiParent(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
 */
    
    static CkArrayID ckNew(int universeNo, const CProxy_TCharm &threads_, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(int universeNo, const CProxy_TCharm &threads_, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(int universeNo, const CProxy_TCharm &threads_, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int universeNo, const CProxy_TCharm &threads_, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ResumeThread();
 */
    
    void ResumeThread(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Checkpoint(int len, const char *dname);
 */
    
    void Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
    
    void ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampiParent(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ampiParent)
/* ---------------- section proxy -------------- */
 class CProxySection_ampiParent : public CProxySection_ArrayElement{
  public:
    typedef ampiParent local_t;
    typedef CkIndex_ampiParent index_t;
    typedef CProxy_ampiParent proxy_t;
    typedef CProxyElement_ampiParent element_t;
    typedef CProxySection_ampiParent section_t;

    CProxySection_ampiParent(void) {
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
    CProxyElement_ampiParent operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampiParent(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator [] (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_ampiParent operator () (int idx) const 
        {return CProxyElement_ampiParent(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size(), factor);
    } 
    CProxySection_ampiParent(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampiParent(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_ampiParent(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_ampiParent(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampiParent(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_ampiParent(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
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
/* DECLS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
 */
    

/* DECLS: void ResumeThread();
 */
    
    void ResumeThread(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Checkpoint(int len, const char *dname);
 */
    
    void Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */
    
    void ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampiParent(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ampiParent)
#define ampiParent_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_ampiParent>CBase_ampiParent;

/* DECLS: array ampi: ArrayElement{
ampi();
ampi(const CkArrayID &parent_, const ampiCommStruct &s);
void allInitDone();
void setInitDoneFlag();
void unblock();
void ssend_ack(int impl_noname_1);
void generic(AmpiMsg* impl_msg);
void barrierResult();
void ibarrierResult();
void rednResult(CkReductionMsg* impl_msg);
void irednResult(CkReductionMsg* impl_msg);
threaded void splitPhase1(CkReductionMsg* impl_msg);
threaded void splitPhaseInter(CkReductionMsg* impl_msg);
threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
void setRemoteProxy(const CProxy_ampi &rproxy);
sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
sync void winRemoteUnlock(int winIndex, int requestRank);
AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
ampi(CkMigrateMessage* impl_msg);
};
 */
 class ampi;
 class CkIndex_ampi;
 class CProxy_ampi;
 class CProxyElement_ampi;
 class CProxySection_ampi;
/* --------------- index object ------------------ */
class CkIndex_ampi:public CkIndex_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ampi();
     */
    // Entry point registration at startup
    
    static int reg_ampi_void();
    // Entry point index lookup
    
    inline static int idx_ampi_void() {
      static int epidx = reg_ampi_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ampi_void(); }
    
    static void _call_ampi_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampi_void(void* impl_msg, void* impl_obj);
    /* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
     */
    // Entry point registration at startup
    
    static int reg_ampi_marshall2();
    // Entry point index lookup
    
    inline static int idx_ampi_marshall2() {
      static int epidx = reg_ampi_marshall2();
      return epidx;
    }

    
    static int ckNew(const CkArrayID &parent_, const ampiCommStruct &s) { return idx_ampi_marshall2(); }
    
    static void _call_ampi_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampi_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ampi_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ampi_marshall2(PUP::er &p,void *msg);
    /* DECLS: void allInitDone();
     */
    // Entry point registration at startup
    
    static int reg_allInitDone_void();
    // Entry point index lookup
    
    inline static int idx_allInitDone_void() {
      static int epidx = reg_allInitDone_void();
      return epidx;
    }

    
    inline static int idx_allInitDone(void (ampi::*)() ) {
      return idx_allInitDone_void();
    }


    
    static int allInitDone() { return idx_allInitDone_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_allInitDone_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_allInitDone_void() {
      static int epidx = reg_redn_wrapper_allInitDone_void();
      return epidx;
    }
    
    static int redn_wrapper_allInitDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_allInitDone_void(); }
    
    static void _call_redn_wrapper_allInitDone_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_allInitDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_allInitDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setInitDoneFlag();
     */
    // Entry point registration at startup
    
    static int reg_setInitDoneFlag_void();
    // Entry point index lookup
    
    inline static int idx_setInitDoneFlag_void() {
      static int epidx = reg_setInitDoneFlag_void();
      return epidx;
    }

    
    inline static int idx_setInitDoneFlag(void (ampi::*)() ) {
      return idx_setInitDoneFlag_void();
    }


    
    static int setInitDoneFlag() { return idx_setInitDoneFlag_void(); }
    
    static void _call_setInitDoneFlag_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setInitDoneFlag_void(void* impl_msg, void* impl_obj);
    /* DECLS: void unblock();
     */
    // Entry point registration at startup
    
    static int reg_unblock_void();
    // Entry point index lookup
    
    inline static int idx_unblock_void() {
      static int epidx = reg_unblock_void();
      return epidx;
    }

    
    inline static int idx_unblock(void (ampi::*)() ) {
      return idx_unblock_void();
    }


    
    static int unblock() { return idx_unblock_void(); }
    
    static void _call_unblock_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unblock_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ssend_ack(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_ssend_ack_marshall6();
    // Entry point index lookup
    
    inline static int idx_ssend_ack_marshall6() {
      static int epidx = reg_ssend_ack_marshall6();
      return epidx;
    }

    
    inline static int idx_ssend_ack(void (ampi::*)(int impl_noname_1) ) {
      return idx_ssend_ack_marshall6();
    }


    
    static int ssend_ack(int impl_noname_1) { return idx_ssend_ack_marshall6(); }
    
    static void _call_ssend_ack_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ssend_ack_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ssend_ack_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ssend_ack_marshall6(PUP::er &p,void *msg);
    /* DECLS: void generic(AmpiMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_generic_AmpiMsg();
    // Entry point index lookup
    
    inline static int idx_generic_AmpiMsg() {
      static int epidx = reg_generic_AmpiMsg();
      return epidx;
    }

    
    inline static int idx_generic(void (ampi::*)(AmpiMsg* impl_msg) ) {
      return idx_generic_AmpiMsg();
    }


    
    static int generic(AmpiMsg* impl_msg) { return idx_generic_AmpiMsg(); }
    
    static void _call_generic_AmpiMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_generic_AmpiMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void barrierResult();
     */
    // Entry point registration at startup
    
    static int reg_barrierResult_void();
    // Entry point index lookup
    
    inline static int idx_barrierResult_void() {
      static int epidx = reg_barrierResult_void();
      return epidx;
    }

    
    inline static int idx_barrierResult(void (ampi::*)() ) {
      return idx_barrierResult_void();
    }


    
    static int barrierResult() { return idx_barrierResult_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_barrierResult_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_barrierResult_void() {
      static int epidx = reg_redn_wrapper_barrierResult_void();
      return epidx;
    }
    
    static int redn_wrapper_barrierResult(CkReductionMsg* impl_msg) { return idx_redn_wrapper_barrierResult_void(); }
    
    static void _call_redn_wrapper_barrierResult_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_barrierResult_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_barrierResult_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ibarrierResult();
     */
    // Entry point registration at startup
    
    static int reg_ibarrierResult_void();
    // Entry point index lookup
    
    inline static int idx_ibarrierResult_void() {
      static int epidx = reg_ibarrierResult_void();
      return epidx;
    }

    
    inline static int idx_ibarrierResult(void (ampi::*)() ) {
      return idx_ibarrierResult_void();
    }


    
    static int ibarrierResult() { return idx_ibarrierResult_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ibarrierResult_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ibarrierResult_void() {
      static int epidx = reg_redn_wrapper_ibarrierResult_void();
      return epidx;
    }
    
    static int redn_wrapper_ibarrierResult(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ibarrierResult_void(); }
    
    static void _call_redn_wrapper_ibarrierResult_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_ibarrierResult_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ibarrierResult_void(void* impl_msg, void* impl_obj);
    /* DECLS: void rednResult(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_rednResult_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_rednResult_CkReductionMsg() {
      static int epidx = reg_rednResult_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_rednResult(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_rednResult_CkReductionMsg();
    }


    
    static int rednResult(CkReductionMsg* impl_msg) { return idx_rednResult_CkReductionMsg(); }
    
    static void _call_rednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_rednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void irednResult(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_irednResult_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_irednResult_CkReductionMsg() {
      static int epidx = reg_irednResult_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_irednResult(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_irednResult_CkReductionMsg();
    }


    
    static int irednResult(CkReductionMsg* impl_msg) { return idx_irednResult_CkReductionMsg(); }
    
    static void _call_irednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_irednResult_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_splitPhase1_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_splitPhase1_CkReductionMsg() {
      static int epidx = reg_splitPhase1_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_splitPhase1(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_splitPhase1_CkReductionMsg();
    }


    
    static int splitPhase1(CkReductionMsg* impl_msg) { return idx_splitPhase1_CkReductionMsg(); }
    
    static void _call_splitPhase1_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitPhase1_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_splitPhase1_CkReductionMsg(CkThrCallArg *);
    /* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_splitPhaseInter_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_splitPhaseInter_CkReductionMsg() {
      static int epidx = reg_splitPhaseInter_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_splitPhaseInter(void (ampi::*)(CkReductionMsg* impl_msg) ) {
      return idx_splitPhaseInter_CkReductionMsg();
    }


    
    static int splitPhaseInter(CkReductionMsg* impl_msg) { return idx_splitPhaseInter_CkReductionMsg(); }
    
    static void _call_splitPhaseInter_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitPhaseInter_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_splitPhaseInter_CkReductionMsg(CkThrCallArg *);
    /* DECLS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
     */
    // Entry point registration at startup
    
    static int reg_commCreatePhase1_marshall14();
    // Entry point index lookup
    
    inline static int idx_commCreatePhase1_marshall14() {
      static int epidx = reg_commCreatePhase1_marshall14();
      return epidx;
    }

    
    inline static int idx_commCreatePhase1(void (ampi::*)(const MPI_Comm &nextGroupComm) ) {
      return idx_commCreatePhase1_marshall14();
    }


    
    static int commCreatePhase1(const MPI_Comm &nextGroupComm) { return idx_commCreatePhase1_marshall14(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_commCreatePhase1_marshall14();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_commCreatePhase1_marshall14() {
      static int epidx = reg_redn_wrapper_commCreatePhase1_marshall14();
      return epidx;
    }
    
    static int redn_wrapper_commCreatePhase1(CkReductionMsg* impl_msg) { return idx_redn_wrapper_commCreatePhase1_marshall14(); }
    
    static void _call_redn_wrapper_commCreatePhase1_marshall14(void* impl_msg, void* impl_obj_void);
    
    static void _call_commCreatePhase1_marshall14(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_commCreatePhase1_marshall14(void* impl_msg, void* impl_obj);
    
    static void _callthr_commCreatePhase1_marshall14(CkThrCallArg *);
    
    static void _marshallmessagepup_commCreatePhase1_marshall14(PUP::er &p,void *msg);
    /* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
     */
    // Entry point registration at startup
    
    static int reg_intercommCreatePhase1_marshall15();
    // Entry point index lookup
    
    inline static int idx_intercommCreatePhase1_marshall15() {
      static int epidx = reg_intercommCreatePhase1_marshall15();
      return epidx;
    }

    
    inline static int idx_intercommCreatePhase1(void (ampi::*)(const MPI_Comm &nextInterComm) ) {
      return idx_intercommCreatePhase1_marshall15();
    }


    
    static int intercommCreatePhase1(const MPI_Comm &nextInterComm) { return idx_intercommCreatePhase1_marshall15(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_intercommCreatePhase1_marshall15();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_intercommCreatePhase1_marshall15() {
      static int epidx = reg_redn_wrapper_intercommCreatePhase1_marshall15();
      return epidx;
    }
    
    static int redn_wrapper_intercommCreatePhase1(CkReductionMsg* impl_msg) { return idx_redn_wrapper_intercommCreatePhase1_marshall15(); }
    
    static void _call_redn_wrapper_intercommCreatePhase1_marshall15(void* impl_msg, void* impl_obj_void);
    
    static void _call_intercommCreatePhase1_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_intercommCreatePhase1_marshall15(void* impl_msg, void* impl_obj);
    
    static void _callthr_intercommCreatePhase1_marshall15(CkThrCallArg *);
    
    static void _marshallmessagepup_intercommCreatePhase1_marshall15(PUP::er &p,void *msg);
    /* DECLS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
     */
    // Entry point registration at startup
    
    static int reg_intercommCreatePhaseSelf_marshall16();
    // Entry point index lookup
    
    inline static int idx_intercommCreatePhaseSelf_marshall16() {
      static int epidx = reg_intercommCreatePhaseSelf_marshall16();
      return epidx;
    }

    
    inline static int idx_intercommCreatePhaseSelf(void (ampi::*)(const MPI_Comm &nextInterComm) ) {
      return idx_intercommCreatePhaseSelf_marshall16();
    }


    
    static int intercommCreatePhaseSelf(const MPI_Comm &nextInterComm) { return idx_intercommCreatePhaseSelf_marshall16(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_intercommCreatePhaseSelf_marshall16();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_intercommCreatePhaseSelf_marshall16() {
      static int epidx = reg_redn_wrapper_intercommCreatePhaseSelf_marshall16();
      return epidx;
    }
    
    static int redn_wrapper_intercommCreatePhaseSelf(CkReductionMsg* impl_msg) { return idx_redn_wrapper_intercommCreatePhaseSelf_marshall16(); }
    
    static void _call_redn_wrapper_intercommCreatePhaseSelf_marshall16(void* impl_msg, void* impl_obj_void);
    
    static void _call_intercommCreatePhaseSelf_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_intercommCreatePhaseSelf_marshall16(void* impl_msg, void* impl_obj);
    
    static void _callthr_intercommCreatePhaseSelf_marshall16(CkThrCallArg *);
    
    static void _marshallmessagepup_intercommCreatePhaseSelf_marshall16(PUP::er &p,void *msg);
    /* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
     */
    // Entry point registration at startup
    
    static int reg_intercommMergePhase1_marshall17();
    // Entry point index lookup
    
    inline static int idx_intercommMergePhase1_marshall17() {
      static int epidx = reg_intercommMergePhase1_marshall17();
      return epidx;
    }

    
    inline static int idx_intercommMergePhase1(void (ampi::*)(const MPI_Comm &nextIntraComm) ) {
      return idx_intercommMergePhase1_marshall17();
    }


    
    static int intercommMergePhase1(const MPI_Comm &nextIntraComm) { return idx_intercommMergePhase1_marshall17(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_intercommMergePhase1_marshall17();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_intercommMergePhase1_marshall17() {
      static int epidx = reg_redn_wrapper_intercommMergePhase1_marshall17();
      return epidx;
    }
    
    static int redn_wrapper_intercommMergePhase1(CkReductionMsg* impl_msg) { return idx_redn_wrapper_intercommMergePhase1_marshall17(); }
    
    static void _call_redn_wrapper_intercommMergePhase1_marshall17(void* impl_msg, void* impl_obj_void);
    
    static void _call_intercommMergePhase1_marshall17(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_intercommMergePhase1_marshall17(void* impl_msg, void* impl_obj);
    
    static void _callthr_intercommMergePhase1_marshall17(CkThrCallArg *);
    
    static void _marshallmessagepup_intercommMergePhase1_marshall17(PUP::er &p,void *msg);
    /* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
     */
    // Entry point registration at startup
    
    static int reg_setRemoteProxy_marshall18();
    // Entry point index lookup
    
    inline static int idx_setRemoteProxy_marshall18() {
      static int epidx = reg_setRemoteProxy_marshall18();
      return epidx;
    }

    
    inline static int idx_setRemoteProxy(void (ampi::*)(const CProxy_ampi &rproxy) ) {
      return idx_setRemoteProxy_marshall18();
    }


    
    static int setRemoteProxy(const CProxy_ampi &rproxy) { return idx_setRemoteProxy_marshall18(); }
    
    static void _call_setRemoteProxy_marshall18(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setRemoteProxy_marshall18(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setRemoteProxy_marshall18(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setRemoteProxy_marshall18(PUP::er &p,void *msg);
    /* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemotePut_marshall19();
    // Entry point index lookup
    
    inline static int idx_winRemotePut_marshall19() {
      static int epidx = reg_winRemotePut_marshall19();
      return epidx;
    }

    
    inline static int idx_winRemotePut(void (ampi::*)(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemotePut_marshall19();
    }


    
    static int winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemotePut_marshall19(); }
    
    static void _call_winRemotePut_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemotePut_marshall19(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemotePut_marshall19(PUP::er &p,void *msg);
    /* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteGet_marshall20();
    // Entry point index lookup
    
    inline static int idx_winRemoteGet_marshall20() {
      static int epidx = reg_winRemoteGet_marshall20();
      return epidx;
    }

    
    inline static int idx_winRemoteGet(AmpiMsg* (ampi::*)(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemoteGet_marshall20();
    }


    
    static int winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemoteGet_marshall20(); }
    
    static void _call_winRemoteGet_marshall20(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteGet_marshall20(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteGet_marshall20(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteAccumulate_marshall21();
    // Entry point index lookup
    
    inline static int idx_winRemoteAccumulate_marshall21() {
      static int epidx = reg_winRemoteAccumulate_marshall21();
      return epidx;
    }

    
    inline static int idx_winRemoteAccumulate(void (ampi::*)(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) ) {
      return idx_winRemoteAccumulate_marshall21();
    }


    
    static int winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex) { return idx_winRemoteAccumulate_marshall21(); }
    
    static void _call_winRemoteAccumulate_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteAccumulate_marshall21(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteAccumulate_marshall21(PUP::er &p,void *msg);
    /* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteCompareAndSwap_marshall22();
    // Entry point index lookup
    
    inline static int idx_winRemoteCompareAndSwap_marshall22() {
      static int epidx = reg_winRemoteCompareAndSwap_marshall22();
      return epidx;
    }

    
    inline static int idx_winRemoteCompareAndSwap(AmpiMsg* (ampi::*)(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex) ) {
      return idx_winRemoteCompareAndSwap_marshall22();
    }


    
    static int winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex) { return idx_winRemoteCompareAndSwap_marshall22(); }
    
    static void _call_winRemoteCompareAndSwap_marshall22(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteCompareAndSwap_marshall22(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteCompareAndSwap_marshall22(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteLock_marshall23();
    // Entry point index lookup
    
    inline static int idx_winRemoteLock_marshall23() {
      static int epidx = reg_winRemoteLock_marshall23();
      return epidx;
    }

    
    inline static int idx_winRemoteLock(void (ampi::*)(int lock_type, int winIndex, int requestRank) ) {
      return idx_winRemoteLock_marshall23();
    }


    
    static int winRemoteLock(int lock_type, int winIndex, int requestRank) { return idx_winRemoteLock_marshall23(); }
    
    static void _call_winRemoteLock_marshall23(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteLock_marshall23(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteLock_marshall23(PUP::er &p,void *msg);
    /* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteUnlock_marshall24();
    // Entry point index lookup
    
    inline static int idx_winRemoteUnlock_marshall24() {
      static int epidx = reg_winRemoteUnlock_marshall24();
      return epidx;
    }

    
    inline static int idx_winRemoteUnlock(void (ampi::*)(int winIndex, int requestRank) ) {
      return idx_winRemoteUnlock_marshall24();
    }


    
    static int winRemoteUnlock(int winIndex, int requestRank) { return idx_winRemoteUnlock_marshall24(); }
    
    static void _call_winRemoteUnlock_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteUnlock_marshall24(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_winRemoteUnlock_marshall24(PUP::er &p,void *msg);
    /* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
     */
    // Entry point registration at startup
    
    static int reg_winRemoteIget_marshall25();
    // Entry point index lookup
    
    inline static int idx_winRemoteIget_marshall25() {
      static int epidx = reg_winRemoteIget_marshall25();
      return epidx;
    }

    
    inline static int idx_winRemoteIget(AmpiMsg* (ampi::*)(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) ) {
      return idx_winRemoteIget_marshall25();
    }


    
    static int winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex) { return idx_winRemoteIget_marshall25(); }
    
    static void _call_winRemoteIget_marshall25(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_winRemoteIget_marshall25(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_winRemoteIget_marshall25(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_winRemoteIget_marshall25(PUP::er &p,void *msg);
    /* DECLS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
     */
    // Entry point registration at startup
    
    static int reg_Alltoall_RemoteIget_marshall26();
    // Entry point index lookup
    
    inline static int idx_Alltoall_RemoteIget_marshall26() {
      static int epidx = reg_Alltoall_RemoteIget_marshall26();
      return epidx;
    }

    
    inline static int idx_Alltoall_RemoteIget(AmpiMsg* (ampi::*)(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag) ) {
      return idx_Alltoall_RemoteIget_marshall26();
    }


    
    static int Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag) { return idx_Alltoall_RemoteIget_marshall26(); }
    
    static void _call_Alltoall_RemoteIget_marshall26(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Alltoall_RemoteIget_marshall26(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Alltoall_RemoteIget_marshall26(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Alltoall_RemoteIget_marshall26(PUP::er &p,void *msg);
    /* DECLS: ampi(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ampi_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ampi_CkMigrateMessage() {
      static int epidx = reg_ampi_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ampi_CkMigrateMessage(); }
    
    static void _call_ampi_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampi_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_ampi : public CProxyElement_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;


    /* TRAM aggregators */

    CProxyElement_ampi(void) {
    }
    CProxyElement_ampi(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    ampi *ckLocal(void) const
    { return (ampi *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ampi(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: ampi();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
    
    void insert(const CkArrayID &parent_, const ampiCommStruct &s, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void allInitDone();
 */
    
    void allInitDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInitDoneFlag();
 */
    
    void setInitDoneFlag(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unblock();
 */
    
    void unblock(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ssend_ack(int impl_noname_1);
 */
    
    void ssend_ack(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generic(AmpiMsg* impl_msg);
 */
    
    void generic(AmpiMsg* impl_msg) ;

/* DECLS: void barrierResult();
 */
    
    void barrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ibarrierResult();
 */
    
    void ibarrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void rednResult(CkReductionMsg* impl_msg);
 */
    
    void rednResult(CkReductionMsg* impl_msg) ;

/* DECLS: void irednResult(CkReductionMsg* impl_msg);
 */
    
    void irednResult(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
    
    void splitPhase1(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
    
    void splitPhaseInter(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
 */
    
    void commCreatePhase1(const MPI_Comm &nextGroupComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
    
    void intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
    
    void setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
    
    void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */
    
    AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */
    
    void winRemoteLock(int lock_type, int winIndex, int requestRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */
    
    void winRemoteUnlock(int winIndex, int requestRank, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
    
    CkFutureID winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
 */
    
    CkFutureID Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ampi(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ampi)
/* ---------------- collective proxy -------------- */
 class CProxy_ampi : public CProxy_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    CProxy_ampi(void) {
    }
    CProxy_ampi(const ArrayElement *e) : CProxy_ArrayElement(e){
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

    // Generalized array indexing:
    CProxyElement_ampi operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampi operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ampi operator [] (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_ampi operator () (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_ampi(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_ampi(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: ampi();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
    
    static CkArrayID ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void allInitDone();
 */
    
    void allInitDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInitDoneFlag();
 */
    
    void setInitDoneFlag(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unblock();
 */
    
    void unblock(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ssend_ack(int impl_noname_1);
 */
    
    void ssend_ack(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generic(AmpiMsg* impl_msg);
 */
    
    void generic(AmpiMsg* impl_msg) ;

/* DECLS: void barrierResult();
 */
    
    void barrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ibarrierResult();
 */
    
    void ibarrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void rednResult(CkReductionMsg* impl_msg);
 */
    
    void rednResult(CkReductionMsg* impl_msg) ;

/* DECLS: void irednResult(CkReductionMsg* impl_msg);
 */
    
    void irednResult(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
    
    void splitPhase1(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
    
    void splitPhaseInter(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
 */
    
    void commCreatePhase1(const MPI_Comm &nextGroupComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
    
    void intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
    
    void setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

/* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

/* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

/* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
 */

/* DECLS: ampi(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ampi)
/* ---------------- section proxy -------------- */
 class CProxySection_ampi : public CProxySection_ArrayElement{
  public:
    typedef ampi local_t;
    typedef CkIndex_ampi index_t;
    typedef CProxy_ampi proxy_t;
    typedef CProxyElement_ampi element_t;
    typedef CProxySection_ampi section_t;

    CProxySection_ampi(void) {
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
    CProxyElement_ampi operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampi operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_ampi(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ampi operator [] (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_ampi operator () (int idx) const 
        {return CProxyElement_ampi(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size(), factor);
    } 
    CProxySection_ampi(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampi(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_ampi(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_ampi(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ampi(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_ampi(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
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
/* DECLS: ampi();
 */
    

/* DECLS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
    

/* DECLS: void allInitDone();
 */
    
    void allInitDone(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInitDoneFlag();
 */
    
    void setInitDoneFlag(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unblock();
 */
    
    void unblock(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ssend_ack(int impl_noname_1);
 */
    
    void ssend_ack(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generic(AmpiMsg* impl_msg);
 */
    
    void generic(AmpiMsg* impl_msg) ;

/* DECLS: void barrierResult();
 */
    
    void barrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ibarrierResult();
 */
    
    void ibarrierResult(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void rednResult(CkReductionMsg* impl_msg);
 */
    
    void rednResult(CkReductionMsg* impl_msg) ;

/* DECLS: void irednResult(CkReductionMsg* impl_msg);
 */
    
    void irednResult(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */
    
    void splitPhase1(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */
    
    void splitPhaseInter(CkReductionMsg* impl_msg) ;

/* DECLS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
 */
    
    void commCreatePhase1(const MPI_Comm &nextGroupComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
 */
    
    void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */
    
    void intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */
    
    void setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

/* DECLS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

/* DECLS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

/* DECLS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

/* DECLS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

/* DECLS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
 */

/* DECLS: ampi(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ampi)
#define ampi_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_ampi>CBase_ampi;

/* DECLS: group ampiWorlds: IrrGroup{
ampiWorlds(const ampiCommStruct &nextWorld);
void add(const ampiCommStruct &nextWorld);
ampiWorlds(CkMigrateMessage* impl_msg);
};
 */
 class ampiWorlds;
 class CkIndex_ampiWorlds;
 class CProxy_ampiWorlds;
 class CProxyElement_ampiWorlds;
 class CProxySection_ampiWorlds;
/* --------------- index object ------------------ */
class CkIndex_ampiWorlds:public CkIndex_IrrGroup{
  public:
    typedef ampiWorlds local_t;
    typedef CkIndex_ampiWorlds index_t;
    typedef CProxy_ampiWorlds proxy_t;
    typedef CProxyElement_ampiWorlds element_t;
    typedef CProxySection_ampiWorlds section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ampiWorlds(const ampiCommStruct &nextWorld);
     */
    // Entry point registration at startup
    
    static int reg_ampiWorlds_marshall1();
    // Entry point index lookup
    
    inline static int idx_ampiWorlds_marshall1() {
      static int epidx = reg_ampiWorlds_marshall1();
      return epidx;
    }

    
    static int ckNew(const ampiCommStruct &nextWorld) { return idx_ampiWorlds_marshall1(); }
    
    static void _call_ampiWorlds_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiWorlds_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ampiWorlds_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ampiWorlds_marshall1(PUP::er &p,void *msg);
    /* DECLS: void add(const ampiCommStruct &nextWorld);
     */
    // Entry point registration at startup
    
    static int reg_add_marshall2();
    // Entry point index lookup
    
    inline static int idx_add_marshall2() {
      static int epidx = reg_add_marshall2();
      return epidx;
    }

    
    inline static int idx_add(void (ampiWorlds::*)(const ampiCommStruct &nextWorld) ) {
      return idx_add_marshall2();
    }


    
    static int add(const ampiCommStruct &nextWorld) { return idx_add_marshall2(); }
    
    static void _call_add_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_add_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_add_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_add_marshall2(PUP::er &p,void *msg);
    /* DECLS: ampiWorlds(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ampiWorlds_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ampiWorlds_CkMigrateMessage() {
      static int epidx = reg_ampiWorlds_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ampiWorlds_CkMigrateMessage(); }
    
    static void _call_ampiWorlds_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ampiWorlds_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ampiWorlds: public CProxyElement_IrrGroup{
  public:
    typedef ampiWorlds local_t;
    typedef CkIndex_ampiWorlds index_t;
    typedef CProxy_ampiWorlds proxy_t;
    typedef CProxyElement_ampiWorlds element_t;
    typedef CProxySection_ampiWorlds section_t;


    /* TRAM aggregators */

    CProxyElement_ampiWorlds(void) {
    }
    CProxyElement_ampiWorlds(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ampiWorlds(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ampiWorlds(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ampiWorlds* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ampiWorlds* ckLocalBranch(CkGroupID gID) {
      return (ampiWorlds*)CkLocalBranch(gID);
    }
/* DECLS: ampiWorlds(const ampiCommStruct &nextWorld);
 */
    

/* DECLS: void add(const ampiCommStruct &nextWorld);
 */
    
    void add(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ampiWorlds(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ampiWorlds)
/* ---------------- collective proxy -------------- */
class CProxy_ampiWorlds: public CProxy_IrrGroup{
  public:
    typedef ampiWorlds local_t;
    typedef CkIndex_ampiWorlds index_t;
    typedef CProxy_ampiWorlds proxy_t;
    typedef CProxyElement_ampiWorlds element_t;
    typedef CProxySection_ampiWorlds section_t;

    CProxy_ampiWorlds(void) {
    }
    CProxy_ampiWorlds(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ampiWorlds(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ampiWorlds(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ampiWorlds operator[](int onPE) const
      {return CProxyElement_ampiWorlds(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ampiWorlds* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ampiWorlds* ckLocalBranch(CkGroupID gID) {
      return (ampiWorlds*)CkLocalBranch(gID);
    }
/* DECLS: ampiWorlds(const ampiCommStruct &nextWorld);
 */
    
    static CkGroupID ckNew(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_ampiWorlds(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void add(const ampiCommStruct &nextWorld);
 */
    
    void add(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts=NULL);
    
    void add(const ampiCommStruct &nextWorld, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void add(const ampiCommStruct &nextWorld, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ampiWorlds(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ampiWorlds)
/* ---------------- section proxy -------------- */
class CProxySection_ampiWorlds: public CProxySection_IrrGroup{
  public:
    typedef ampiWorlds local_t;
    typedef CkIndex_ampiWorlds index_t;
    typedef CProxy_ampiWorlds proxy_t;
    typedef CProxyElement_ampiWorlds element_t;
    typedef CProxySection_ampiWorlds section_t;

    CProxySection_ampiWorlds(void) {
    }
    CProxySection_ampiWorlds(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ampiWorlds(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ampiWorlds(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ampiWorlds(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ampiWorlds(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ampiWorlds* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ampiWorlds* ckLocalBranch(CkGroupID gID) {
      return (ampiWorlds*)CkLocalBranch(gID);
    }
/* DECLS: ampiWorlds(const ampiCommStruct &nextWorld);
 */
    

/* DECLS: void add(const ampiCommStruct &nextWorld);
 */
    
    void add(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ampiWorlds(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ampiWorlds)
#define ampiWorlds_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ampiWorlds>CBase_ampiWorlds;




/* ---------------- method closures -------------- */
class Closure_ampiParent {
  public:


    struct ResumeThread_2_closure;


    struct Checkpoint_3_closure;


    struct ExchangeProxy_4_closure;


};

/* ---------------- method closures -------------- */
class Closure_ampi {
  public:



    struct allInitDone_3_closure;


    struct setInitDoneFlag_4_closure;


    struct unblock_5_closure;


    struct ssend_ack_6_closure;



    struct barrierResult_8_closure;


    struct ibarrierResult_9_closure;






    struct commCreatePhase1_14_closure;


    struct intercommCreatePhase1_15_closure;


    struct intercommCreatePhaseSelf_16_closure;


    struct intercommMergePhase1_17_closure;


    struct setRemoteProxy_18_closure;


    struct winRemotePut_19_closure;


    struct winRemoteGet_20_closure;


    struct winRemoteAccumulate_21_closure;


    struct winRemoteCompareAndSwap_22_closure;


    struct winRemoteLock_23_closure;


    struct winRemoteUnlock_24_closure;


    struct winRemoteIget_25_closure;


    struct Alltoall_RemoteIget_26_closure;


};

/* ---------------- method closures -------------- */
class Closure_ampiWorlds {
  public:


    struct add_2_closure;


};

extern void _registerampi(void);
#endif
