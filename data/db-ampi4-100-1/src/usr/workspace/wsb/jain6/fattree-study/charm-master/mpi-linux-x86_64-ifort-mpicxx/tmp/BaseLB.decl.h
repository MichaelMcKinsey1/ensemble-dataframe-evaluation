#ifndef _DECL_BaseLB_H_
#define _DECL_BaseLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "LBDatabase.decl.h"

/* DECLS: message LBMigrateMsg{
MigrateInfo moves[];
char avail_vector[];
double expectedLoad[];
}
;
 */
class LBMigrateMsg;
class CMessage_LBMigrateMsg:public CkMessage{
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
    CMessage_LBMigrateMsg();
    static void *pack(LBMigrateMsg *p);
    static LBMigrateMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message LBScatterMsg{
int numMigratesPerPe[];
MigrateDecision moves[];
}
;
 */
class LBScatterMsg;
class CMessage_LBScatterMsg:public CkMessage{
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
    CMessage_LBScatterMsg();
    static void *pack(LBScatterMsg *p);
    static LBScatterMsg* unpack(void* p);
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

/* DECLS: message LBVectorMigrateMsg{
VectorMigrateInfo moves[];
}
;
 */
class LBVectorMigrateMsg;
class CMessage_LBVectorMigrateMsg:public CkMessage{
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
    CMessage_LBVectorMigrateMsg();
    static void *pack(LBVectorMigrateMsg *p);
    static LBVectorMigrateMsg* unpack(void* p);
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

/* DECLS: group BaseLB: IrrGroup{
void BaseLB(const CkLBOptions &impl_noname_0);
void unregister();
BaseLB(CkMigrateMessage* impl_msg);
};
 */
 class BaseLB;
 class CkIndex_BaseLB;
 class CProxy_BaseLB;
 class CProxyElement_BaseLB;
 class CProxySection_BaseLB;
/* --------------- index object ------------------ */
class CkIndex_BaseLB:public CkIndex_IrrGroup{
  public:
    typedef BaseLB local_t;
    typedef CkIndex_BaseLB index_t;
    typedef CProxy_BaseLB proxy_t;
    typedef CProxyElement_BaseLB element_t;
    typedef CProxySection_BaseLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void BaseLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_BaseLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_BaseLB_marshall1() {
      static int epidx = reg_BaseLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_BaseLB_marshall1(); }
    
    static void _call_BaseLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_BaseLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_BaseLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_BaseLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void unregister();
     */
    // Entry point registration at startup
    
    static int reg_unregister_void();
    // Entry point index lookup
    
    inline static int idx_unregister_void() {
      static int epidx = reg_unregister_void();
      return epidx;
    }

    
    inline static int idx_unregister(void (BaseLB::*)() ) {
      return idx_unregister_void();
    }


    
    static int unregister() { return idx_unregister_void(); }
    
    static void _call_unregister_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unregister_void(void* impl_msg, void* impl_obj);
    /* DECLS: BaseLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_BaseLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_BaseLB_CkMigrateMessage() {
      static int epidx = reg_BaseLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_BaseLB_CkMigrateMessage(); }
    
    static void _call_BaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_BaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_BaseLB: public CProxyElement_IrrGroup{
  public:
    typedef BaseLB local_t;
    typedef CkIndex_BaseLB index_t;
    typedef CProxy_BaseLB proxy_t;
    typedef CProxyElement_BaseLB element_t;
    typedef CProxySection_BaseLB section_t;


    /* TRAM aggregators */

    CProxyElement_BaseLB(void) {
    }
    CProxyElement_BaseLB(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_BaseLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_BaseLB(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    BaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static BaseLB* ckLocalBranch(CkGroupID gID) {
      return (BaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void BaseLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void unregister();
 */
    
    void unregister(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: BaseLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_BaseLB)
/* ---------------- collective proxy -------------- */
class CProxy_BaseLB: public CProxy_IrrGroup{
  public:
    typedef BaseLB local_t;
    typedef CkIndex_BaseLB index_t;
    typedef CProxy_BaseLB proxy_t;
    typedef CProxyElement_BaseLB element_t;
    typedef CProxySection_BaseLB section_t;

    CProxy_BaseLB(void) {
    }
    CProxy_BaseLB(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_BaseLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_BaseLB(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_BaseLB operator[](int onPE) const
      {return CProxyElement_BaseLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    BaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static BaseLB* ckLocalBranch(CkGroupID gID) {
      return (BaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void BaseLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_BaseLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void unregister();
 */
    
    void unregister(const CkEntryOptions *impl_e_opts=NULL);
    
    void unregister(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void unregister(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: BaseLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_BaseLB)
/* ---------------- section proxy -------------- */
class CProxySection_BaseLB: public CProxySection_IrrGroup{
  public:
    typedef BaseLB local_t;
    typedef CkIndex_BaseLB index_t;
    typedef CProxy_BaseLB proxy_t;
    typedef CProxyElement_BaseLB element_t;
    typedef CProxySection_BaseLB section_t;

    CProxySection_BaseLB(void) {
    }
    CProxySection_BaseLB(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_BaseLB(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_BaseLB(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_BaseLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_BaseLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    BaseLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static BaseLB* ckLocalBranch(CkGroupID gID) {
      return (BaseLB*)CkLocalBranch(gID);
    }
/* DECLS: void BaseLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void unregister();
 */
    
    void unregister(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: BaseLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_BaseLB)
#define BaseLB_SDAG_CODE 
typedef CBaseT1<Group, CProxy_BaseLB>CBase_BaseLB;





/* ---------------- method closures -------------- */
class Closure_BaseLB {
  public:


    struct unregister_2_closure;


};

extern void _registerBaseLB(void);
#endif
