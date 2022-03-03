#ifndef _DECL_MetaBalancer_H_
#define _DECL_MetaBalancer_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID _metalb;
 */

/* DECLS: readonly CkGroupID _metalbred;
 */

/* DECLS: mainchare MetaLBInit: Chare{
MetaLBInit(CkArgMsg* impl_msg);
};
 */
 class MetaLBInit;
 class CkIndex_MetaLBInit;
 class CProxy_MetaLBInit;
/* --------------- index object ------------------ */
class CkIndex_MetaLBInit:public CkIndex_Chare{
  public:
    typedef MetaLBInit local_t;
    typedef CkIndex_MetaLBInit index_t;
    typedef CProxy_MetaLBInit proxy_t;
    typedef CProxy_MetaLBInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MetaLBInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MetaLBInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_MetaLBInit_CkArgMsg() {
      static int epidx = reg_MetaLBInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_MetaLBInit_CkArgMsg(); }
    
    static void _call_MetaLBInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetaLBInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_MetaLBInit:public CProxy_Chare{
  public:
    typedef MetaLBInit local_t;
    typedef CkIndex_MetaLBInit index_t;
    typedef CProxy_MetaLBInit proxy_t;
    typedef CProxy_MetaLBInit element_t;

    CProxy_MetaLBInit(void) {};
    CProxy_MetaLBInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_MetaLBInit(const Chare *c) : CProxy_Chare(c){  }

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
    MetaLBInit *ckLocal(void) const
    { return (MetaLBInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: MetaLBInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_MetaLBInit(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_MetaLBInit)
#define MetaLBInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_MetaLBInit>CBase_MetaLBInit;


/* DECLS: group MetaBalancer: IrrGroup{
void MetaBalancer();
  initcall void initnodeFn(void);
void ReceiveMinStats(const double *load, int n);
void LoadBalanceDecision(int req_no, int period);
void LoadBalanceDecisionFinal(int req_no, int period);
void ReceiveIterationNo(int impl_noname_0);
void RegisterNoObjCallback(int impl_noname_1);
void TriggerAdaptiveReduction();
void MetaLBCallLBOnChares();
MetaBalancer(CkMigrateMessage* impl_msg);
};
 */
 class MetaBalancer;
 class CkIndex_MetaBalancer;
 class CProxy_MetaBalancer;
 class CProxyElement_MetaBalancer;
 class CProxySection_MetaBalancer;
/* --------------- index object ------------------ */
class CkIndex_MetaBalancer:public CkIndex_IrrGroup{
  public:
    typedef MetaBalancer local_t;
    typedef CkIndex_MetaBalancer index_t;
    typedef CProxy_MetaBalancer proxy_t;
    typedef CProxyElement_MetaBalancer element_t;
    typedef CProxySection_MetaBalancer section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void MetaBalancer();
     */
    // Entry point registration at startup
    
    static int reg_MetaBalancer_void();
    // Entry point index lookup
    
    inline static int idx_MetaBalancer_void() {
      static int epidx = reg_MetaBalancer_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MetaBalancer_void(); }
    
    static void _call_MetaBalancer_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetaBalancer_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveMinStats(const double *load, int n);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveMinStats_marshall2();
    // Entry point index lookup
    
    inline static int idx_ReceiveMinStats_marshall2() {
      static int epidx = reg_ReceiveMinStats_marshall2();
      return epidx;
    }

    
    inline static int idx_ReceiveMinStats(void (MetaBalancer::*)(const double *load, int n) ) {
      return idx_ReceiveMinStats_marshall2();
    }


    
    static int ReceiveMinStats(const double *load, int n) { return idx_ReceiveMinStats_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ReceiveMinStats_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ReceiveMinStats_marshall2() {
      static int epidx = reg_redn_wrapper_ReceiveMinStats_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_ReceiveMinStats(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ReceiveMinStats_marshall2(); }
    
    static void _call_redn_wrapper_ReceiveMinStats_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_ReceiveMinStats_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveMinStats_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveMinStats_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveMinStats_marshall2(PUP::er &p,void *msg);
    /* DECLS: void LoadBalanceDecision(int req_no, int period);
     */
    // Entry point registration at startup
    
    static int reg_LoadBalanceDecision_marshall3();
    // Entry point index lookup
    
    inline static int idx_LoadBalanceDecision_marshall3() {
      static int epidx = reg_LoadBalanceDecision_marshall3();
      return epidx;
    }

    
    inline static int idx_LoadBalanceDecision(void (MetaBalancer::*)(int req_no, int period) ) {
      return idx_LoadBalanceDecision_marshall3();
    }


    
    static int LoadBalanceDecision(int req_no, int period) { return idx_LoadBalanceDecision_marshall3(); }
    
    static void _call_LoadBalanceDecision_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LoadBalanceDecision_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_LoadBalanceDecision_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_LoadBalanceDecision_marshall3(PUP::er &p,void *msg);
    /* DECLS: void LoadBalanceDecisionFinal(int req_no, int period);
     */
    // Entry point registration at startup
    
    static int reg_LoadBalanceDecisionFinal_marshall4();
    // Entry point index lookup
    
    inline static int idx_LoadBalanceDecisionFinal_marshall4() {
      static int epidx = reg_LoadBalanceDecisionFinal_marshall4();
      return epidx;
    }

    
    inline static int idx_LoadBalanceDecisionFinal(void (MetaBalancer::*)(int req_no, int period) ) {
      return idx_LoadBalanceDecisionFinal_marshall4();
    }


    
    static int LoadBalanceDecisionFinal(int req_no, int period) { return idx_LoadBalanceDecisionFinal_marshall4(); }
    
    static void _call_LoadBalanceDecisionFinal_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LoadBalanceDecisionFinal_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_LoadBalanceDecisionFinal_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_LoadBalanceDecisionFinal_marshall4(PUP::er &p,void *msg);
    /* DECLS: void ReceiveIterationNo(int impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveIterationNo_marshall5();
    // Entry point index lookup
    
    inline static int idx_ReceiveIterationNo_marshall5() {
      static int epidx = reg_ReceiveIterationNo_marshall5();
      return epidx;
    }

    
    inline static int idx_ReceiveIterationNo(void (MetaBalancer::*)(int impl_noname_0) ) {
      return idx_ReceiveIterationNo_marshall5();
    }


    
    static int ReceiveIterationNo(int impl_noname_0) { return idx_ReceiveIterationNo_marshall5(); }
    
    static void _call_ReceiveIterationNo_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveIterationNo_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveIterationNo_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveIterationNo_marshall5(PUP::er &p,void *msg);
    /* DECLS: void RegisterNoObjCallback(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_RegisterNoObjCallback_marshall6();
    // Entry point index lookup
    
    inline static int idx_RegisterNoObjCallback_marshall6() {
      static int epidx = reg_RegisterNoObjCallback_marshall6();
      return epidx;
    }

    
    inline static int idx_RegisterNoObjCallback(void (MetaBalancer::*)(int impl_noname_1) ) {
      return idx_RegisterNoObjCallback_marshall6();
    }


    
    static int RegisterNoObjCallback(int impl_noname_1) { return idx_RegisterNoObjCallback_marshall6(); }
    
    static void _call_RegisterNoObjCallback_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RegisterNoObjCallback_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_RegisterNoObjCallback_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_RegisterNoObjCallback_marshall6(PUP::er &p,void *msg);
    /* DECLS: void TriggerAdaptiveReduction();
     */
    // Entry point registration at startup
    
    static int reg_TriggerAdaptiveReduction_void();
    // Entry point index lookup
    
    inline static int idx_TriggerAdaptiveReduction_void() {
      static int epidx = reg_TriggerAdaptiveReduction_void();
      return epidx;
    }

    
    inline static int idx_TriggerAdaptiveReduction(void (MetaBalancer::*)() ) {
      return idx_TriggerAdaptiveReduction_void();
    }


    
    static int TriggerAdaptiveReduction() { return idx_TriggerAdaptiveReduction_void(); }
    
    static void _call_TriggerAdaptiveReduction_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TriggerAdaptiveReduction_void(void* impl_msg, void* impl_obj);
    /* DECLS: void MetaLBCallLBOnChares();
     */
    // Entry point registration at startup
    
    static int reg_MetaLBCallLBOnChares_void();
    // Entry point index lookup
    
    inline static int idx_MetaLBCallLBOnChares_void() {
      static int epidx = reg_MetaLBCallLBOnChares_void();
      return epidx;
    }

    
    inline static int idx_MetaLBCallLBOnChares(void (MetaBalancer::*)() ) {
      return idx_MetaLBCallLBOnChares_void();
    }


    
    static int MetaLBCallLBOnChares() { return idx_MetaLBCallLBOnChares_void(); }
    
    static void _call_MetaLBCallLBOnChares_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetaLBCallLBOnChares_void(void* impl_msg, void* impl_obj);
    /* DECLS: MetaBalancer(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MetaBalancer_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MetaBalancer_CkMigrateMessage() {
      static int epidx = reg_MetaBalancer_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MetaBalancer_CkMigrateMessage(); }
    
    static void _call_MetaBalancer_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetaBalancer_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MetaBalancer: public CProxyElement_IrrGroup{
  public:
    typedef MetaBalancer local_t;
    typedef CkIndex_MetaBalancer index_t;
    typedef CProxy_MetaBalancer proxy_t;
    typedef CProxyElement_MetaBalancer element_t;
    typedef CProxySection_MetaBalancer section_t;


    /* TRAM aggregators */

    CProxyElement_MetaBalancer(void) {
    }
    CProxyElement_MetaBalancer(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MetaBalancer(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MetaBalancer(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MetaBalancer* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetaBalancer* ckLocalBranch(CkGroupID gID) {
      return (MetaBalancer*)CkLocalBranch(gID);
    }
/* DECLS: void MetaBalancer();
 */
    


/* DECLS: void ReceiveMinStats(const double *load, int n);
 */
    
    void ReceiveMinStats(const double *load, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalanceDecision(int req_no, int period);
 */
    
    void LoadBalanceDecision(int req_no, int period, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalanceDecisionFinal(int req_no, int period);
 */
    
    void LoadBalanceDecisionFinal(int req_no, int period, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveIterationNo(int impl_noname_0);
 */
    
    void ReceiveIterationNo(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RegisterNoObjCallback(int impl_noname_1);
 */
    
    void RegisterNoObjCallback(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void TriggerAdaptiveReduction();
 */
    
    void TriggerAdaptiveReduction(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MetaLBCallLBOnChares();
 */
    
    void MetaLBCallLBOnChares(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetaBalancer(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_MetaBalancer)
/* ---------------- collective proxy -------------- */
class CProxy_MetaBalancer: public CProxy_IrrGroup{
  public:
    typedef MetaBalancer local_t;
    typedef CkIndex_MetaBalancer index_t;
    typedef CProxy_MetaBalancer proxy_t;
    typedef CProxyElement_MetaBalancer element_t;
    typedef CProxySection_MetaBalancer section_t;

    CProxy_MetaBalancer(void) {
    }
    CProxy_MetaBalancer(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MetaBalancer(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MetaBalancer(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MetaBalancer operator[](int onPE) const
      {return CProxyElement_MetaBalancer(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MetaBalancer* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetaBalancer* ckLocalBranch(CkGroupID gID) {
      return (MetaBalancer*)CkLocalBranch(gID);
    }
/* DECLS: void MetaBalancer();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);


/* DECLS: void ReceiveMinStats(const double *load, int n);
 */
    
    void ReceiveMinStats(const double *load, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveMinStats(const double *load, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveMinStats(const double *load, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalanceDecision(int req_no, int period);
 */
    
    void LoadBalanceDecision(int req_no, int period, const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalanceDecision(int req_no, int period, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalanceDecision(int req_no, int period, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalanceDecisionFinal(int req_no, int period);
 */
    
    void LoadBalanceDecisionFinal(int req_no, int period, const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalanceDecisionFinal(int req_no, int period, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void LoadBalanceDecisionFinal(int req_no, int period, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveIterationNo(int impl_noname_0);
 */
    
    void ReceiveIterationNo(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveIterationNo(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveIterationNo(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RegisterNoObjCallback(int impl_noname_1);
 */
    
    void RegisterNoObjCallback(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    
    void RegisterNoObjCallback(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void RegisterNoObjCallback(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void TriggerAdaptiveReduction();
 */
    
    void TriggerAdaptiveReduction(const CkEntryOptions *impl_e_opts=NULL);
    
    void TriggerAdaptiveReduction(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void TriggerAdaptiveReduction(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MetaLBCallLBOnChares();
 */
    
    void MetaLBCallLBOnChares(const CkEntryOptions *impl_e_opts=NULL);
    
    void MetaLBCallLBOnChares(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void MetaLBCallLBOnChares(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetaBalancer(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_MetaBalancer)
/* ---------------- section proxy -------------- */
class CProxySection_MetaBalancer: public CProxySection_IrrGroup{
  public:
    typedef MetaBalancer local_t;
    typedef CkIndex_MetaBalancer index_t;
    typedef CProxy_MetaBalancer proxy_t;
    typedef CProxyElement_MetaBalancer element_t;
    typedef CProxySection_MetaBalancer section_t;

    CProxySection_MetaBalancer(void) {
    }
    CProxySection_MetaBalancer(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MetaBalancer(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MetaBalancer(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_MetaBalancer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_MetaBalancer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MetaBalancer* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetaBalancer* ckLocalBranch(CkGroupID gID) {
      return (MetaBalancer*)CkLocalBranch(gID);
    }
/* DECLS: void MetaBalancer();
 */
    


/* DECLS: void ReceiveMinStats(const double *load, int n);
 */
    
    void ReceiveMinStats(const double *load, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalanceDecision(int req_no, int period);
 */
    
    void LoadBalanceDecision(int req_no, int period, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void LoadBalanceDecisionFinal(int req_no, int period);
 */
    
    void LoadBalanceDecisionFinal(int req_no, int period, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveIterationNo(int impl_noname_0);
 */
    
    void ReceiveIterationNo(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RegisterNoObjCallback(int impl_noname_1);
 */
    
    void RegisterNoObjCallback(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void TriggerAdaptiveReduction();
 */
    
    void TriggerAdaptiveReduction(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void MetaLBCallLBOnChares();
 */
    
    void MetaLBCallLBOnChares(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetaBalancer(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_MetaBalancer)
#define MetaBalancer_SDAG_CODE 
typedef CBaseT1<Group, CProxy_MetaBalancer>CBase_MetaBalancer;

/* DECLS: group MetaBalancerRedn: IrrGroup{
void MetaBalancerRedn();
void ReceiveIterNo(int max_iter);
void getMaxIter(int impl_noname_2);
MetaBalancerRedn(CkMigrateMessage* impl_msg);
};
 */
 class MetaBalancerRedn;
 class CkIndex_MetaBalancerRedn;
 class CProxy_MetaBalancerRedn;
 class CProxyElement_MetaBalancerRedn;
 class CProxySection_MetaBalancerRedn;
/* --------------- index object ------------------ */
class CkIndex_MetaBalancerRedn:public CkIndex_IrrGroup{
  public:
    typedef MetaBalancerRedn local_t;
    typedef CkIndex_MetaBalancerRedn index_t;
    typedef CProxy_MetaBalancerRedn proxy_t;
    typedef CProxyElement_MetaBalancerRedn element_t;
    typedef CProxySection_MetaBalancerRedn section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void MetaBalancerRedn();
     */
    // Entry point registration at startup
    
    static int reg_MetaBalancerRedn_void();
    // Entry point index lookup
    
    inline static int idx_MetaBalancerRedn_void() {
      static int epidx = reg_MetaBalancerRedn_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MetaBalancerRedn_void(); }
    
    static void _call_MetaBalancerRedn_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetaBalancerRedn_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ReceiveIterNo(int max_iter);
     */
    // Entry point registration at startup
    
    static int reg_ReceiveIterNo_marshall2();
    // Entry point index lookup
    
    inline static int idx_ReceiveIterNo_marshall2() {
      static int epidx = reg_ReceiveIterNo_marshall2();
      return epidx;
    }

    
    inline static int idx_ReceiveIterNo(void (MetaBalancerRedn::*)(int max_iter) ) {
      return idx_ReceiveIterNo_marshall2();
    }


    
    static int ReceiveIterNo(int max_iter) { return idx_ReceiveIterNo_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_ReceiveIterNo_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_ReceiveIterNo_marshall2() {
      static int epidx = reg_redn_wrapper_ReceiveIterNo_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_ReceiveIterNo(CkReductionMsg* impl_msg) { return idx_redn_wrapper_ReceiveIterNo_marshall2(); }
    
    static void _call_redn_wrapper_ReceiveIterNo_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_ReceiveIterNo_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReceiveIterNo_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ReceiveIterNo_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ReceiveIterNo_marshall2(PUP::er &p,void *msg);
    /* DECLS: void getMaxIter(int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_getMaxIter_marshall3();
    // Entry point index lookup
    
    inline static int idx_getMaxIter_marshall3() {
      static int epidx = reg_getMaxIter_marshall3();
      return epidx;
    }

    
    inline static int idx_getMaxIter(void (MetaBalancerRedn::*)(int impl_noname_2) ) {
      return idx_getMaxIter_marshall3();
    }


    
    static int getMaxIter(int impl_noname_2) { return idx_getMaxIter_marshall3(); }
    
    static void _call_getMaxIter_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getMaxIter_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getMaxIter_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getMaxIter_marshall3(PUP::er &p,void *msg);
    /* DECLS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MetaBalancerRedn_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MetaBalancerRedn_CkMigrateMessage() {
      static int epidx = reg_MetaBalancerRedn_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MetaBalancerRedn_CkMigrateMessage(); }
    
    static void _call_MetaBalancerRedn_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MetaBalancerRedn_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MetaBalancerRedn: public CProxyElement_IrrGroup{
  public:
    typedef MetaBalancerRedn local_t;
    typedef CkIndex_MetaBalancerRedn index_t;
    typedef CProxy_MetaBalancerRedn proxy_t;
    typedef CProxyElement_MetaBalancerRedn element_t;
    typedef CProxySection_MetaBalancerRedn section_t;


    /* TRAM aggregators */

    CProxyElement_MetaBalancerRedn(void) {
    }
    CProxyElement_MetaBalancerRedn(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MetaBalancerRedn(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MetaBalancerRedn(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MetaBalancerRedn* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetaBalancerRedn* ckLocalBranch(CkGroupID gID) {
      return (MetaBalancerRedn*)CkLocalBranch(gID);
    }
/* DECLS: void MetaBalancerRedn();
 */
    

/* DECLS: void ReceiveIterNo(int max_iter);
 */
    
    void ReceiveIterNo(int max_iter, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getMaxIter(int impl_noname_2);
 */
    
    void getMaxIter(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_MetaBalancerRedn)
/* ---------------- collective proxy -------------- */
class CProxy_MetaBalancerRedn: public CProxy_IrrGroup{
  public:
    typedef MetaBalancerRedn local_t;
    typedef CkIndex_MetaBalancerRedn index_t;
    typedef CProxy_MetaBalancerRedn proxy_t;
    typedef CProxyElement_MetaBalancerRedn element_t;
    typedef CProxySection_MetaBalancerRedn section_t;

    CProxy_MetaBalancerRedn(void) {
    }
    CProxy_MetaBalancerRedn(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MetaBalancerRedn(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MetaBalancerRedn(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MetaBalancerRedn operator[](int onPE) const
      {return CProxyElement_MetaBalancerRedn(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MetaBalancerRedn* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetaBalancerRedn* ckLocalBranch(CkGroupID gID) {
      return (MetaBalancerRedn*)CkLocalBranch(gID);
    }
/* DECLS: void MetaBalancerRedn();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ReceiveIterNo(int max_iter);
 */
    
    void ReceiveIterNo(int max_iter, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveIterNo(int max_iter, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ReceiveIterNo(int max_iter, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getMaxIter(int impl_noname_2);
 */
    
    void getMaxIter(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void getMaxIter(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getMaxIter(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_MetaBalancerRedn)
/* ---------------- section proxy -------------- */
class CProxySection_MetaBalancerRedn: public CProxySection_IrrGroup{
  public:
    typedef MetaBalancerRedn local_t;
    typedef CkIndex_MetaBalancerRedn index_t;
    typedef CProxy_MetaBalancerRedn proxy_t;
    typedef CProxyElement_MetaBalancerRedn element_t;
    typedef CProxySection_MetaBalancerRedn section_t;

    CProxySection_MetaBalancerRedn(void) {
    }
    CProxySection_MetaBalancerRedn(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MetaBalancerRedn(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MetaBalancerRedn(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_MetaBalancerRedn(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_MetaBalancerRedn(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MetaBalancerRedn* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MetaBalancerRedn* ckLocalBranch(CkGroupID gID) {
      return (MetaBalancerRedn*)CkLocalBranch(gID);
    }
/* DECLS: void MetaBalancerRedn();
 */
    

/* DECLS: void ReceiveIterNo(int max_iter);
 */
    
    void ReceiveIterNo(int max_iter, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getMaxIter(int impl_noname_2);
 */
    
    void getMaxIter(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MetaBalancerRedn(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_MetaBalancerRedn)
#define MetaBalancerRedn_SDAG_CODE 
typedef CBaseT1<Group, CProxy_MetaBalancerRedn>CBase_MetaBalancerRedn;



/* ---------------- method closures -------------- */
class Closure_MetaLBInit {
  public:

};


/* ---------------- method closures -------------- */
class Closure_MetaBalancer {
  public:



    struct ReceiveMinStats_2_closure;


    struct LoadBalanceDecision_3_closure;


    struct LoadBalanceDecisionFinal_4_closure;


    struct ReceiveIterationNo_5_closure;


    struct RegisterNoObjCallback_6_closure;


    struct TriggerAdaptiveReduction_7_closure;


    struct MetaLBCallLBOnChares_8_closure;


};

/* ---------------- method closures -------------- */
class Closure_MetaBalancerRedn {
  public:


    struct ReceiveIterNo_2_closure;


    struct getMaxIter_3_closure;


};

extern void _registerMetaBalancer(void);
#endif
