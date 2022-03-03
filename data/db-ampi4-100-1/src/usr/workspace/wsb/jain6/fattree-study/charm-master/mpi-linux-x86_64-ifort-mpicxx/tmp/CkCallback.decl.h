#ifndef _DECL_CkCallback_H_
#define _DECL_CkCallback_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_ckcallback_group _ckcallbackgroup;
 */

/* DECLS: message CkCcsRequestMsg{
char data[];
}
;
 */
class CkCcsRequestMsg;
class CMessage_CkCcsRequestMsg:public CkMessage{
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
    CMessage_CkCcsRequestMsg();
    static void *pack(CkCcsRequestMsg *p);
    static CkCcsRequestMsg* unpack(void* p);
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

/* DECLS: message CkDataMsg{
char data[];
}
;
 */
class CkDataMsg;
class CMessage_CkDataMsg:public CkMessage{
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
    CMessage_CkDataMsg();
    static void *pack(CkDataMsg *p);
    static CkDataMsg* unpack(void* p);
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

/* DECLS: mainchare ckcallback_main: Chare{
ckcallback_main(CkArgMsg* impl_msg);
};
 */
 class ckcallback_main;
 class CkIndex_ckcallback_main;
 class CProxy_ckcallback_main;
/* --------------- index object ------------------ */
class CkIndex_ckcallback_main:public CkIndex_Chare{
  public:
    typedef ckcallback_main local_t;
    typedef CkIndex_ckcallback_main index_t;
    typedef CProxy_ckcallback_main proxy_t;
    typedef CProxy_ckcallback_main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ckcallback_main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ckcallback_main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_ckcallback_main_CkArgMsg() {
      static int epidx = reg_ckcallback_main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_ckcallback_main_CkArgMsg(); }
    
    static void _call_ckcallback_main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ckcallback_main_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_ckcallback_main:public CProxy_Chare{
  public:
    typedef ckcallback_main local_t;
    typedef CkIndex_ckcallback_main index_t;
    typedef CProxy_ckcallback_main proxy_t;
    typedef CProxy_ckcallback_main element_t;

    CProxy_ckcallback_main(void) {};
    CProxy_ckcallback_main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_ckcallback_main(const Chare *c) : CProxy_Chare(c){  }

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
    ckcallback_main *ckLocal(void) const
    { return (ckcallback_main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: ckcallback_main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_ckcallback_main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_ckcallback_main)
#define ckcallback_main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_ckcallback_main>CBase_ckcallback_main;

/* DECLS: group ckcallback_group: IrrGroup{
ckcallback_group();
void registerCcsCallback(const char *name, const CkCallback &cb);
void call(const CkCallback &c, const CkMarshalledMessage &msg);
ckcallback_group(CkMigrateMessage* impl_msg);
};
 */
 class ckcallback_group;
 class CkIndex_ckcallback_group;
 class CProxy_ckcallback_group;
 class CProxyElement_ckcallback_group;
 class CProxySection_ckcallback_group;
/* --------------- index object ------------------ */
class CkIndex_ckcallback_group:public CkIndex_IrrGroup{
  public:
    typedef ckcallback_group local_t;
    typedef CkIndex_ckcallback_group index_t;
    typedef CProxy_ckcallback_group proxy_t;
    typedef CProxyElement_ckcallback_group element_t;
    typedef CProxySection_ckcallback_group section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ckcallback_group();
     */
    // Entry point registration at startup
    
    static int reg_ckcallback_group_void();
    // Entry point index lookup
    
    inline static int idx_ckcallback_group_void() {
      static int epidx = reg_ckcallback_group_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ckcallback_group_void(); }
    
    static void _call_ckcallback_group_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ckcallback_group_void(void* impl_msg, void* impl_obj);
    /* DECLS: void registerCcsCallback(const char *name, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_registerCcsCallback_marshall2();
    // Entry point index lookup
    
    inline static int idx_registerCcsCallback_marshall2() {
      static int epidx = reg_registerCcsCallback_marshall2();
      return epidx;
    }

    
    inline static int idx_registerCcsCallback(void (ckcallback_group::*)(const char *name, const CkCallback &cb) ) {
      return idx_registerCcsCallback_marshall2();
    }


    
    static int registerCcsCallback(const char *name, const CkCallback &cb) { return idx_registerCcsCallback_marshall2(); }
    
    static void _call_registerCcsCallback_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registerCcsCallback_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_registerCcsCallback_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_registerCcsCallback_marshall2(PUP::er &p,void *msg);
    /* DECLS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
     */
    // Entry point registration at startup
    
    static int reg_call_marshall3();
    // Entry point index lookup
    
    inline static int idx_call_marshall3() {
      static int epidx = reg_call_marshall3();
      return epidx;
    }

    
    inline static int idx_call(void (ckcallback_group::*)(const CkCallback &c, const CkMarshalledMessage &msg) ) {
      return idx_call_marshall3();
    }


    
    static int call(const CkCallback &c, const CkMarshalledMessage &msg) { return idx_call_marshall3(); }
    
    static void _call_call_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_call_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_call_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_call_marshall3(PUP::er &p,void *msg);
    /* DECLS: ckcallback_group(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ckcallback_group_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ckcallback_group_CkMigrateMessage() {
      static int epidx = reg_ckcallback_group_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ckcallback_group_CkMigrateMessage(); }
    
    static void _call_ckcallback_group_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ckcallback_group_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ckcallback_group: public CProxyElement_IrrGroup{
  public:
    typedef ckcallback_group local_t;
    typedef CkIndex_ckcallback_group index_t;
    typedef CProxy_ckcallback_group proxy_t;
    typedef CProxyElement_ckcallback_group element_t;
    typedef CProxySection_ckcallback_group section_t;


    /* TRAM aggregators */

    CProxyElement_ckcallback_group(void) {
    }
    CProxyElement_ckcallback_group(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ckcallback_group(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ckcallback_group(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ckcallback_group* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ckcallback_group* ckLocalBranch(CkGroupID gID) {
      return (ckcallback_group*)CkLocalBranch(gID);
    }
/* DECLS: ckcallback_group();
 */
    

/* DECLS: void registerCcsCallback(const char *name, const CkCallback &cb);
 */
    
    void registerCcsCallback(const char *name, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
 */
    
    void call(const CkCallback &c, const CkMarshalledMessage &msg, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ckcallback_group(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ckcallback_group)
/* ---------------- collective proxy -------------- */
class CProxy_ckcallback_group: public CProxy_IrrGroup{
  public:
    typedef ckcallback_group local_t;
    typedef CkIndex_ckcallback_group index_t;
    typedef CProxy_ckcallback_group proxy_t;
    typedef CProxyElement_ckcallback_group element_t;
    typedef CProxySection_ckcallback_group section_t;

    CProxy_ckcallback_group(void) {
    }
    CProxy_ckcallback_group(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ckcallback_group(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ckcallback_group(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ckcallback_group operator[](int onPE) const
      {return CProxyElement_ckcallback_group(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ckcallback_group* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ckcallback_group* ckLocalBranch(CkGroupID gID) {
      return (ckcallback_group*)CkLocalBranch(gID);
    }
/* DECLS: ckcallback_group();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerCcsCallback(const char *name, const CkCallback &cb);
 */
    
    void registerCcsCallback(const char *name, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void registerCcsCallback(const char *name, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void registerCcsCallback(const char *name, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
 */
    
    void call(const CkCallback &c, const CkMarshalledMessage &msg, const CkEntryOptions *impl_e_opts=NULL);
    
    void call(const CkCallback &c, const CkMarshalledMessage &msg, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void call(const CkCallback &c, const CkMarshalledMessage &msg, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ckcallback_group(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ckcallback_group)
/* ---------------- section proxy -------------- */
class CProxySection_ckcallback_group: public CProxySection_IrrGroup{
  public:
    typedef ckcallback_group local_t;
    typedef CkIndex_ckcallback_group index_t;
    typedef CProxy_ckcallback_group proxy_t;
    typedef CProxyElement_ckcallback_group element_t;
    typedef CProxySection_ckcallback_group section_t;

    CProxySection_ckcallback_group(void) {
    }
    CProxySection_ckcallback_group(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ckcallback_group(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ckcallback_group(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ckcallback_group(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ckcallback_group(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ckcallback_group* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ckcallback_group* ckLocalBranch(CkGroupID gID) {
      return (ckcallback_group*)CkLocalBranch(gID);
    }
/* DECLS: ckcallback_group();
 */
    

/* DECLS: void registerCcsCallback(const char *name, const CkCallback &cb);
 */
    
    void registerCcsCallback(const char *name, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
 */
    
    void call(const CkCallback &c, const CkMarshalledMessage &msg, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ckcallback_group(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ckcallback_group)
#define ckcallback_group_SDAG_CODE 
typedef CBaseT1<IrrGroup, CProxy_ckcallback_group>CBase_ckcallback_group;




/* ---------------- method closures -------------- */
class Closure_ckcallback_main {
  public:

};

/* ---------------- method closures -------------- */
class Closure_ckcallback_group {
  public:


    struct registerCcsCallback_2_closure;


    struct call_3_closure;


};

extern void _registerCkCallback(void);
#endif
