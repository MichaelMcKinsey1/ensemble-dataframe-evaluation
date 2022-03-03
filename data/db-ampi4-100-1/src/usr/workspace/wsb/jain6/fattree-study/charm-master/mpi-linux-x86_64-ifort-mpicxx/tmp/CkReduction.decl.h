#ifndef _DECL_CkReduction_H_
#define _DECL_CkReduction_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: message CkGroupCallbackMsg;
 */
class CkGroupCallbackMsg;
class CMessage_CkGroupCallbackMsg:public CkMessage{
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
    CMessage_CkGroupCallbackMsg();
    static void *pack(CkGroupCallbackMsg *p);
    static CkGroupCallbackMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group CkGroupInitCallback: IrrGroup{
CkGroupInitCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupInitCallback(CkMigrateMessage* impl_msg);
};
 */
 class CkGroupInitCallback;
 class CkIndex_CkGroupInitCallback;
 class CProxy_CkGroupInitCallback;
 class CProxyElement_CkGroupInitCallback;
 class CProxySection_CkGroupInitCallback;
/* --------------- index object ------------------ */
class CkIndex_CkGroupInitCallback:public CkIndex_IrrGroup{
  public:
    typedef CkGroupInitCallback local_t;
    typedef CkIndex_CkGroupInitCallback index_t;
    typedef CProxy_CkGroupInitCallback proxy_t;
    typedef CProxyElement_CkGroupInitCallback element_t;
    typedef CProxySection_CkGroupInitCallback section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkGroupInitCallback();
     */
    // Entry point registration at startup
    
    static int reg_CkGroupInitCallback_void();
    // Entry point index lookup
    
    inline static int idx_CkGroupInitCallback_void() {
      static int epidx = reg_CkGroupInitCallback_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkGroupInitCallback_void(); }
    
    static void _call_CkGroupInitCallback_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkGroupInitCallback_void(void* impl_msg, void* impl_obj);
    /* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_callMeBack_CkGroupCallbackMsg();
    // Entry point index lookup
    
    inline static int idx_callMeBack_CkGroupCallbackMsg() {
      static int epidx = reg_callMeBack_CkGroupCallbackMsg();
      return epidx;
    }

    
    inline static int idx_callMeBack(void (CkGroupInitCallback::*)(CkGroupCallbackMsg* impl_msg) ) {
      return idx_callMeBack_CkGroupCallbackMsg();
    }


    
    static int callMeBack(CkGroupCallbackMsg* impl_msg) { return idx_callMeBack_CkGroupCallbackMsg(); }
    
    static void _call_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj);
    /* DECLS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkGroupInitCallback_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkGroupInitCallback_CkMigrateMessage() {
      static int epidx = reg_CkGroupInitCallback_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkGroupInitCallback_CkMigrateMessage(); }
    
    static void _call_CkGroupInitCallback_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkGroupInitCallback_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkGroupInitCallback: public CProxyElement_IrrGroup{
  public:
    typedef CkGroupInitCallback local_t;
    typedef CkIndex_CkGroupInitCallback index_t;
    typedef CProxy_CkGroupInitCallback proxy_t;
    typedef CProxyElement_CkGroupInitCallback element_t;
    typedef CProxySection_CkGroupInitCallback section_t;


    /* TRAM aggregators */

    CProxyElement_CkGroupInitCallback(void) {
    }
    CProxyElement_CkGroupInitCallback(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkGroupInitCallback(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkGroupInitCallback(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkGroupInitCallback* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkGroupInitCallback* ckLocalBranch(CkGroupID gID) {
      return (CkGroupInitCallback*)CkLocalBranch(gID);
    }
/* DECLS: CkGroupInitCallback();
 */
    

/* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
    
    void callMeBack(CkGroupCallbackMsg* impl_msg);

/* DECLS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkGroupInitCallback)
/* ---------------- collective proxy -------------- */
class CProxy_CkGroupInitCallback: public CProxy_IrrGroup{
  public:
    typedef CkGroupInitCallback local_t;
    typedef CkIndex_CkGroupInitCallback index_t;
    typedef CProxy_CkGroupInitCallback proxy_t;
    typedef CProxyElement_CkGroupInitCallback element_t;
    typedef CProxySection_CkGroupInitCallback section_t;

    CProxy_CkGroupInitCallback(void) {
    }
    CProxy_CkGroupInitCallback(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkGroupInitCallback(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkGroupInitCallback(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkGroupInitCallback operator[](int onPE) const
      {return CProxyElement_CkGroupInitCallback(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkGroupInitCallback* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkGroupInitCallback* ckLocalBranch(CkGroupID gID) {
      return (CkGroupInitCallback*)CkLocalBranch(gID);
    }
/* DECLS: CkGroupInitCallback();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
    
    void callMeBack(CkGroupCallbackMsg* impl_msg);
    
    void callMeBack(CkGroupCallbackMsg* impl_msg, int npes, int *pes);
    
    void callMeBack(CkGroupCallbackMsg* impl_msg, CmiGroup &grp);

/* DECLS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkGroupInitCallback)
/* ---------------- section proxy -------------- */
class CProxySection_CkGroupInitCallback: public CProxySection_IrrGroup{
  public:
    typedef CkGroupInitCallback local_t;
    typedef CkIndex_CkGroupInitCallback index_t;
    typedef CProxy_CkGroupInitCallback proxy_t;
    typedef CProxyElement_CkGroupInitCallback element_t;
    typedef CProxySection_CkGroupInitCallback section_t;

    CProxySection_CkGroupInitCallback(void) {
    }
    CProxySection_CkGroupInitCallback(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkGroupInitCallback(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkGroupInitCallback(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkGroupInitCallback(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkGroupInitCallback(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkGroupInitCallback* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkGroupInitCallback* ckLocalBranch(CkGroupID gID) {
      return (CkGroupInitCallback*)CkLocalBranch(gID);
    }
/* DECLS: CkGroupInitCallback();
 */
    

/* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
    
    void callMeBack(CkGroupCallbackMsg* impl_msg);

/* DECLS: CkGroupInitCallback(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkGroupInitCallback)
#define CkGroupInitCallback_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkGroupInitCallback>CBase_CkGroupInitCallback;

/* DECLS: group CkGroupReadyCallback: IrrGroup{
CkGroupReadyCallback();
void callMeBack(CkGroupCallbackMsg* impl_msg);
CkGroupReadyCallback(CkMigrateMessage* impl_msg);
};
 */
 class CkGroupReadyCallback;
 class CkIndex_CkGroupReadyCallback;
 class CProxy_CkGroupReadyCallback;
 class CProxyElement_CkGroupReadyCallback;
 class CProxySection_CkGroupReadyCallback;
/* --------------- index object ------------------ */
class CkIndex_CkGroupReadyCallback:public CkIndex_IrrGroup{
  public:
    typedef CkGroupReadyCallback local_t;
    typedef CkIndex_CkGroupReadyCallback index_t;
    typedef CProxy_CkGroupReadyCallback proxy_t;
    typedef CProxyElement_CkGroupReadyCallback element_t;
    typedef CProxySection_CkGroupReadyCallback section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkGroupReadyCallback();
     */
    // Entry point registration at startup
    
    static int reg_CkGroupReadyCallback_void();
    // Entry point index lookup
    
    inline static int idx_CkGroupReadyCallback_void() {
      static int epidx = reg_CkGroupReadyCallback_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkGroupReadyCallback_void(); }
    
    static void _call_CkGroupReadyCallback_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkGroupReadyCallback_void(void* impl_msg, void* impl_obj);
    /* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_callMeBack_CkGroupCallbackMsg();
    // Entry point index lookup
    
    inline static int idx_callMeBack_CkGroupCallbackMsg() {
      static int epidx = reg_callMeBack_CkGroupCallbackMsg();
      return epidx;
    }

    
    inline static int idx_callMeBack(void (CkGroupReadyCallback::*)(CkGroupCallbackMsg* impl_msg) ) {
      return idx_callMeBack_CkGroupCallbackMsg();
    }


    
    static int callMeBack(CkGroupCallbackMsg* impl_msg) { return idx_callMeBack_CkGroupCallbackMsg(); }
    
    static void _call_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_callMeBack_CkGroupCallbackMsg(void* impl_msg, void* impl_obj);
    /* DECLS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkGroupReadyCallback_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkGroupReadyCallback_CkMigrateMessage() {
      static int epidx = reg_CkGroupReadyCallback_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkGroupReadyCallback_CkMigrateMessage(); }
    
    static void _call_CkGroupReadyCallback_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkGroupReadyCallback_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkGroupReadyCallback: public CProxyElement_IrrGroup{
  public:
    typedef CkGroupReadyCallback local_t;
    typedef CkIndex_CkGroupReadyCallback index_t;
    typedef CProxy_CkGroupReadyCallback proxy_t;
    typedef CProxyElement_CkGroupReadyCallback element_t;
    typedef CProxySection_CkGroupReadyCallback section_t;


    /* TRAM aggregators */

    CProxyElement_CkGroupReadyCallback(void) {
    }
    CProxyElement_CkGroupReadyCallback(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkGroupReadyCallback(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkGroupReadyCallback(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkGroupReadyCallback* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkGroupReadyCallback* ckLocalBranch(CkGroupID gID) {
      return (CkGroupReadyCallback*)CkLocalBranch(gID);
    }
/* DECLS: CkGroupReadyCallback();
 */
    

/* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
    
    void callMeBack(CkGroupCallbackMsg* impl_msg);

/* DECLS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkGroupReadyCallback)
/* ---------------- collective proxy -------------- */
class CProxy_CkGroupReadyCallback: public CProxy_IrrGroup{
  public:
    typedef CkGroupReadyCallback local_t;
    typedef CkIndex_CkGroupReadyCallback index_t;
    typedef CProxy_CkGroupReadyCallback proxy_t;
    typedef CProxyElement_CkGroupReadyCallback element_t;
    typedef CProxySection_CkGroupReadyCallback section_t;

    CProxy_CkGroupReadyCallback(void) {
    }
    CProxy_CkGroupReadyCallback(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkGroupReadyCallback(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkGroupReadyCallback(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkGroupReadyCallback operator[](int onPE) const
      {return CProxyElement_CkGroupReadyCallback(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkGroupReadyCallback* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkGroupReadyCallback* ckLocalBranch(CkGroupID gID) {
      return (CkGroupReadyCallback*)CkLocalBranch(gID);
    }
/* DECLS: CkGroupReadyCallback();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
    
    void callMeBack(CkGroupCallbackMsg* impl_msg);
    
    void callMeBack(CkGroupCallbackMsg* impl_msg, int npes, int *pes);
    
    void callMeBack(CkGroupCallbackMsg* impl_msg, CmiGroup &grp);

/* DECLS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkGroupReadyCallback)
/* ---------------- section proxy -------------- */
class CProxySection_CkGroupReadyCallback: public CProxySection_IrrGroup{
  public:
    typedef CkGroupReadyCallback local_t;
    typedef CkIndex_CkGroupReadyCallback index_t;
    typedef CProxy_CkGroupReadyCallback proxy_t;
    typedef CProxyElement_CkGroupReadyCallback element_t;
    typedef CProxySection_CkGroupReadyCallback section_t;

    CProxySection_CkGroupReadyCallback(void) {
    }
    CProxySection_CkGroupReadyCallback(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkGroupReadyCallback(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkGroupReadyCallback(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkGroupReadyCallback(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkGroupReadyCallback(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkGroupReadyCallback* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkGroupReadyCallback* ckLocalBranch(CkGroupID gID) {
      return (CkGroupReadyCallback*)CkLocalBranch(gID);
    }
/* DECLS: CkGroupReadyCallback();
 */
    

/* DECLS: void callMeBack(CkGroupCallbackMsg* impl_msg);
 */
    
    void callMeBack(CkGroupCallbackMsg* impl_msg);

/* DECLS: CkGroupReadyCallback(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkGroupReadyCallback)
#define CkGroupReadyCallback_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkGroupReadyCallback>CBase_CkGroupReadyCallback;

/* DECLS: message CkReductionMsg;
 */
class CkReductionMsg;
class CMessage_CkReductionMsg:public CkMessage{
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
    CMessage_CkReductionMsg();
    static void *pack(CkReductionMsg *p);
    static CkReductionMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message CkReductionNumberMsg;
 */
class CkReductionNumberMsg;
class CMessage_CkReductionNumberMsg:public CkMessage{
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
    CMessage_CkReductionNumberMsg();
    static void *pack(CkReductionNumberMsg *p);
    static CkReductionNumberMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message CkReductionInactiveMsg;
 */
class CkReductionInactiveMsg;
class CMessage_CkReductionInactiveMsg:public CkMessage{
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
    CMessage_CkReductionInactiveMsg();
    static void *pack(CkReductionInactiveMsg *p);
    static CkReductionInactiveMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group CkReductionMgr: CkGroupInitCallback{
CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
void RecvMsg(CkReductionMsg* impl_msg);
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void LateMigrantMsg(CkReductionMsg* impl_msg);
void MigrantDied(CkReductionNumberMsg* impl_msg);
void Barrier_RecvMsg(CkReductionMsg* impl_msg);
void ArrayReductionHandler(CkReductionMsg* impl_msg);
void contributeViaMessage(CkReductionMsg* impl_msg);
void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
CkReductionMgr(CkMigrateMessage* impl_msg);
};
 */
 class CkReductionMgr;
 class CkIndex_CkReductionMgr;
 class CProxy_CkReductionMgr;
 class CProxyElement_CkReductionMgr;
 class CProxySection_CkReductionMgr;
/* --------------- index object ------------------ */
class CkIndex_CkReductionMgr:public CkIndex_CkGroupInitCallback{
  public:
    typedef CkReductionMgr local_t;
    typedef CkIndex_CkReductionMgr index_t;
    typedef CProxy_CkReductionMgr proxy_t;
    typedef CProxyElement_CkReductionMgr element_t;
    typedef CProxySection_CkReductionMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_CkReductionMgr_marshall1();
    // Entry point index lookup
    
    inline static int idx_CkReductionMgr_marshall1() {
      static int epidx = reg_CkReductionMgr_marshall1();
      return epidx;
    }

    
    static int ckNew(const CProxy_CkArrayReductionMgr &impl_noname_0) { return idx_CkReductionMgr_marshall1(); }
    
    static void _call_CkReductionMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkReductionMgr_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkReductionMgr_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkReductionMgr_marshall1(PUP::er &p,void *msg);
    /* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_RecvMsg_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_RecvMsg_CkReductionMsg() {
      static int epidx = reg_RecvMsg_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_RecvMsg(void (CkReductionMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_RecvMsg_CkReductionMsg();
    }


    
    static int RecvMsg(CkReductionMsg* impl_msg) { return idx_RecvMsg_CkReductionMsg(); }
    
    static void _call_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReductionStarting_CkReductionNumberMsg();
    // Entry point index lookup
    
    inline static int idx_ReductionStarting_CkReductionNumberMsg() {
      static int epidx = reg_ReductionStarting_CkReductionNumberMsg();
      return epidx;
    }

    
    inline static int idx_ReductionStarting(void (CkReductionMgr::*)(CkReductionNumberMsg* impl_msg) ) {
      return idx_ReductionStarting_CkReductionNumberMsg();
    }


    
    static int ReductionStarting(CkReductionNumberMsg* impl_msg) { return idx_ReductionStarting_CkReductionNumberMsg(); }
    
    static void _call_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void LateMigrantMsg(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LateMigrantMsg_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_LateMigrantMsg_CkReductionMsg() {
      static int epidx = reg_LateMigrantMsg_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_LateMigrantMsg(void (CkReductionMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_LateMigrantMsg_CkReductionMsg();
    }


    
    static int LateMigrantMsg(CkReductionMsg* impl_msg) { return idx_LateMigrantMsg_CkReductionMsg(); }
    
    static void _call_LateMigrantMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LateMigrantMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void MigrantDied(CkReductionNumberMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MigrantDied_CkReductionNumberMsg();
    // Entry point index lookup
    
    inline static int idx_MigrantDied_CkReductionNumberMsg() {
      static int epidx = reg_MigrantDied_CkReductionNumberMsg();
      return epidx;
    }

    
    inline static int idx_MigrantDied(void (CkReductionMgr::*)(CkReductionNumberMsg* impl_msg) ) {
      return idx_MigrantDied_CkReductionNumberMsg();
    }


    
    static int MigrantDied(CkReductionNumberMsg* impl_msg) { return idx_MigrantDied_CkReductionNumberMsg(); }
    
    static void _call_MigrantDied_CkReductionNumberMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MigrantDied_CkReductionNumberMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Barrier_RecvMsg_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_Barrier_RecvMsg_CkReductionMsg() {
      static int epidx = reg_Barrier_RecvMsg_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_Barrier_RecvMsg(void (CkReductionMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_Barrier_RecvMsg_CkReductionMsg();
    }


    
    static int Barrier_RecvMsg(CkReductionMsg* impl_msg) { return idx_Barrier_RecvMsg_CkReductionMsg(); }
    
    static void _call_Barrier_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Barrier_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ArrayReductionHandler_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_ArrayReductionHandler_CkReductionMsg() {
      static int epidx = reg_ArrayReductionHandler_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_ArrayReductionHandler(void (CkReductionMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_ArrayReductionHandler_CkReductionMsg();
    }


    
    static int ArrayReductionHandler(CkReductionMsg* impl_msg) { return idx_ArrayReductionHandler_CkReductionMsg(); }
    
    static void _call_ArrayReductionHandler_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ArrayReductionHandler_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void contributeViaMessage(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_contributeViaMessage_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_contributeViaMessage_CkReductionMsg() {
      static int epidx = reg_contributeViaMessage_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_contributeViaMessage(void (CkReductionMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_contributeViaMessage_CkReductionMsg();
    }


    
    static int contributeViaMessage(CkReductionMsg* impl_msg) { return idx_contributeViaMessage_CkReductionMsg(); }
    
    static void _call_contributeViaMessage_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_contributeViaMessage_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_AddToInactiveList_CkReductionInactiveMsg();
    // Entry point index lookup
    
    inline static int idx_AddToInactiveList_CkReductionInactiveMsg() {
      static int epidx = reg_AddToInactiveList_CkReductionInactiveMsg();
      return epidx;
    }

    
    inline static int idx_AddToInactiveList(void (CkReductionMgr::*)(CkReductionInactiveMsg* impl_msg) ) {
      return idx_AddToInactiveList_CkReductionInactiveMsg();
    }


    
    static int AddToInactiveList(CkReductionInactiveMsg* impl_msg) { return idx_AddToInactiveList_CkReductionInactiveMsg(); }
    
    static void _call_AddToInactiveList_CkReductionInactiveMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_AddToInactiveList_CkReductionInactiveMsg(void* impl_msg, void* impl_obj);
    /* DECLS: CkReductionMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkReductionMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkReductionMgr_CkMigrateMessage() {
      static int epidx = reg_CkReductionMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkReductionMgr_CkMigrateMessage(); }
    
    static void _call_CkReductionMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkReductionMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkReductionMgr: public CProxyElement_CkGroupInitCallback{
  public:
    typedef CkReductionMgr local_t;
    typedef CkIndex_CkReductionMgr index_t;
    typedef CProxy_CkReductionMgr proxy_t;
    typedef CProxyElement_CkReductionMgr element_t;
    typedef CProxySection_CkReductionMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkReductionMgr(void) {
    }
    CProxyElement_CkReductionMgr(const IrrGroup *g) : CProxyElement_CkGroupInitCallback(g){
    }
    CProxyElement_CkReductionMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkGroupInitCallback(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkReductionMgr(CkGroupID _gid,int _onPE) : CProxyElement_CkGroupInitCallback(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkGroupInitCallback::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkGroupInitCallback::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkGroupInitCallback::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkGroupInitCallback::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkGroupInitCallback::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkGroupInitCallback::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkGroupInitCallback::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkGroupInitCallback::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkGroupInitCallback::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkGroupInitCallback::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkGroupInitCallback::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkGroupInitCallback::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkGroupInitCallback::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkGroupInitCallback::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkGroupInitCallback::ckSetGroupID(g);
    }
    CkReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (CkReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
 */
    

/* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg);

/* DECLS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */
    
    void LateMigrantMsg(CkReductionMsg* impl_msg);

/* DECLS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */
    
    void MigrantDied(CkReductionNumberMsg* impl_msg);

/* DECLS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void Barrier_RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
 */
    
    void ArrayReductionHandler(CkReductionMsg* impl_msg);

/* DECLS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */
    
    void contributeViaMessage(CkReductionMsg* impl_msg);

/* DECLS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */
    
    void AddToInactiveList(CkReductionInactiveMsg* impl_msg);

/* DECLS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkReductionMgr)
/* ---------------- collective proxy -------------- */
class CProxy_CkReductionMgr: public CProxy_CkGroupInitCallback{
  public:
    typedef CkReductionMgr local_t;
    typedef CkIndex_CkReductionMgr index_t;
    typedef CProxy_CkReductionMgr proxy_t;
    typedef CProxyElement_CkReductionMgr element_t;
    typedef CProxySection_CkReductionMgr section_t;

    CProxy_CkReductionMgr(void) {
    }
    CProxy_CkReductionMgr(const IrrGroup *g) : CProxy_CkGroupInitCallback(g){
    }
    CProxy_CkReductionMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkGroupInitCallback(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkReductionMgr(CkGroupID _gid) : CProxy_CkGroupInitCallback(_gid){  }
    CProxyElement_CkReductionMgr operator[](int onPE) const
      {return CProxyElement_CkReductionMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkGroupInitCallback::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkGroupInitCallback::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkGroupInitCallback::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkGroupInitCallback::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkGroupInitCallback::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkGroupInitCallback::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkGroupInitCallback::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkGroupInitCallback::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkGroupInitCallback::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkGroupInitCallback::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkGroupInitCallback::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkGroupInitCallback::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkGroupInitCallback::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkGroupInitCallback::ckSetGroupID(g);
    }
    CkReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (CkReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CProxy_CkArrayReductionMgr &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void RecvMsg(CkReductionMsg* impl_msg);
    
    void RecvMsg(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void RecvMsg(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg);
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg, int npes, int *pes);
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg, CmiGroup &grp);

/* DECLS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */
    
    void LateMigrantMsg(CkReductionMsg* impl_msg);
    
    void LateMigrantMsg(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void LateMigrantMsg(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */
    
    void MigrantDied(CkReductionNumberMsg* impl_msg);
    
    void MigrantDied(CkReductionNumberMsg* impl_msg, int npes, int *pes);
    
    void MigrantDied(CkReductionNumberMsg* impl_msg, CmiGroup &grp);

/* DECLS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void Barrier_RecvMsg(CkReductionMsg* impl_msg);
    
    void Barrier_RecvMsg(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void Barrier_RecvMsg(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
 */
    
    void ArrayReductionHandler(CkReductionMsg* impl_msg);
    
    void ArrayReductionHandler(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void ArrayReductionHandler(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */
    
    void contributeViaMessage(CkReductionMsg* impl_msg);
    
    void contributeViaMessage(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void contributeViaMessage(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */
    
    void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
    
    void AddToInactiveList(CkReductionInactiveMsg* impl_msg, int npes, int *pes);
    
    void AddToInactiveList(CkReductionInactiveMsg* impl_msg, CmiGroup &grp);

/* DECLS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkReductionMgr)
/* ---------------- section proxy -------------- */
class CProxySection_CkReductionMgr: public CProxySection_CkGroupInitCallback{
  public:
    typedef CkReductionMgr local_t;
    typedef CkIndex_CkReductionMgr index_t;
    typedef CProxy_CkReductionMgr proxy_t;
    typedef CProxyElement_CkReductionMgr element_t;
    typedef CProxySection_CkReductionMgr section_t;

    CProxySection_CkReductionMgr(void) {
    }
    CProxySection_CkReductionMgr(const IrrGroup *g) : CProxySection_CkGroupInitCallback(g){
    }
    CProxySection_CkReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkGroupInitCallback(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkGroupInitCallback(_gid,_pelist,_npes){  }
    CProxySection_CkReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkGroupInitCallback(n,_gid,_pelist,_npes){  }
    CProxySection_CkReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkGroupInitCallback(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkGroupInitCallback::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkGroupInitCallback::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkGroupInitCallback::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkGroupInitCallback::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkGroupInitCallback::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkGroupInitCallback::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkGroupInitCallback::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkGroupInitCallback::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkGroupInitCallback::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkGroupInitCallback::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkGroupInitCallback::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkGroupInitCallback::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkGroupInitCallback::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkGroupInitCallback::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkGroupInitCallback::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkGroupInitCallback::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkGroupInitCallback::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkGroupInitCallback::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkGroupInitCallback::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkGroupInitCallback::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkGroupInitCallback::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkGroupInitCallback::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkGroupInitCallback::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkGroupInitCallback::ckSetGroupID(g);
    }
    CkReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (CkReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkReductionMgr(const CProxy_CkArrayReductionMgr &impl_noname_0);
 */
    

/* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg);

/* DECLS: void LateMigrantMsg(CkReductionMsg* impl_msg);
 */
    
    void LateMigrantMsg(CkReductionMsg* impl_msg);

/* DECLS: void MigrantDied(CkReductionNumberMsg* impl_msg);
 */
    
    void MigrantDied(CkReductionNumberMsg* impl_msg);

/* DECLS: void Barrier_RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void Barrier_RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void ArrayReductionHandler(CkReductionMsg* impl_msg);
 */
    
    void ArrayReductionHandler(CkReductionMsg* impl_msg);

/* DECLS: void contributeViaMessage(CkReductionMsg* impl_msg);
 */
    
    void contributeViaMessage(CkReductionMsg* impl_msg);

/* DECLS: void AddToInactiveList(CkReductionInactiveMsg* impl_msg);
 */
    
    void AddToInactiveList(CkReductionInactiveMsg* impl_msg);

/* DECLS: CkReductionMgr(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkReductionMgr)
#define CkReductionMgr_SDAG_CODE 
typedef CBaseT1<CkGroupInitCallback, CProxy_CkReductionMgr>CBase_CkReductionMgr;

/* DECLS: nodegroup CkNodeReductionMgr: IrrGroup{
CkNodeReductionMgr();
void ReductionStarting(CkReductionNumberMsg* impl_msg);
void RecvMsg(CkReductionMsg* impl_msg);
void restartLocalGroupReductions(int number);
void DeleteChild(int child);
void DeleteNewChild(int child);
void modifyTree(int code, int size, const int *data);
void collectMaxRedNo(int redNo);
void unblockNode(int maxRedNo);
};
 */
 class CkNodeReductionMgr;
 class CkIndex_CkNodeReductionMgr;
 class CProxy_CkNodeReductionMgr;
 class CProxyElement_CkNodeReductionMgr;
 class CProxySection_CkNodeReductionMgr;
/* --------------- index object ------------------ */
class CkIndex_CkNodeReductionMgr:public CkIndex_IrrGroup{
  public:
    typedef CkNodeReductionMgr local_t;
    typedef CkIndex_CkNodeReductionMgr index_t;
    typedef CProxy_CkNodeReductionMgr proxy_t;
    typedef CProxyElement_CkNodeReductionMgr element_t;
    typedef CProxySection_CkNodeReductionMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkNodeReductionMgr();
     */
    // Entry point registration at startup
    
    static int reg_CkNodeReductionMgr_void();
    // Entry point index lookup
    
    inline static int idx_CkNodeReductionMgr_void() {
      static int epidx = reg_CkNodeReductionMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkNodeReductionMgr_void(); }
    
    static void _call_CkNodeReductionMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkNodeReductionMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReductionStarting_CkReductionNumberMsg();
    // Entry point index lookup
    
    inline static int idx_ReductionStarting_CkReductionNumberMsg() {
      static int epidx = reg_ReductionStarting_CkReductionNumberMsg();
      return epidx;
    }

    
    inline static int idx_ReductionStarting(void (CkNodeReductionMgr::*)(CkReductionNumberMsg* impl_msg) ) {
      return idx_ReductionStarting_CkReductionNumberMsg();
    }


    
    static int ReductionStarting(CkReductionNumberMsg* impl_msg) { return idx_ReductionStarting_CkReductionNumberMsg(); }
    
    static void _call_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReductionStarting_CkReductionNumberMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_RecvMsg_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_RecvMsg_CkReductionMsg() {
      static int epidx = reg_RecvMsg_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_RecvMsg(void (CkNodeReductionMgr::*)(CkReductionMsg* impl_msg) ) {
      return idx_RecvMsg_CkReductionMsg();
    }


    
    static int RecvMsg(CkReductionMsg* impl_msg) { return idx_RecvMsg_CkReductionMsg(); }
    
    static void _call_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RecvMsg_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void restartLocalGroupReductions(int number);
     */
    // Entry point registration at startup
    
    static int reg_restartLocalGroupReductions_marshall4();
    // Entry point index lookup
    
    inline static int idx_restartLocalGroupReductions_marshall4() {
      static int epidx = reg_restartLocalGroupReductions_marshall4();
      return epidx;
    }

    
    inline static int idx_restartLocalGroupReductions(void (CkNodeReductionMgr::*)(int number) ) {
      return idx_restartLocalGroupReductions_marshall4();
    }


    
    static int restartLocalGroupReductions(int number) { return idx_restartLocalGroupReductions_marshall4(); }
    
    static void _call_restartLocalGroupReductions_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_restartLocalGroupReductions_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_restartLocalGroupReductions_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_restartLocalGroupReductions_marshall4(PUP::er &p,void *msg);
    /* DECLS: void DeleteChild(int child);
     */
    // Entry point registration at startup
    
    static int reg_DeleteChild_marshall5();
    // Entry point index lookup
    
    inline static int idx_DeleteChild_marshall5() {
      static int epidx = reg_DeleteChild_marshall5();
      return epidx;
    }

    
    inline static int idx_DeleteChild(void (CkNodeReductionMgr::*)(int child) ) {
      return idx_DeleteChild_marshall5();
    }


    
    static int DeleteChild(int child) { return idx_DeleteChild_marshall5(); }
    
    static void _call_DeleteChild_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DeleteChild_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_DeleteChild_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_DeleteChild_marshall5(PUP::er &p,void *msg);
    /* DECLS: void DeleteNewChild(int child);
     */
    // Entry point registration at startup
    
    static int reg_DeleteNewChild_marshall6();
    // Entry point index lookup
    
    inline static int idx_DeleteNewChild_marshall6() {
      static int epidx = reg_DeleteNewChild_marshall6();
      return epidx;
    }

    
    inline static int idx_DeleteNewChild(void (CkNodeReductionMgr::*)(int child) ) {
      return idx_DeleteNewChild_marshall6();
    }


    
    static int DeleteNewChild(int child) { return idx_DeleteNewChild_marshall6(); }
    
    static void _call_DeleteNewChild_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DeleteNewChild_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_DeleteNewChild_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_DeleteNewChild_marshall6(PUP::er &p,void *msg);
    /* DECLS: void modifyTree(int code, int size, const int *data);
     */
    // Entry point registration at startup
    
    static int reg_modifyTree_marshall7();
    // Entry point index lookup
    
    inline static int idx_modifyTree_marshall7() {
      static int epidx = reg_modifyTree_marshall7();
      return epidx;
    }

    
    inline static int idx_modifyTree(void (CkNodeReductionMgr::*)(int code, int size, const int *data) ) {
      return idx_modifyTree_marshall7();
    }


    
    static int modifyTree(int code, int size, const int *data) { return idx_modifyTree_marshall7(); }
    
    static void _call_modifyTree_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_modifyTree_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_modifyTree_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_modifyTree_marshall7(PUP::er &p,void *msg);
    /* DECLS: void collectMaxRedNo(int redNo);
     */
    // Entry point registration at startup
    
    static int reg_collectMaxRedNo_marshall8();
    // Entry point index lookup
    
    inline static int idx_collectMaxRedNo_marshall8() {
      static int epidx = reg_collectMaxRedNo_marshall8();
      return epidx;
    }

    
    inline static int idx_collectMaxRedNo(void (CkNodeReductionMgr::*)(int redNo) ) {
      return idx_collectMaxRedNo_marshall8();
    }


    
    static int collectMaxRedNo(int redNo) { return idx_collectMaxRedNo_marshall8(); }
    
    static void _call_collectMaxRedNo_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectMaxRedNo_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_collectMaxRedNo_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_collectMaxRedNo_marshall8(PUP::er &p,void *msg);
    /* DECLS: void unblockNode(int maxRedNo);
     */
    // Entry point registration at startup
    
    static int reg_unblockNode_marshall9();
    // Entry point index lookup
    
    inline static int idx_unblockNode_marshall9() {
      static int epidx = reg_unblockNode_marshall9();
      return epidx;
    }

    
    inline static int idx_unblockNode(void (CkNodeReductionMgr::*)(int maxRedNo) ) {
      return idx_unblockNode_marshall9();
    }


    
    static int unblockNode(int maxRedNo) { return idx_unblockNode_marshall9(); }
    
    static void _call_unblockNode_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unblockNode_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_unblockNode_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_unblockNode_marshall9(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkNodeReductionMgr: public CProxyElement_IrrGroup{
  public:
    typedef CkNodeReductionMgr local_t;
    typedef CkIndex_CkNodeReductionMgr index_t;
    typedef CProxy_CkNodeReductionMgr proxy_t;
    typedef CProxyElement_CkNodeReductionMgr element_t;
    typedef CProxySection_CkNodeReductionMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkNodeReductionMgr(void) {
    }
    CProxyElement_CkNodeReductionMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkNodeReductionMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkNodeReductionMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkNodeReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkNodeReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (CkNodeReductionMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: CkNodeReductionMgr();
 */
    

/* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg);

/* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void restartLocalGroupReductions(int number);
 */
    
    void restartLocalGroupReductions(int number, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void DeleteChild(int child);
 */
    
    void DeleteChild(int child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void DeleteNewChild(int child);
 */
    
    void DeleteNewChild(int child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void modifyTree(int code, int size, const int *data);
 */
    
    void modifyTree(int code, int size, const int *data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectMaxRedNo(int redNo);
 */
    
    void collectMaxRedNo(int redNo, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void unblockNode(int maxRedNo);
 */
    
    void unblockNode(int maxRedNo, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxyElement_CkNodeReductionMgr)
/* ---------------- collective proxy -------------- */
class CProxy_CkNodeReductionMgr: public CProxy_IrrGroup{
  public:
    typedef CkNodeReductionMgr local_t;
    typedef CkIndex_CkNodeReductionMgr index_t;
    typedef CProxy_CkNodeReductionMgr proxy_t;
    typedef CProxyElement_CkNodeReductionMgr element_t;
    typedef CProxySection_CkNodeReductionMgr section_t;

    CProxy_CkNodeReductionMgr(void) {
    }
    CProxy_CkNodeReductionMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkNodeReductionMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkNodeReductionMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkNodeReductionMgr operator[](int onPE) const
      {return CProxyElement_CkNodeReductionMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkNodeReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkNodeReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (CkNodeReductionMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: CkNodeReductionMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg);

/* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void restartLocalGroupReductions(int number);
 */
    
    void restartLocalGroupReductions(int number, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void DeleteChild(int child);
 */
    
    void DeleteChild(int child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void DeleteNewChild(int child);
 */
    
    void DeleteNewChild(int child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void modifyTree(int code, int size, const int *data);
 */
    
    void modifyTree(int code, int size, const int *data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectMaxRedNo(int redNo);
 */
    
    void collectMaxRedNo(int redNo, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void unblockNode(int maxRedNo);
 */
    
    void unblockNode(int maxRedNo, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_CkNodeReductionMgr)
/* ---------------- section proxy -------------- */
class CProxySection_CkNodeReductionMgr: public CProxySection_IrrGroup{
  public:
    typedef CkNodeReductionMgr local_t;
    typedef CkIndex_CkNodeReductionMgr index_t;
    typedef CProxy_CkNodeReductionMgr proxy_t;
    typedef CProxyElement_CkNodeReductionMgr element_t;
    typedef CProxySection_CkNodeReductionMgr section_t;

    CProxySection_CkNodeReductionMgr(void) {
    }
    CProxySection_CkNodeReductionMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkNodeReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkNodeReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CkNodeReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CkNodeReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkNodeReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkNodeReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (CkNodeReductionMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: CkNodeReductionMgr();
 */
    

/* DECLS: void ReductionStarting(CkReductionNumberMsg* impl_msg);
 */
    
    void ReductionStarting(CkReductionNumberMsg* impl_msg);

/* DECLS: void RecvMsg(CkReductionMsg* impl_msg);
 */
    
    void RecvMsg(CkReductionMsg* impl_msg);

/* DECLS: void restartLocalGroupReductions(int number);
 */
    
    void restartLocalGroupReductions(int number, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void DeleteChild(int child);
 */
    
    void DeleteChild(int child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void DeleteNewChild(int child);
 */
    
    void DeleteNewChild(int child, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void modifyTree(int code, int size, const int *data);
 */
    
    void modifyTree(int code, int size, const int *data, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectMaxRedNo(int redNo);
 */
    
    void collectMaxRedNo(int redNo, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void unblockNode(int maxRedNo);
 */
    
    void unblockNode(int maxRedNo, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxySection_CkNodeReductionMgr)
#define CkNodeReductionMgr_SDAG_CODE 
typedef CBaseT1<IrrGroup, CProxy_CkNodeReductionMgr>CBase_CkNodeReductionMgr;


/* ---------------- method closures -------------- */
class Closure_CkGroupInitCallback {
  public:



};

/* ---------------- method closures -------------- */
class Closure_CkGroupReadyCallback {
  public:



};




/* ---------------- method closures -------------- */
class Closure_CkReductionMgr {
  public:










};

/* ---------------- method closures -------------- */
class Closure_CkNodeReductionMgr {
  public:




    struct restartLocalGroupReductions_4_closure;


    struct DeleteChild_5_closure;


    struct DeleteNewChild_6_closure;


    struct modifyTree_7_closure;


    struct collectMaxRedNo_8_closure;


    struct unblockNode_9_closure;

};

extern void _registerCkReduction(void);
#endif
