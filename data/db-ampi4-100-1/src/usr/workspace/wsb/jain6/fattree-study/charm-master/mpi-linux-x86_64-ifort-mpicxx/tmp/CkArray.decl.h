#ifndef _DECL_CkArray_H_
#define _DECL_CkArray_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CkReduction.decl.h"

#include "CkLocation.decl.h"

#include "CkArrayReductionMgr.decl.h"

/* DECLS: readonly bool _isAnytimeMigration;
 */

/* DECLS: group CkArray: CkReductionMgr{
CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy);
void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type);
void remoteBeginInserting();
void remoteDoneInserting();
void sendBroadcast(CkMessage* impl_msg);
void recvBroadcast(CkMessage* impl_msg);
void recvBroadcastViaTree(CkMessage* impl_msg);
void sendExpeditedBroadcast(CkMessage* impl_msg);
void recvExpeditedBroadcast(CkMessage* impl_msg);
void ckDestroy();
CkArray(CkMigrateMessage* impl_msg);
};
 */
 class CkArray;
 class CkIndex_CkArray;
 class CProxy_CkArray;
 class CProxyElement_CkArray;
 class CProxySection_CkArray;
/* --------------- index object ------------------ */
class CkIndex_CkArray:public CkIndex_CkReductionMgr{
  public:
    typedef CkArray local_t;
    typedef CkIndex_CkArray index_t;
    typedef CProxy_CkArray proxy_t;
    typedef CProxyElement_CkArray element_t;
    typedef CProxySection_CkArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy);
     */
    // Entry point registration at startup
    
    static int reg_CkArray_marshall1();
    // Entry point index lookup
    
    inline static int idx_CkArray_marshall1() {
      static int epidx = reg_CkArray_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy) { return idx_CkArray_marshall1(); }
    
    static void _call_CkArray_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkArray_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkArray_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkArray_marshall1(PUP::er &p,void *msg);
    /* DECLS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
     */
    // Entry point registration at startup
    
    static int reg_insertElement_marshall2();
    // Entry point index lookup
    
    inline static int idx_insertElement_marshall2() {
      static int epidx = reg_insertElement_marshall2();
      return epidx;
    }

    
    inline static int idx_insertElement(void (CkArray::*)(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData) ) {
      return idx_insertElement_marshall2();
    }


    
    static int insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData) { return idx_insertElement_marshall2(); }
    
    static void _call_insertElement_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_insertElement_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_insertElement_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_insertElement_marshall2(PUP::er &p,void *msg);
    /* DECLS: void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type);
     */
    // Entry point registration at startup
    
    static int reg_demandCreateElement_marshall3();
    // Entry point index lookup
    
    inline static int idx_demandCreateElement_marshall3() {
      static int epidx = reg_demandCreateElement_marshall3();
      return epidx;
    }

    
    inline static int idx_demandCreateElement(void (CkArray::*)(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type) ) {
      return idx_demandCreateElement_marshall3();
    }


    
    static int demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type) { return idx_demandCreateElement_marshall3(); }
    
    static void _call_demandCreateElement_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_demandCreateElement_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_demandCreateElement_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_demandCreateElement_marshall3(PUP::er &p,void *msg);
    /* DECLS: void remoteBeginInserting();
     */
    // Entry point registration at startup
    
    static int reg_remoteBeginInserting_void();
    // Entry point index lookup
    
    inline static int idx_remoteBeginInserting_void() {
      static int epidx = reg_remoteBeginInserting_void();
      return epidx;
    }

    
    inline static int idx_remoteBeginInserting(void (CkArray::*)() ) {
      return idx_remoteBeginInserting_void();
    }


    
    static int remoteBeginInserting() { return idx_remoteBeginInserting_void(); }
    
    static void _call_remoteBeginInserting_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remoteBeginInserting_void(void* impl_msg, void* impl_obj);
    /* DECLS: void remoteDoneInserting();
     */
    // Entry point registration at startup
    
    static int reg_remoteDoneInserting_void();
    // Entry point index lookup
    
    inline static int idx_remoteDoneInserting_void() {
      static int epidx = reg_remoteDoneInserting_void();
      return epidx;
    }

    
    inline static int idx_remoteDoneInserting(void (CkArray::*)() ) {
      return idx_remoteDoneInserting_void();
    }


    
    static int remoteDoneInserting() { return idx_remoteDoneInserting_void(); }
    
    static void _call_remoteDoneInserting_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remoteDoneInserting_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendBroadcast(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendBroadcast_CkMessage();
    // Entry point index lookup
    
    inline static int idx_sendBroadcast_CkMessage() {
      static int epidx = reg_sendBroadcast_CkMessage();
      return epidx;
    }

    
    inline static int idx_sendBroadcast(void (CkArray::*)(CkMessage* impl_msg) ) {
      return idx_sendBroadcast_CkMessage();
    }


    
    static int sendBroadcast(CkMessage* impl_msg) { return idx_sendBroadcast_CkMessage(); }
    
    static void _call_sendBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBroadcast(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBroadcast_CkMessage();
    // Entry point index lookup
    
    inline static int idx_recvBroadcast_CkMessage() {
      static int epidx = reg_recvBroadcast_CkMessage();
      return epidx;
    }

    
    inline static int idx_recvBroadcast(void (CkArray::*)(CkMessage* impl_msg) ) {
      return idx_recvBroadcast_CkMessage();
    }


    
    static int recvBroadcast(CkMessage* impl_msg) { return idx_recvBroadcast_CkMessage(); }
    
    static void _call_recvBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBroadcastViaTree(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBroadcastViaTree_CkMessage();
    // Entry point index lookup
    
    inline static int idx_recvBroadcastViaTree_CkMessage() {
      static int epidx = reg_recvBroadcastViaTree_CkMessage();
      return epidx;
    }

    
    inline static int idx_recvBroadcastViaTree(void (CkArray::*)(CkMessage* impl_msg) ) {
      return idx_recvBroadcastViaTree_CkMessage();
    }


    
    static int recvBroadcastViaTree(CkMessage* impl_msg) { return idx_recvBroadcastViaTree_CkMessage(); }
    
    static void _call_recvBroadcastViaTree_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBroadcastViaTree_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void sendExpeditedBroadcast(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendExpeditedBroadcast_CkMessage();
    // Entry point index lookup
    
    inline static int idx_sendExpeditedBroadcast_CkMessage() {
      static int epidx = reg_sendExpeditedBroadcast_CkMessage();
      return epidx;
    }

    
    inline static int idx_sendExpeditedBroadcast(void (CkArray::*)(CkMessage* impl_msg) ) {
      return idx_sendExpeditedBroadcast_CkMessage();
    }


    
    static int sendExpeditedBroadcast(CkMessage* impl_msg) { return idx_sendExpeditedBroadcast_CkMessage(); }
    
    static void _call_sendExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void recvExpeditedBroadcast(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvExpeditedBroadcast_CkMessage();
    // Entry point index lookup
    
    inline static int idx_recvExpeditedBroadcast_CkMessage() {
      static int epidx = reg_recvExpeditedBroadcast_CkMessage();
      return epidx;
    }

    
    inline static int idx_recvExpeditedBroadcast(void (CkArray::*)(CkMessage* impl_msg) ) {
      return idx_recvExpeditedBroadcast_CkMessage();
    }


    
    static int recvExpeditedBroadcast(CkMessage* impl_msg) { return idx_recvExpeditedBroadcast_CkMessage(); }
    
    static void _call_recvExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvExpeditedBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void ckDestroy();
     */
    // Entry point registration at startup
    
    static int reg_ckDestroy_void();
    // Entry point index lookup
    
    inline static int idx_ckDestroy_void() {
      static int epidx = reg_ckDestroy_void();
      return epidx;
    }

    
    inline static int idx_ckDestroy(void (CkArray::*)() ) {
      return idx_ckDestroy_void();
    }


    
    static int ckDestroy() { return idx_ckDestroy_void(); }
    
    static void _call_ckDestroy_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ckDestroy_void(void* impl_msg, void* impl_obj);
    /* DECLS: CkArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkArray_CkMigrateMessage() {
      static int epidx = reg_CkArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkArray_CkMigrateMessage(); }
    
    static void _call_CkArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkArray: public CProxyElement_CkReductionMgr{
  public:
    typedef CkArray local_t;
    typedef CkIndex_CkArray index_t;
    typedef CProxy_CkArray proxy_t;
    typedef CProxyElement_CkArray element_t;
    typedef CProxySection_CkArray section_t;


    /* TRAM aggregators */

    CProxyElement_CkArray(void) {
    }
    CProxyElement_CkArray(const IrrGroup *g) : CProxyElement_CkReductionMgr(g){
    }
    CProxyElement_CkArray(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkReductionMgr(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkArray(CkGroupID _gid,int _onPE) : CProxyElement_CkReductionMgr(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkReductionMgr::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkReductionMgr::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkReductionMgr::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkReductionMgr::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkReductionMgr::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkReductionMgr::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkReductionMgr::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkReductionMgr::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkReductionMgr::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkReductionMgr::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkReductionMgr::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkReductionMgr::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkReductionMgr::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkReductionMgr::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkReductionMgr::ckSetGroupID(g);
    }
    CkArray* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkArray* ckLocalBranch(CkGroupID gID) {
      return (CkArray*)CkLocalBranch(gID);
    }
/* DECLS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy);
 */
    

/* DECLS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
 */
    
    void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type);
 */
    
    void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteBeginInserting();
 */
    
    void remoteBeginInserting(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteDoneInserting();
 */
    
    void remoteDoneInserting(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendBroadcast(CkMessage* impl_msg);
 */
    
    void sendBroadcast(CkMessage* impl_msg);

/* DECLS: void recvBroadcast(CkMessage* impl_msg);
 */
    
    void recvBroadcast(CkMessage* impl_msg);

/* DECLS: void recvBroadcastViaTree(CkMessage* impl_msg);
 */
    
    void recvBroadcastViaTree(CkMessage* impl_msg);

/* DECLS: void sendExpeditedBroadcast(CkMessage* impl_msg);
 */
    
    void sendExpeditedBroadcast(CkMessage* impl_msg);

/* DECLS: void recvExpeditedBroadcast(CkMessage* impl_msg);
 */
    
    void recvExpeditedBroadcast(CkMessage* impl_msg);

/* DECLS: void ckDestroy();
 */
    
    void ckDestroy(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_CkArray)
/* ---------------- collective proxy -------------- */
class CProxy_CkArray: public CProxy_CkReductionMgr{
  public:
    typedef CkArray local_t;
    typedef CkIndex_CkArray index_t;
    typedef CProxy_CkArray proxy_t;
    typedef CProxyElement_CkArray element_t;
    typedef CProxySection_CkArray section_t;

    CProxy_CkArray(void) {
    }
    CProxy_CkArray(const IrrGroup *g) : CProxy_CkReductionMgr(g){
    }
    CProxy_CkArray(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkReductionMgr(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkArray(CkGroupID _gid) : CProxy_CkReductionMgr(_gid){  }
    CProxyElement_CkArray operator[](int onPE) const
      {return CProxyElement_CkArray(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkReductionMgr::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkReductionMgr::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkReductionMgr::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkReductionMgr::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkReductionMgr::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkReductionMgr::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkReductionMgr::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkReductionMgr::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkReductionMgr::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkReductionMgr::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkReductionMgr::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkReductionMgr::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkReductionMgr::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkReductionMgr::ckSetGroupID(g);
    }
    CkArray* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkArray* ckLocalBranch(CkGroupID gID) {
      return (CkArray*)CkLocalBranch(gID);
    }
/* DECLS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy);
 */
    
    static CkGroupID ckNew(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
 */
    
    void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, const CkEntryOptions *impl_e_opts=NULL);
    
    void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type);
 */
    
    void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type, const CkEntryOptions *impl_e_opts=NULL);
    
    void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteBeginInserting();
 */
    
    void remoteBeginInserting(const CkEntryOptions *impl_e_opts=NULL);
    
    void remoteBeginInserting(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void remoteBeginInserting(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteDoneInserting();
 */
    
    void remoteDoneInserting(const CkEntryOptions *impl_e_opts=NULL);
    
    void remoteDoneInserting(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void remoteDoneInserting(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendBroadcast(CkMessage* impl_msg);
 */
    
    void sendBroadcast(CkMessage* impl_msg);
    
    void sendBroadcast(CkMessage* impl_msg, int npes, int *pes);
    
    void sendBroadcast(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void recvBroadcast(CkMessage* impl_msg);
 */
    
    void recvBroadcast(CkMessage* impl_msg);
    
    void recvBroadcast(CkMessage* impl_msg, int npes, int *pes);
    
    void recvBroadcast(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void recvBroadcastViaTree(CkMessage* impl_msg);
 */
    
    void recvBroadcastViaTree(CkMessage* impl_msg);
    
    void recvBroadcastViaTree(CkMessage* impl_msg, int npes, int *pes);
    
    void recvBroadcastViaTree(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void sendExpeditedBroadcast(CkMessage* impl_msg);
 */
    
    void sendExpeditedBroadcast(CkMessage* impl_msg);
    
    void sendExpeditedBroadcast(CkMessage* impl_msg, int npes, int *pes);
    
    void sendExpeditedBroadcast(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void recvExpeditedBroadcast(CkMessage* impl_msg);
 */
    
    void recvExpeditedBroadcast(CkMessage* impl_msg);
    
    void recvExpeditedBroadcast(CkMessage* impl_msg, int npes, int *pes);
    
    void recvExpeditedBroadcast(CkMessage* impl_msg, CmiGroup &grp);

/* DECLS: void ckDestroy();
 */
    
    void ckDestroy(const CkEntryOptions *impl_e_opts=NULL);
    
    void ckDestroy(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ckDestroy(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_CkArray)
/* ---------------- section proxy -------------- */
class CProxySection_CkArray: public CProxySection_CkReductionMgr{
  public:
    typedef CkArray local_t;
    typedef CkIndex_CkArray index_t;
    typedef CProxy_CkArray proxy_t;
    typedef CProxyElement_CkArray element_t;
    typedef CProxySection_CkArray section_t;

    CProxySection_CkArray(void) {
    }
    CProxySection_CkArray(const IrrGroup *g) : CProxySection_CkReductionMgr(g){
    }
    CProxySection_CkArray(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkReductionMgr(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkArray(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkReductionMgr(_gid,_pelist,_npes){  }
    CProxySection_CkArray(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkReductionMgr(n,_gid,_pelist,_npes){  }
    CProxySection_CkArray(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkReductionMgr(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkReductionMgr::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkReductionMgr::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkReductionMgr::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkReductionMgr::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkReductionMgr::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkReductionMgr::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkReductionMgr::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkReductionMgr::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkReductionMgr::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkReductionMgr::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkReductionMgr::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkReductionMgr::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkReductionMgr::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkReductionMgr::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkReductionMgr::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkReductionMgr::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkReductionMgr::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkReductionMgr::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkReductionMgr::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkReductionMgr::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkReductionMgr::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkReductionMgr::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkReductionMgr::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkReductionMgr::ckSetGroupID(g);
    }
    CkArray* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkArray* ckLocalBranch(CkGroupID gID) {
      return (CkArray*)CkLocalBranch(gID);
    }
/* DECLS: CkArray(const CkArrayOptions &opts, const CkMarshalledMessage &ctorMsg, const CkNodeGroupID &nodereductionProxy);
 */
    

/* DECLS: void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData);
 */
    
    void insertElement(const CkMarshalledMessage &impl_noname_0, const CkArrayIndex &impl_noname_1, const int *listenerData, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type);
 */
    
    void demandCreateElement(const CkArrayIndex &idx, int ctor, const CkDeliver_t &type, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteBeginInserting();
 */
    
    void remoteBeginInserting(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteDoneInserting();
 */
    
    void remoteDoneInserting(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendBroadcast(CkMessage* impl_msg);
 */
    
    void sendBroadcast(CkMessage* impl_msg);

/* DECLS: void recvBroadcast(CkMessage* impl_msg);
 */
    
    void recvBroadcast(CkMessage* impl_msg);

/* DECLS: void recvBroadcastViaTree(CkMessage* impl_msg);
 */
    
    void recvBroadcastViaTree(CkMessage* impl_msg);

/* DECLS: void sendExpeditedBroadcast(CkMessage* impl_msg);
 */
    
    void sendExpeditedBroadcast(CkMessage* impl_msg);

/* DECLS: void recvExpeditedBroadcast(CkMessage* impl_msg);
 */
    
    void recvExpeditedBroadcast(CkMessage* impl_msg);

/* DECLS: void ckDestroy();
 */
    
    void ckDestroy(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_CkArray)
#define CkArray_SDAG_CODE 
typedef CBaseT1<CkReductionMgr, CProxy_CkArray>CBase_CkArray;





/* DECLS: array ArrayElement: ArrayBase{
ArrayElement();
void ckDestroy();
void recvBroadcast(CkMessage* impl_msg);
void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
void defrag(CkReductionMsg* impl_msg);
ArrayElement(CkMigrateMessage* impl_msg);
};
 */
 class ArrayElement;
 class CkIndex_ArrayElement;
 class CProxy_ArrayElement;
 class CProxyElement_ArrayElement;
 class CProxySection_ArrayElement;
/* --------------- index object ------------------ */
class CkIndex_ArrayElement:public CkIndex_ArrayBase{
  public:
    typedef ArrayElement local_t;
    typedef CkIndex_ArrayElement index_t;
    typedef CProxy_ArrayElement proxy_t;
    typedef CProxyElement_ArrayElement element_t;
    typedef CProxySection_ArrayElement section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ArrayElement();
     */
    // Entry point registration at startup
    
    static int reg_ArrayElement_void();
    // Entry point index lookup
    
    inline static int idx_ArrayElement_void() {
      static int epidx = reg_ArrayElement_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ArrayElement_void(); }
    
    static void _call_ArrayElement_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ArrayElement_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ckDestroy();
     */
    // Entry point registration at startup
    
    static int reg_ckDestroy_void();
    // Entry point index lookup
    
    inline static int idx_ckDestroy_void() {
      static int epidx = reg_ckDestroy_void();
      return epidx;
    }

    
    inline static int idx_ckDestroy(void (ArrayElement::*)() ) {
      return idx_ckDestroy_void();
    }


    
    static int ckDestroy() { return idx_ckDestroy_void(); }
    
    static void _call_ckDestroy_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ckDestroy_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBroadcast(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBroadcast_CkMessage();
    // Entry point index lookup
    
    inline static int idx_recvBroadcast_CkMessage() {
      static int epidx = reg_recvBroadcast_CkMessage();
      return epidx;
    }

    
    inline static int idx_recvBroadcast(void (ArrayElement::*)(CkMessage* impl_msg) ) {
      return idx_recvBroadcast_CkMessage();
    }


    
    static int recvBroadcast(CkMessage* impl_msg) { return idx_recvBroadcast_CkMessage(); }
    
    static void _call_recvBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBroadcast_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_inmem_checkpoint_CkArrayCheckPTReqMessage();
    // Entry point index lookup
    
    inline static int idx_inmem_checkpoint_CkArrayCheckPTReqMessage() {
      static int epidx = reg_inmem_checkpoint_CkArrayCheckPTReqMessage();
      return epidx;
    }

    
    inline static int idx_inmem_checkpoint(void (ArrayElement::*)(CkArrayCheckPTReqMessage* impl_msg) ) {
      return idx_inmem_checkpoint_CkArrayCheckPTReqMessage();
    }


    
    static int inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) { return idx_inmem_checkpoint_CkArrayCheckPTReqMessage(); }
    
    static void _call_inmem_checkpoint_CkArrayCheckPTReqMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_inmem_checkpoint_CkArrayCheckPTReqMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void defrag(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_defrag_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_defrag_CkReductionMsg() {
      static int epidx = reg_defrag_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_defrag(void (ArrayElement::*)(CkReductionMsg* impl_msg) ) {
      return idx_defrag_CkReductionMsg();
    }


    
    static int defrag(CkReductionMsg* impl_msg) { return idx_defrag_CkReductionMsg(); }
    
    static void _call_defrag_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_defrag_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: ArrayElement(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ArrayElement_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ArrayElement_CkMigrateMessage() {
      static int epidx = reg_ArrayElement_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ArrayElement_CkMigrateMessage(); }
    
    static void _call_ArrayElement_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ArrayElement_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_ArrayElement : public CProxyElement_ArrayBase{
  public:
    typedef ArrayElement local_t;
    typedef CkIndex_ArrayElement index_t;
    typedef CProxy_ArrayElement proxy_t;
    typedef CProxyElement_ArrayElement element_t;
    typedef CProxySection_ArrayElement section_t;


    /* TRAM aggregators */

    CProxyElement_ArrayElement(void) {
    }
    CProxyElement_ArrayElement(const ArrayElement *e) : CProxyElement_ArrayBase(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayBase::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayBase::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayBase::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayBase::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayBase::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayBase::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayBase::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayBase::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayBase::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayBase::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayBase::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayBase::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayBase::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayBase::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayBase::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayBase::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayBase::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayBase::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayBase::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayBase::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayBase::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayBase::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayBase::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayBase::ckGetIndex(); }

    ArrayElement *ckLocal(void) const
    { return (ArrayElement *)CProxyElement_ArrayBase::ckLocal(); }

    CProxyElement_ArrayElement(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayBase(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ArrayElement(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayBase(aid,idx)
    {
}
/* DECLS: ArrayElement();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void ckDestroy();
 */
    
    void ckDestroy(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBroadcast(CkMessage* impl_msg);
 */
    
    void recvBroadcast(CkMessage* impl_msg) ;

/* DECLS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
 */
    
    void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) ;

/* DECLS: void defrag(CkReductionMsg* impl_msg);
 */
    
    void defrag(CkReductionMsg* impl_msg) ;

/* DECLS: ArrayElement(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ArrayElement)
/* ---------------- collective proxy -------------- */
 class CProxy_ArrayElement : public CProxy_ArrayBase{
  public:
    typedef ArrayElement local_t;
    typedef CkIndex_ArrayElement index_t;
    typedef CProxy_ArrayElement proxy_t;
    typedef CProxyElement_ArrayElement element_t;
    typedef CProxySection_ArrayElement section_t;

    CProxy_ArrayElement(void) {
    }
    CProxy_ArrayElement(const ArrayElement *e) : CProxy_ArrayBase(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayBase::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayBase::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayBase::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayBase::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayBase::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayBase::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayBase::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayBase::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayBase::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayBase::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayBase::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayBase::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayBase::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayBase::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayBase::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayBase::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayBase::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayBase::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayBase::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayBase::ckSetReductionClient(cb); }
    CProxy_ArrayElement(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayBase(aid,CK_DELCTOR_ARGS) {}
    CProxy_ArrayElement(const CkArrayID &aid) 
        :CProxy_ArrayBase(aid) {}
/* DECLS: ArrayElement();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void ckDestroy();
 */
    
    void ckDestroy(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBroadcast(CkMessage* impl_msg);
 */
    
    void recvBroadcast(CkMessage* impl_msg) ;

/* DECLS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
 */
    
    void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) ;

/* DECLS: void defrag(CkReductionMsg* impl_msg);
 */
    
    void defrag(CkReductionMsg* impl_msg) ;

/* DECLS: ArrayElement(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ArrayElement)
/* ---------------- section proxy -------------- */
 class CProxySection_ArrayElement : public CProxySection_ArrayBase{
  public:
    typedef ArrayElement local_t;
    typedef CkIndex_ArrayElement index_t;
    typedef CProxy_ArrayElement proxy_t;
    typedef CProxyElement_ArrayElement element_t;
    typedef CProxySection_ArrayElement section_t;

    CProxySection_ArrayElement(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayBase::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayBase::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayBase::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayBase::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayBase::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayBase::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayBase::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayBase::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayBase::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayBase::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayBase::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayBase::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayBase::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayBase::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayBase::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayBase::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayBase::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayBase::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayBase::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayBase::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayBase::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayBase::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayBase::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayBase::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayBase::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayBase::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayBase::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayBase::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayBase::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayBase::ckGetNumElements(i); }    CProxySection_ArrayElement(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayBase(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ArrayElement(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayBase(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_ArrayElement(const CkSectionID &sid)  
        :CProxySection_ArrayBase(sid) { ckAutoDelegate(); }
    CProxySection_ArrayElement(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayBase(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ArrayElement(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayBase(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_ArrayElement(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayBase(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayBase::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayBase::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayBase::resetSection();
    } 
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: ArrayElement();
 */
    

/* DECLS: void ckDestroy();
 */
    
    void ckDestroy(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBroadcast(CkMessage* impl_msg);
 */
    
    void recvBroadcast(CkMessage* impl_msg) ;

/* DECLS: void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg);
 */
    
    void inmem_checkpoint(CkArrayCheckPTReqMessage* impl_msg) ;

/* DECLS: void defrag(CkReductionMsg* impl_msg);
 */
    
    void defrag(CkReductionMsg* impl_msg) ;

/* DECLS: ArrayElement(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ArrayElement)
#define ArrayElement_SDAG_CODE 
typedef CBaseT1<ArrayBase, CProxy_ArrayElement>CBase_ArrayElement;

/* DECLS: message CkCreateArrayAsyncMsg{
char ctorPayload[];
}
;
 */
class CkCreateArrayAsyncMsg;
class CMessage_CkCreateArrayAsyncMsg:public CkMessage{
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
    CMessage_CkCreateArrayAsyncMsg();
    static void *pack(CkCreateArrayAsyncMsg *p);
    static CkCreateArrayAsyncMsg* unpack(void* p);
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

/* DECLS: message CkArrayCreatedMsg{
CkArrayID aid;
}
;
 */
class CkArrayCreatedMsg;
class CMessage_CkArrayCreatedMsg:public CkMessage{
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
    CMessage_CkArrayCreatedMsg();
    static void *pack(CkArrayCreatedMsg *p);
    static CkArrayCreatedMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};





/* ---------------- method closures -------------- */
class Closure_CkArray {
  public:


    struct insertElement_2_closure;


    struct demandCreateElement_3_closure;


    struct remoteBeginInserting_4_closure;


    struct remoteDoneInserting_5_closure;







    struct ckDestroy_11_closure;


};





/* ---------------- method closures -------------- */
class Closure_ArrayElement {
  public:


    struct ckDestroy_2_closure;





};



extern void _registerCkArray(void);
#endif
