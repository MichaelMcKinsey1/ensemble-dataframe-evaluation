#ifndef _DECL_tempo_H_
#define _DECL_tempo_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: message TempoMessage;
 */
class TempoMessage;
class CMessage_TempoMessage:public CkMessage{
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
    CMessage_TempoMessage();
    static void *pack(TempoMessage *p);
    static TempoMessage* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: chare TempoChare: Chare{
threaded TempoChare();
void tempoGeneric(TempoMessage* impl_msg);
};
 */
 class TempoChare;
 class CkIndex_TempoChare;
 class CProxy_TempoChare;
/* --------------- index object ------------------ */
class CkIndex_TempoChare:public CkIndex_Chare{
  public:
    typedef TempoChare local_t;
    typedef CkIndex_TempoChare index_t;
    typedef CProxy_TempoChare proxy_t;
    typedef CProxy_TempoChare element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: threaded TempoChare();
     */
    // Entry point registration at startup
    
    static int reg_TempoChare_void();
    // Entry point index lookup
    
    inline static int idx_TempoChare_void() {
      static int epidx = reg_TempoChare_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TempoChare_void(); }
    
    static void _call_TempoChare_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TempoChare_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_TempoChare_void(CkThrCallArg *);
    /* DECLS: void tempoGeneric(TempoMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_tempoGeneric_TempoMessage();
    // Entry point index lookup
    
    inline static int idx_tempoGeneric_TempoMessage() {
      static int epidx = reg_tempoGeneric_TempoMessage();
      return epidx;
    }

    
    inline static int idx_tempoGeneric(void (TempoChare::*)(TempoMessage* impl_msg) ) {
      return idx_tempoGeneric_TempoMessage();
    }


    
    static int tempoGeneric(TempoMessage* impl_msg) { return idx_tempoGeneric_TempoMessage(); }
    
    static void _call_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TempoChare:public CProxy_Chare{
  public:
    typedef TempoChare local_t;
    typedef CkIndex_TempoChare index_t;
    typedef CProxy_TempoChare proxy_t;
    typedef CProxy_TempoChare element_t;

    CProxy_TempoChare(void) {};
    CProxy_TempoChare(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TempoChare(const Chare *c) : CProxy_Chare(c){  }

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
    TempoChare *ckLocal(void) const
    { return (TempoChare *)CkLocalChare(&ckGetChareID()); }
/* DECLS: threaded TempoChare();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg);

};
PUPmarshall(CProxy_TempoChare)
#define TempoChare_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TempoChare>CBase_TempoChare;

/* DECLS: group TempoGroup: IrrGroup{
threaded TempoGroup();
void tempoGeneric(TempoMessage* impl_msg);
TempoGroup(CkMigrateMessage* impl_msg);
};
 */
 class TempoGroup;
 class CkIndex_TempoGroup;
 class CProxy_TempoGroup;
 class CProxyElement_TempoGroup;
 class CProxySection_TempoGroup;
/* --------------- index object ------------------ */
class CkIndex_TempoGroup:public CkIndex_IrrGroup{
  public:
    typedef TempoGroup local_t;
    typedef CkIndex_TempoGroup index_t;
    typedef CProxy_TempoGroup proxy_t;
    typedef CProxyElement_TempoGroup element_t;
    typedef CProxySection_TempoGroup section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: threaded TempoGroup();
     */
    // Entry point registration at startup
    
    static int reg_TempoGroup_void();
    // Entry point index lookup
    
    inline static int idx_TempoGroup_void() {
      static int epidx = reg_TempoGroup_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TempoGroup_void(); }
    
    static void _call_TempoGroup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TempoGroup_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_TempoGroup_void(CkThrCallArg *);
    /* DECLS: void tempoGeneric(TempoMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_tempoGeneric_TempoMessage();
    // Entry point index lookup
    
    inline static int idx_tempoGeneric_TempoMessage() {
      static int epidx = reg_tempoGeneric_TempoMessage();
      return epidx;
    }

    
    inline static int idx_tempoGeneric(void (TempoGroup::*)(TempoMessage* impl_msg) ) {
      return idx_tempoGeneric_TempoMessage();
    }


    
    static int tempoGeneric(TempoMessage* impl_msg) { return idx_tempoGeneric_TempoMessage(); }
    
    static void _call_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj);
    /* DECLS: TempoGroup(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TempoGroup_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TempoGroup_CkMigrateMessage() {
      static int epidx = reg_TempoGroup_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TempoGroup_CkMigrateMessage(); }
    
    static void _call_TempoGroup_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TempoGroup_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TempoGroup: public CProxyElement_IrrGroup{
  public:
    typedef TempoGroup local_t;
    typedef CkIndex_TempoGroup index_t;
    typedef CProxy_TempoGroup proxy_t;
    typedef CProxyElement_TempoGroup element_t;
    typedef CProxySection_TempoGroup section_t;


    /* TRAM aggregators */

    CProxyElement_TempoGroup(void) {
    }
    CProxyElement_TempoGroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TempoGroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TempoGroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TempoGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TempoGroup* ckLocalBranch(CkGroupID gID) {
      return (TempoGroup*)CkLocalBranch(gID);
    }
/* DECLS: threaded TempoGroup();
 */
    

/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg);

/* DECLS: TempoGroup(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_TempoGroup)
/* ---------------- collective proxy -------------- */
class CProxy_TempoGroup: public CProxy_IrrGroup{
  public:
    typedef TempoGroup local_t;
    typedef CkIndex_TempoGroup index_t;
    typedef CProxy_TempoGroup proxy_t;
    typedef CProxyElement_TempoGroup element_t;
    typedef CProxySection_TempoGroup section_t;

    CProxy_TempoGroup(void) {
    }
    CProxy_TempoGroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TempoGroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TempoGroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TempoGroup operator[](int onPE) const
      {return CProxyElement_TempoGroup(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TempoGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TempoGroup* ckLocalBranch(CkGroupID gID) {
      return (TempoGroup*)CkLocalBranch(gID);
    }
/* DECLS: threaded TempoGroup();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg);
    
    void tempoGeneric(TempoMessage* impl_msg, int npes, int *pes);
    
    void tempoGeneric(TempoMessage* impl_msg, CmiGroup &grp);

/* DECLS: TempoGroup(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_TempoGroup)
/* ---------------- section proxy -------------- */
class CProxySection_TempoGroup: public CProxySection_IrrGroup{
  public:
    typedef TempoGroup local_t;
    typedef CkIndex_TempoGroup index_t;
    typedef CProxy_TempoGroup proxy_t;
    typedef CProxyElement_TempoGroup element_t;
    typedef CProxySection_TempoGroup section_t;

    CProxySection_TempoGroup(void) {
    }
    CProxySection_TempoGroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TempoGroup(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TempoGroup(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_TempoGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_TempoGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TempoGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TempoGroup* ckLocalBranch(CkGroupID gID) {
      return (TempoGroup*)CkLocalBranch(gID);
    }
/* DECLS: threaded TempoGroup();
 */
    

/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg);

/* DECLS: TempoGroup(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_TempoGroup)
#define TempoGroup_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TempoGroup>CBase_TempoGroup;

/* DECLS: array TempoArray: ArrayElement{
threaded TempoArray();
void tempoGeneric(TempoMessage* impl_msg);
TempoArray(CkMigrateMessage* impl_msg);
};
 */
 class TempoArray;
 class CkIndex_TempoArray;
 class CProxy_TempoArray;
 class CProxyElement_TempoArray;
 class CProxySection_TempoArray;
/* --------------- index object ------------------ */
class CkIndex_TempoArray:public CkIndex_ArrayElement{
  public:
    typedef TempoArray local_t;
    typedef CkIndex_TempoArray index_t;
    typedef CProxy_TempoArray proxy_t;
    typedef CProxyElement_TempoArray element_t;
    typedef CProxySection_TempoArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: threaded TempoArray();
     */
    // Entry point registration at startup
    
    static int reg_TempoArray_void();
    // Entry point index lookup
    
    inline static int idx_TempoArray_void() {
      static int epidx = reg_TempoArray_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TempoArray_void(); }
    
    static void _call_TempoArray_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TempoArray_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_TempoArray_void(CkThrCallArg *);
    /* DECLS: void tempoGeneric(TempoMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_tempoGeneric_TempoMessage();
    // Entry point index lookup
    
    inline static int idx_tempoGeneric_TempoMessage() {
      static int epidx = reg_tempoGeneric_TempoMessage();
      return epidx;
    }

    
    inline static int idx_tempoGeneric(void (TempoArray::*)(TempoMessage* impl_msg) ) {
      return idx_tempoGeneric_TempoMessage();
    }


    
    static int tempoGeneric(TempoMessage* impl_msg) { return idx_tempoGeneric_TempoMessage(); }
    
    static void _call_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_tempoGeneric_TempoMessage(void* impl_msg, void* impl_obj);
    /* DECLS: TempoArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TempoArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TempoArray_CkMigrateMessage() {
      static int epidx = reg_TempoArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TempoArray_CkMigrateMessage(); }
    
    static void _call_TempoArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TempoArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_TempoArray : public CProxyElement_ArrayElement{
  public:
    typedef TempoArray local_t;
    typedef CkIndex_TempoArray index_t;
    typedef CProxy_TempoArray proxy_t;
    typedef CProxyElement_TempoArray element_t;
    typedef CProxySection_TempoArray section_t;


    /* TRAM aggregators */

    CProxyElement_TempoArray(void) {
    }
    CProxyElement_TempoArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    TempoArray *ckLocal(void) const
    { return (TempoArray *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_TempoArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_TempoArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_TempoArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_TempoArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: threaded TempoArray();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg) ;

/* DECLS: TempoArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_TempoArray)
/* ---------------- collective proxy -------------- */
 class CProxy_TempoArray : public CProxy_ArrayElement{
  public:
    typedef TempoArray local_t;
    typedef CkIndex_TempoArray index_t;
    typedef CProxy_TempoArray proxy_t;
    typedef CProxyElement_TempoArray element_t;
    typedef CProxySection_TempoArray section_t;

    CProxy_TempoArray(void) {
    }
    CProxy_TempoArray(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_TempoArray operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_TempoArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TempoArray operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_TempoArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TempoArray operator [] (int idx) const 
        {return CProxyElement_TempoArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_TempoArray operator () (int idx) const 
        {return CProxyElement_TempoArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_TempoArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_TempoArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: threaded TempoArray();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg) ;

/* DECLS: TempoArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_TempoArray)
/* ---------------- section proxy -------------- */
 class CProxySection_TempoArray : public CProxySection_ArrayElement{
  public:
    typedef TempoArray local_t;
    typedef CkIndex_TempoArray index_t;
    typedef CProxy_TempoArray proxy_t;
    typedef CProxyElement_TempoArray element_t;
    typedef CProxySection_TempoArray section_t;

    CProxySection_TempoArray(void) {
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
    CProxyElement_TempoArray operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_TempoArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TempoArray operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_TempoArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TempoArray operator [] (int idx) const 
        {return CProxyElement_TempoArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_TempoArray operator () (int idx) const 
        {return CProxyElement_TempoArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size(), factor);
    } 
    CProxySection_TempoArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TempoArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_TempoArray(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_TempoArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TempoArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_TempoArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
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
/* DECLS: threaded TempoArray();
 */
    

/* DECLS: void tempoGeneric(TempoMessage* impl_msg);
 */
    
    void tempoGeneric(TempoMessage* impl_msg) ;

/* DECLS: TempoArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_TempoArray)
#define TempoArray_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_TempoArray>CBase_TempoArray;


/* ---------------- method closures -------------- */
class Closure_TempoChare {
  public:


};

/* ---------------- method closures -------------- */
class Closure_TempoGroup {
  public:



};

/* ---------------- method closures -------------- */
class Closure_TempoArray {
  public:



};

extern void _registertempo(void);
#endif
