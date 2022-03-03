


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::ResumeThread_2_closure : public SDAG::Closure {
      

      ResumeThread_2_closure() {
        init();
      }
      ResumeThread_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeThread_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeThread_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::Checkpoint_3_closure : public SDAG::Closure {
      int len;
      char *dname;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      Checkpoint_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      Checkpoint_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return len;}
      char *& getP1() { return dname;}
      void pup(PUP::er& __p) {
        __p | len;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int len; implP|len;
  int impl_off_dname, impl_cnt_dname; 
  implP|impl_off_dname;
  implP|impl_cnt_dname;
          impl_buf+=CK_ALIGN(implP.size(),16);
          dname = (char *)(impl_buf+impl_off_dname);
        }
      }
      virtual ~Checkpoint_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(Checkpoint_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiParent::ExchangeProxy_4_closure : public SDAG::Closure {
      CProxy_ampi impl_noname_0;


      ExchangeProxy_4_closure() {
        init();
      }
      ExchangeProxy_4_closure(CkMigrateMessage*) {
        init();
      }
      CProxy_ampi & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~ExchangeProxy_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(ExchangeProxy_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::allInitDone_3_closure : public SDAG::Closure {
      

      allInitDone_3_closure() {
        init();
      }
      allInitDone_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~allInitDone_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(allInitDone_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::setInitDoneFlag_4_closure : public SDAG::Closure {
      

      setInitDoneFlag_4_closure() {
        init();
      }
      setInitDoneFlag_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setInitDoneFlag_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(setInitDoneFlag_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::unblock_5_closure : public SDAG::Closure {
      

      unblock_5_closure() {
        init();
      }
      unblock_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~unblock_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(unblock_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::ssend_ack_6_closure : public SDAG::Closure {
      int impl_noname_1;


      ssend_ack_6_closure() {
        init();
      }
      ssend_ack_6_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~ssend_ack_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(ssend_ack_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::barrierResult_8_closure : public SDAG::Closure {
      

      barrierResult_8_closure() {
        init();
      }
      barrierResult_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~barrierResult_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(barrierResult_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::ibarrierResult_9_closure : public SDAG::Closure {
      

      ibarrierResult_9_closure() {
        init();
      }
      ibarrierResult_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ibarrierResult_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(ibarrierResult_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::commCreatePhase1_14_closure : public SDAG::Closure {
      MPI_Comm nextGroupComm;


      commCreatePhase1_14_closure() {
        init();
      }
      commCreatePhase1_14_closure(CkMigrateMessage*) {
        init();
      }
      MPI_Comm & getP0() { return nextGroupComm;}
      void pup(PUP::er& __p) {
        __p | nextGroupComm;
        packClosure(__p);
      }
      virtual ~commCreatePhase1_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(commCreatePhase1_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::intercommCreatePhase1_15_closure : public SDAG::Closure {
      MPI_Comm nextInterComm;


      intercommCreatePhase1_15_closure() {
        init();
      }
      intercommCreatePhase1_15_closure(CkMigrateMessage*) {
        init();
      }
      MPI_Comm & getP0() { return nextInterComm;}
      void pup(PUP::er& __p) {
        __p | nextInterComm;
        packClosure(__p);
      }
      virtual ~intercommCreatePhase1_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(intercommCreatePhase1_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::intercommCreatePhaseSelf_16_closure : public SDAG::Closure {
      MPI_Comm nextInterComm;


      intercommCreatePhaseSelf_16_closure() {
        init();
      }
      intercommCreatePhaseSelf_16_closure(CkMigrateMessage*) {
        init();
      }
      MPI_Comm & getP0() { return nextInterComm;}
      void pup(PUP::er& __p) {
        __p | nextInterComm;
        packClosure(__p);
      }
      virtual ~intercommCreatePhaseSelf_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(intercommCreatePhaseSelf_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::intercommMergePhase1_17_closure : public SDAG::Closure {
      MPI_Comm nextIntraComm;


      intercommMergePhase1_17_closure() {
        init();
      }
      intercommMergePhase1_17_closure(CkMigrateMessage*) {
        init();
      }
      MPI_Comm & getP0() { return nextIntraComm;}
      void pup(PUP::er& __p) {
        __p | nextIntraComm;
        packClosure(__p);
      }
      virtual ~intercommMergePhase1_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(intercommMergePhase1_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::setRemoteProxy_18_closure : public SDAG::Closure {
      CProxy_ampi rproxy;


      setRemoteProxy_18_closure() {
        init();
      }
      setRemoteProxy_18_closure(CkMigrateMessage*) {
        init();
      }
      CProxy_ampi & getP0() { return rproxy;}
      void pup(PUP::er& __p) {
        __p | rproxy;
        packClosure(__p);
      }
      virtual ~setRemoteProxy_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(setRemoteProxy_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemotePut_19_closure : public SDAG::Closure {
      int orgtotalsize;
      char *orgaddr;
      int orgcnt;
      MPI_Datatype orgtype;
      MPI_Aint targdisp;
      int targcnt;
      MPI_Datatype targtype;
      int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemotePut_19_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemotePut_19_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return orgtotalsize;}
      char *& getP1() { return orgaddr;}
      int & getP2() { return orgcnt;}
      MPI_Datatype & getP3() { return orgtype;}
      MPI_Aint & getP4() { return targdisp;}
      int & getP5() { return targcnt;}
      MPI_Datatype & getP6() { return targtype;}
      int & getP7() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int orgtotalsize; implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr; 
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          orgaddr = (char *)(impl_buf+impl_off_orgaddr);
        }
      }
      virtual ~winRemotePut_19_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemotePut_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteGet_20_closure : public SDAG::Closure {
      int orgcnt;
      MPI_Datatype orgtype;
      MPI_Aint targdisp;
      int targcnt;
      MPI_Datatype targtype;
      int winIndex;


      winRemoteGet_20_closure() {
        init();
      }
      winRemoteGet_20_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return orgcnt;}
      MPI_Datatype & getP1() { return orgtype;}
      MPI_Aint & getP2() { return targdisp;}
      int & getP3() { return targcnt;}
      MPI_Datatype & getP4() { return targtype;}
      int & getP5() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
      }
      virtual ~winRemoteGet_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteGet_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteAccumulate_21_closure : public SDAG::Closure {
      int orgtotalsize;
      char *orgaddr;
      int orgcnt;
      MPI_Datatype orgtype;
      MPI_Aint targdisp;
      int targcnt;
      MPI_Datatype targtype;
      MPI_Op op;
      int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteAccumulate_21_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteAccumulate_21_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return orgtotalsize;}
      char *& getP1() { return orgaddr;}
      int & getP2() { return orgcnt;}
      MPI_Datatype & getP3() { return orgtype;}
      MPI_Aint & getP4() { return targdisp;}
      int & getP5() { return targcnt;}
      MPI_Datatype & getP6() { return targtype;}
      MPI_Op & getP7() { return op;}
      int & getP8() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgtotalsize;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | op;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int orgtotalsize; implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr; 
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  MPI_Op op; implP|op;
  int winIndex; implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          orgaddr = (char *)(impl_buf+impl_off_orgaddr);
        }
      }
      virtual ~winRemoteAccumulate_21_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteAccumulate_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteCompareAndSwap_22_closure : public SDAG::Closure {
      int size;
      char *sorgaddr;
      char *compaddr;
      MPI_Datatype type;
      MPI_Aint targdisp;
      int winIndex;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      winRemoteCompareAndSwap_22_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      winRemoteCompareAndSwap_22_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return size;}
      char *& getP1() { return sorgaddr;}
      char *& getP2() { return compaddr;}
      MPI_Datatype & getP3() { return type;}
      MPI_Aint & getP4() { return targdisp;}
      int & getP5() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | size;
        __p | type;
        __p | targdisp;
        __p | winIndex;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int size; implP|size;
  int impl_off_sorgaddr, impl_cnt_sorgaddr; 
  implP|impl_off_sorgaddr;
  implP|impl_cnt_sorgaddr;
  int impl_off_compaddr, impl_cnt_compaddr; 
  implP|impl_off_compaddr;
  implP|impl_cnt_compaddr;
  MPI_Datatype type; implP|type;
  MPI_Aint targdisp; implP|targdisp;
  int winIndex; implP|winIndex;
          impl_buf+=CK_ALIGN(implP.size(),16);
          sorgaddr = (char *)(impl_buf+impl_off_sorgaddr);
          compaddr = (char *)(impl_buf+impl_off_compaddr);
        }
      }
      virtual ~winRemoteCompareAndSwap_22_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(winRemoteCompareAndSwap_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteLock_23_closure : public SDAG::Closure {
      int lock_type;
      int winIndex;
      int requestRank;


      winRemoteLock_23_closure() {
        init();
      }
      winRemoteLock_23_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return lock_type;}
      int & getP1() { return winIndex;}
      int & getP2() { return requestRank;}
      void pup(PUP::er& __p) {
        __p | lock_type;
        __p | winIndex;
        __p | requestRank;
        packClosure(__p);
      }
      virtual ~winRemoteLock_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteLock_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteUnlock_24_closure : public SDAG::Closure {
      int winIndex;
      int requestRank;


      winRemoteUnlock_24_closure() {
        init();
      }
      winRemoteUnlock_24_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return winIndex;}
      int & getP1() { return requestRank;}
      void pup(PUP::er& __p) {
        __p | winIndex;
        __p | requestRank;
        packClosure(__p);
      }
      virtual ~winRemoteUnlock_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteUnlock_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::winRemoteIget_25_closure : public SDAG::Closure {
      MPI_Aint orgdisp;
      int orgcnt;
      MPI_Datatype orgtype;
      MPI_Aint targdisp;
      int targcnt;
      MPI_Datatype targtype;
      int winIndex;


      winRemoteIget_25_closure() {
        init();
      }
      winRemoteIget_25_closure(CkMigrateMessage*) {
        init();
      }
      MPI_Aint & getP0() { return orgdisp;}
      int & getP1() { return orgcnt;}
      MPI_Datatype & getP2() { return orgtype;}
      MPI_Aint & getP3() { return targdisp;}
      int & getP4() { return targcnt;}
      MPI_Datatype & getP5() { return targtype;}
      int & getP6() { return winIndex;}
      void pup(PUP::er& __p) {
        __p | orgdisp;
        __p | orgcnt;
        __p | orgtype;
        __p | targdisp;
        __p | targcnt;
        __p | targtype;
        __p | winIndex;
        packClosure(__p);
      }
      virtual ~winRemoteIget_25_closure() {
      }
      PUPable_decl(SINGLE_ARG(winRemoteIget_25_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampi::Alltoall_RemoteIget_26_closure : public SDAG::Closure {
      MPI_Aint disp;
      int cnt;
      MPI_Datatype type;
      int tag;


      Alltoall_RemoteIget_26_closure() {
        init();
      }
      Alltoall_RemoteIget_26_closure(CkMigrateMessage*) {
        init();
      }
      MPI_Aint & getP0() { return disp;}
      int & getP1() { return cnt;}
      MPI_Datatype & getP2() { return type;}
      int & getP3() { return tag;}
      void pup(PUP::er& __p) {
        __p | disp;
        __p | cnt;
        __p | type;
        __p | tag;
        packClosure(__p);
      }
      virtual ~Alltoall_RemoteIget_26_closure() {
      }
      PUPable_decl(SINGLE_ARG(Alltoall_RemoteIget_26_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ampiWorlds::add_2_closure : public SDAG::Closure {
      ampiCommStruct nextWorld;


      add_2_closure() {
        init();
      }
      add_2_closure(CkMigrateMessage*) {
        init();
      }
      ampiCommStruct & getP0() { return nextWorld;}
      void pup(PUP::er& __p) {
        __p | nextWorld;
        packClosure(__p);
      }
      virtual ~add_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(add_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message AmpiMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_AmpiMsg::operator new(size_t s){
  return AmpiMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_AmpiMsg::operator new(size_t s, int* sz){
  return AmpiMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_AmpiMsg::operator new(size_t s, int* sz,const int pb){
  return AmpiMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_AmpiMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return AmpiMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_AmpiMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return AmpiMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_AmpiMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_AmpiMsg::CMessage_AmpiMsg() {
AmpiMsg *newmsg = (AmpiMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_AmpiMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_AmpiMsg::pack(AmpiMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
AmpiMsg* CMessage_AmpiMsg::unpack(void* buf) {
  AmpiMsg *msg = (AmpiMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_AmpiMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array ampiParent: ArrayElement{
ampiParent(int universeNo, const CProxy_TCharm &threads_);
void ResumeThread();
void Checkpoint(int len, const char *dname);
void ExchangeProxy(const CProxy_ampi &impl_noname_0);
ampiParent(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ampiParent::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_ampiParent::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

void CProxySection_ampiParent::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
 */

void CProxyElement_ampiParent::insert(int universeNo, const CProxy_TCharm &threads_, int onPE, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: int universeNo, const CProxy_TCharm &threads_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ampiParent::idx_ampiParent_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeThread();
 */

void CProxyElement_ampiParent::ResumeThread(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ResumeThread_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(int len, const char *dname);
 */

void CProxyElement_ampiParent::Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int len, const char *dname
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dname, impl_cnt_dname;
  impl_off_dname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dname=sizeof(char)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dname,dname,impl_cnt_dname);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_Checkpoint_marshall3(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */

void CProxyElement_ampiParent::ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ExchangeProxy_marshall4(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
 */

CkArrayID CProxy_ampiParent::ckNew(int universeNo, const CProxy_TCharm &threads_, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int universeNo, const CProxy_TCharm &threads_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampiParent::idx_ampiParent_marshall1(), opts);
  return gId;
}

void CProxy_ampiParent::ckNew(int universeNo, const CProxy_TCharm &threads_, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int universeNo, const CProxy_TCharm &threads_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampiParent::idx_ampiParent_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_ampiParent::ckNew(int universeNo, const CProxy_TCharm &threads_, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int universeNo, const CProxy_TCharm &threads_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampiParent::idx_ampiParent_marshall1(), opts);
  return gId;
}

void CProxy_ampiParent::ckNew(int universeNo, const CProxy_TCharm &threads_, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int universeNo, const CProxy_TCharm &threads_
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|universeNo;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_TCharm &)threads_;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampiParent::idx_ampiParent_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_ampiParent::reg_ampiParent_marshall1() {
  int epidx = CkRegisterEp("ampiParent(int universeNo, const CProxy_TCharm &threads_)",
      _call_ampiParent_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ampiParent_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ampiParent_marshall1);

  return epidx;
}


void CkIndex_ampiParent::_call_ampiParent_marshall1(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int universeNo, const CProxy_TCharm &threads_*/
  PUP::fromMem implP(impl_buf);
  int universeNo; implP|universeNo;
  CProxy_TCharm threads_; implP|threads_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) ampiParent(universeNo, threads_);
}

int CkIndex_ampiParent::_callmarshall_ampiParent_marshall1(char* impl_buf, void* impl_obj_void) {
  ampiParent* impl_obj = static_cast< ampiParent *>(impl_obj_void);
  /*Unmarshall pup'd fields: int universeNo, const CProxy_TCharm &threads_*/
  PUP::fromMem implP(impl_buf);
  int universeNo; implP|universeNo;
  CProxy_TCharm threads_; implP|threads_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) ampiParent(universeNo, threads_);
  return implP.size();
}

void CkIndex_ampiParent::_marshallmessagepup_ampiParent_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int universeNo, const CProxy_TCharm &threads_*/
  PUP::fromMem implP(impl_buf);
  int universeNo; implP|universeNo;
  CProxy_TCharm threads_; implP|threads_;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("universeNo");
  implDestP|universeNo;
  if (implDestP.hasComments()) implDestP.comment("threads_");
  implDestP|threads_;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeThread();
 */

void CProxy_ampiParent::ResumeThread(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_ResumeThread_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampiParent::reg_ResumeThread_void() {
  int epidx = CkRegisterEp("ResumeThread()",
      _call_ResumeThread_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampiParent::_call_ResumeThread_void(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->ResumeThread();
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::ResumeThread_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(int len, const char *dname);
 */

void CProxy_ampiParent::Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int len, const char *dname
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dname, impl_cnt_dname;
  impl_off_dname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dname=sizeof(char)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dname,dname,impl_cnt_dname);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_Checkpoint_marshall3(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampiParent::reg_Checkpoint_marshall3() {
  int epidx = CkRegisterEp("Checkpoint(int len, const char *dname)",
      _call_Checkpoint_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Checkpoint_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Checkpoint_marshall3);

  return epidx;
}


void CkIndex_ampiParent::_call_Checkpoint_marshall3(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int len, const char *dname*/
  PUP::fromMem implP(impl_buf);
  int len; implP|len;
  int impl_off_dname, impl_cnt_dname; 
  implP|impl_off_dname;
  implP|impl_cnt_dname;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dname=(char *)(impl_buf+impl_off_dname);
  impl_obj->Checkpoint(len, dname);
}

int CkIndex_ampiParent::_callmarshall_Checkpoint_marshall3(char* impl_buf, void* impl_obj_void) {
  ampiParent* impl_obj = static_cast< ampiParent *>(impl_obj_void);
  /*Unmarshall pup'd fields: int len, const char *dname*/
  PUP::fromMem implP(impl_buf);
  int len; implP|len;
  int impl_off_dname, impl_cnt_dname; 
  implP|impl_off_dname;
  implP|impl_cnt_dname;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dname=(char *)(impl_buf+impl_off_dname);
  impl_obj->Checkpoint(len, dname);
  return implP.size();
}

void CkIndex_ampiParent::_marshallmessagepup_Checkpoint_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int len, const char *dname*/
  PUP::fromMem implP(impl_buf);
  int len; implP|len;
  int impl_off_dname, impl_cnt_dname; 
  implP|impl_off_dname;
  implP|impl_cnt_dname;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *dname=(char *)(impl_buf+impl_off_dname);
  if (implDestP.hasComments()) implDestP.comment("len");
  implDestP|len;
  if (implDestP.hasComments()) implDestP.comment("dname");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*dname))<impl_cnt_dname;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|dname[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::Checkpoint_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */

void CProxy_ampiParent::ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampiParent::idx_ExchangeProxy_marshall4(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampiParent::reg_ExchangeProxy_marshall4() {
  int epidx = CkRegisterEp("ExchangeProxy(const CProxy_ampi &impl_noname_0)",
      _call_ExchangeProxy_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ExchangeProxy_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ExchangeProxy_marshall4);

  return epidx;
}


void CkIndex_ampiParent::_call_ExchangeProxy_marshall4(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_ampi &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CProxy_ampi impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ExchangeProxy(impl_noname_0);
}

int CkIndex_ampiParent::_callmarshall_ExchangeProxy_marshall4(char* impl_buf, void* impl_obj_void) {
  ampiParent* impl_obj = static_cast< ampiParent *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CProxy_ampi &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CProxy_ampi impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ExchangeProxy(impl_noname_0);
  return implP.size();
}

void CkIndex_ampiParent::_marshallmessagepup_ExchangeProxy_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_ampi &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CProxy_ampi impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_ampiParent::ExchangeProxy_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_ampiParent::reg_ampiParent_CkMigrateMessage() {
  int epidx = CkRegisterEp("ampiParent(CkMigrateMessage* impl_msg)",
      _call_ampiParent_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampiParent::_call_ampiParent_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  ampiParent* impl_obj = static_cast<ampiParent *>(impl_obj_void);
  new (impl_obj) ampiParent((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(int universeNo, const CProxy_TCharm &threads_);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeThread();
 */

void CProxySection_ampiParent::ResumeThread(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ResumeThread_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Checkpoint(int len, const char *dname);
 */

void CProxySection_ampiParent::Checkpoint(int len, const char *dname, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int len, const char *dname
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dname, impl_cnt_dname;
  impl_off_dname=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_dname=sizeof(char)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|len;
    implP|impl_off_dname;
    implP|impl_cnt_dname;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dname,dname,impl_cnt_dname);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_Checkpoint_marshall3(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
 */

void CProxySection_ampiParent::ExchangeProxy(const CProxy_ampi &impl_noname_0, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampiParent::idx_ExchangeProxy_marshall4(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiParent(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ampiParent::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: ampiParent(int universeNo, const CProxy_TCharm &threads_);
  idx_ampiParent_marshall1();

  // REG: void ResumeThread();
  idx_ResumeThread_void();

  // REG: void Checkpoint(int len, const char *dname);
  idx_Checkpoint_marshall3();

  // REG: void ExchangeProxy(const CProxy_ampi &impl_noname_0);
  idx_ExchangeProxy_marshall4();

  // REG: ampiParent(CkMigrateMessage* impl_msg);
  idx_ampiParent_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ampiParent_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array ampi: ArrayElement{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ampi::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_ampi::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

void CProxySection_ampi::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi();
 */

void CProxyElement_ampi::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ampi::idx_ampi_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */

void CProxyElement_ampi::insert(const CkArrayID &parent_, const ampiCommStruct &s, int onPE, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ampi::idx_ampi_marshall2(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void allInitDone();
 */

void CProxyElement_ampi::allInitDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_allInitDone_void(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_allInitDone_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->allInitDone();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInitDoneFlag();
 */

void CProxyElement_ampi::setInitDoneFlag(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setInitDoneFlag_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblock();
 */

void CProxyElement_ampi::unblock(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_unblock_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ssend_ack(int impl_noname_1);
 */

void CProxyElement_ampi::ssend_ack(int impl_noname_1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_ssend_ack_marshall6(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(AmpiMsg* impl_msg);
 */

void CProxyElement_ampi::generic(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_generic_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierResult();
 */

void CProxyElement_ampi::barrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_barrierResult_void(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_barrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->barrierResult();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ibarrierResult();
 */

void CProxyElement_ampi::ibarrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_ibarrierResult_void(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_ibarrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->ibarrierResult();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rednResult(CkReductionMsg* impl_msg);
 */

void CProxyElement_ampi::rednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_rednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void irednResult(CkReductionMsg* impl_msg);
 */

void CProxyElement_ampi::irednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_irednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */

void CProxyElement_ampi::splitPhase1(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhase1_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */

void CProxyElement_ampi::splitPhaseInter(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhaseInter_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
 */

void CProxyElement_ampi::commCreatePhase1(const MPI_Comm &nextGroupComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextGroupComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextGroupComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextGroupComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_commCreatePhase1_marshall14(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_commCreatePhase1_marshall14(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const MPI_Comm &nextGroupComm*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  MPI_Comm nextGroupComm; implP|nextGroupComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->commCreatePhase1(nextGroupComm);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */

void CProxyElement_ampi::intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommCreatePhase1_marshall15(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_intercommCreatePhase1_marshall15(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  MPI_Comm nextInterComm; implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommCreatePhase1(nextInterComm);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
 */

void CProxyElement_ampi::intercommCreatePhaseSelf(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommCreatePhaseSelf_marshall16(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_intercommCreatePhaseSelf_marshall16(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  MPI_Comm nextInterComm; implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommCreatePhaseSelf(nextInterComm);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */

void CProxyElement_ampi::intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextIntraComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextIntraComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextIntraComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommMergePhase1_marshall17(),0+CK_MSG_EXPEDITED);
}

void CkIndex_ampi::_call_redn_wrapper_intercommMergePhase1_marshall17(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const MPI_Comm &nextIntraComm*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  MPI_Comm nextIntraComm; implP|nextIntraComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommMergePhase1(nextIntraComm);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */

void CProxyElement_ampi::setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &rproxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)rproxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)rproxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setRemoteProxy_marshall18(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

void CProxyElement_ampi::winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  impl_off_orgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_orgaddr=sizeof(char)*(orgtotalsize));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_orgaddr,orgaddr,impl_cnt_orgaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemotePut_marshall19());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

AmpiMsg* CProxyElement_ampi::winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    implP|winIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    implP|winIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  AmpiMsg* impl_msg_typed_ret = (AmpiMsg*)ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteGet_marshall20());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

void CProxyElement_ampi::winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_orgaddr, impl_cnt_orgaddr;
  impl_off_orgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_orgaddr=sizeof(char)*(orgtotalsize));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Op &)op;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|orgtotalsize;
    implP|impl_off_orgaddr;
    implP|impl_cnt_orgaddr;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Op &)op;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_orgaddr,orgaddr,impl_cnt_orgaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteAccumulate_marshall21());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

AmpiMsg* CProxyElement_ampi::winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sorgaddr, impl_cnt_sorgaddr;
  impl_off_sorgaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_sorgaddr=sizeof(char)*(size));
  int impl_off_compaddr, impl_cnt_compaddr;
  impl_off_compaddr=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_compaddr=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|impl_off_sorgaddr;
    implP|impl_cnt_sorgaddr;
    implP|impl_off_compaddr;
    implP|impl_cnt_compaddr;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)type;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|winIndex;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|impl_off_sorgaddr;
    implP|impl_cnt_sorgaddr;
    implP|impl_off_compaddr;
    implP|impl_cnt_compaddr;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)type;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|winIndex;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sorgaddr,sorgaddr,impl_cnt_sorgaddr);
  memcpy(impl_buf+impl_off_compaddr,compaddr,impl_cnt_compaddr);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  AmpiMsg* impl_msg_typed_ret = (AmpiMsg*)ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteCompareAndSwap_marshall22());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

void CProxyElement_ampi::winRemoteLock(int lock_type, int winIndex, int requestRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int lock_type, int winIndex, int requestRank
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|lock_type;
    implP|winIndex;
    implP|requestRank;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|lock_type;
    implP|winIndex;
    implP|requestRank;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteLock_marshall23());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

void CProxyElement_ampi::winRemoteUnlock(int winIndex, int requestRank, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int winIndex, int requestRank
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|winIndex;
    implP|requestRank;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|winIndex;
    implP|requestRank;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ampi::idx_winRemoteUnlock_marshall24());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

CkFutureID  CProxyElement_ampi::winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)orgdisp;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    implP|winIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)orgdisp;
    implP|orgcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)orgtype;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)targdisp;
    implP|targcnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)targtype;
    implP|winIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  CkFutureID f=CkCreateAttachedFutureSend(impl_amsg,CkIndex_ampi::idx_winRemoteIget_marshall25(),ckGetArrayID(),ckGetIndex(),&CProxyElement_ArrayBase::ckSendWrapper);
  return f;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
 */

CkFutureID  CProxyElement_ampi::Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)disp;
    implP|cnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)type;
    implP|tag;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Aint &)disp;
    implP|cnt;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Datatype &)type;
    implP|tag;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  CkFutureID f=CkCreateAttachedFutureSend(impl_amsg,CkIndex_ampi::idx_Alltoall_RemoteIget_marshall26(),ckGetArrayID(),ckGetIndex(),&CProxyElement_ArrayBase::ckSendWrapper);
  return f;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi();
 */

CkArrayID CProxy_ampi::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_void(), opts);
  return gId;
}

void CProxy_ampi::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_ampi::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_void(), opts);
  return gId;
}

void CProxy_ampi::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_ampi::reg_ampi_void() {
  int epidx = CkRegisterEp("ampi()",
      _call_ampi_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampi::_call_ampi_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ampi();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */

CkArrayID CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_marshall2(), opts);
  return gId;
}

void CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ampi::idx_ampi_marshall2(), opts);
  return gId;
}

void CProxy_ampi::ckNew(const CkArrayID &parent_, const ampiCommStruct &s, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &parent_, const ampiCommStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)parent_;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)s;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ampi::idx_ampi_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_ampi::reg_ampi_marshall2() {
  int epidx = CkRegisterEp("ampi(const CkArrayID &parent_, const ampiCommStruct &s)",
      _call_ampi_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ampi_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ampi_marshall2);

  return epidx;
}


void CkIndex_ampi::_call_ampi_marshall2(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkArrayID &parent_, const ampiCommStruct &s*/
  PUP::fromMem implP(impl_buf);
  CkArrayID parent_; implP|parent_;
  ampiCommStruct s; implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) ampi(parent_, s);
}

int CkIndex_ampi::_callmarshall_ampi_marshall2(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast< ampi *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkArrayID &parent_, const ampiCommStruct &s*/
  PUP::fromMem implP(impl_buf);
  CkArrayID parent_; implP|parent_;
  ampiCommStruct s; implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) ampi(parent_, s);
  return implP.size();
}

void CkIndex_ampi::_marshallmessagepup_ampi_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkArrayID &parent_, const ampiCommStruct &s*/
  PUP::fromMem implP(impl_buf);
  CkArrayID parent_; implP|parent_;
  ampiCommStruct s; implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("parent_");
  implDestP|parent_;
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void allInitDone();
 */

void CProxy_ampi::allInitDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_allInitDone_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_allInitDone_void() {
  int epidx = CkRegisterEp("allInitDone()",
      _call_allInitDone_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_allInitDone_void() {
  return CkRegisterEp("redn_wrapper_allInitDone(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_allInitDone_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_allInitDone_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->allInitDone();
}
PUPable_def(SINGLE_ARG(Closure_ampi::allInitDone_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInitDoneFlag();
 */

void CProxy_ampi::setInitDoneFlag(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_setInitDoneFlag_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_setInitDoneFlag_void() {
  int epidx = CkRegisterEp("setInitDoneFlag()",
      _call_setInitDoneFlag_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampi::_call_setInitDoneFlag_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->setInitDoneFlag();
}
PUPable_def(SINGLE_ARG(Closure_ampi::setInitDoneFlag_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblock();
 */

void CProxy_ampi::unblock(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_unblock_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_unblock_void() {
  int epidx = CkRegisterEp("unblock()",
      _call_unblock_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampi::_call_unblock_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->unblock();
}
PUPable_def(SINGLE_ARG(Closure_ampi::unblock_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ssend_ack(int impl_noname_1);
 */

void CProxy_ampi::ssend_ack(int impl_noname_1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_ssend_ack_marshall6(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_ssend_ack_marshall6() {
  int epidx = CkRegisterEp("ssend_ack(int impl_noname_1)",
      _call_ssend_ack_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ssend_ack_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ssend_ack_marshall6);

  return epidx;
}


void CkIndex_ampi::_call_ssend_ack_marshall6(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ssend_ack(impl_noname_1);
}

int CkIndex_ampi::_callmarshall_ssend_ack_marshall6(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast< ampi *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ssend_ack(impl_noname_1);
  return implP.size();
}

void CkIndex_ampi::_marshallmessagepup_ssend_ack_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_ampi::ssend_ack_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(AmpiMsg* impl_msg);
 */

void CProxy_ampi::generic(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_generic_AmpiMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_generic_AmpiMsg() {
  int epidx = CkRegisterEp("generic(AmpiMsg* impl_msg)",
      _call_generic_AmpiMsg, CMessage_AmpiMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)AmpiMsg::ckDebugPup);
  return epidx;
}


void CkIndex_ampi::_call_generic_AmpiMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  impl_obj->generic((AmpiMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierResult();
 */

void CProxy_ampi::barrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_barrierResult_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_barrierResult_void() {
  int epidx = CkRegisterEp("barrierResult()",
      _call_barrierResult_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_barrierResult_void() {
  return CkRegisterEp("redn_wrapper_barrierResult(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_barrierResult_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_barrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->barrierResult();
}
PUPable_def(SINGLE_ARG(Closure_ampi::barrierResult_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ibarrierResult();
 */

void CProxy_ampi::ibarrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_ibarrierResult_void(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_ibarrierResult_void() {
  int epidx = CkRegisterEp("ibarrierResult()",
      _call_ibarrierResult_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_ibarrierResult_void() {
  return CkRegisterEp("redn_wrapper_ibarrierResult(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_ibarrierResult_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_ibarrierResult_void(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->ibarrierResult();
}
PUPable_def(SINGLE_ARG(Closure_ampi::ibarrierResult_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rednResult(CkReductionMsg* impl_msg);
 */

void CProxy_ampi::rednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_rednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_rednResult_CkReductionMsg() {
  int epidx = CkRegisterEp("rednResult(CkReductionMsg* impl_msg)",
      _call_rednResult_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_ampi::_call_rednResult_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  impl_obj->rednResult((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void irednResult(CkReductionMsg* impl_msg);
 */

void CProxy_ampi::irednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_irednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_irednResult_CkReductionMsg() {
  int epidx = CkRegisterEp("irednResult(CkReductionMsg* impl_msg)",
      _call_irednResult_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_ampi::_call_irednResult_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  impl_obj->irednResult((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */

void CProxy_ampi::splitPhase1(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_splitPhase1_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_splitPhase1_CkReductionMsg() {
  int epidx = CkRegisterEp("splitPhase1(CkReductionMsg* impl_msg)",
      _call_splitPhase1_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_ampi::_call_splitPhase1_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_splitPhase1_CkReductionMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_ampi::_callthr_splitPhase1_CkReductionMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  ampi *impl_obj = (ampi *) impl_arg->obj;
  delete impl_arg;
  impl_obj->splitPhase1((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */

void CProxy_ampi::splitPhaseInter(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_splitPhaseInter_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_splitPhaseInter_CkReductionMsg() {
  int epidx = CkRegisterEp("splitPhaseInter(CkReductionMsg* impl_msg)",
      _call_splitPhaseInter_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_ampi::_call_splitPhaseInter_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_splitPhaseInter_CkReductionMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_ampi::_callthr_splitPhaseInter_CkReductionMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  ampi *impl_obj = (ampi *) impl_arg->obj;
  delete impl_arg;
  impl_obj->splitPhaseInter((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
 */

void CProxy_ampi::commCreatePhase1(const MPI_Comm &nextGroupComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextGroupComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextGroupComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextGroupComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_commCreatePhase1_marshall14(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_commCreatePhase1_marshall14() {
  int epidx = CkRegisterEp("commCreatePhase1(const MPI_Comm &nextGroupComm)",
      _call_commCreatePhase1_marshall14, CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_commCreatePhase1_marshall14);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_commCreatePhase1_marshall14() {
  return CkRegisterEp("redn_wrapper_commCreatePhase1(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_commCreatePhase1_marshall14, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_commCreatePhase1_marshall14(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_commCreatePhase1_marshall14, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_ampi::_callthr_commCreatePhase1_marshall14(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  ampi *impl_obj = (ampi *) impl_arg->obj;
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextGroupComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextGroupComm; implP|nextGroupComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->commCreatePhase1(nextGroupComm);
  delete impl_msg_typed;
}

void CkIndex_ampi::_marshallmessagepup_commCreatePhase1_marshall14(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextGroupComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextGroupComm; implP|nextGroupComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextGroupComm");
  implDestP|nextGroupComm;
}
PUPable_def(SINGLE_ARG(Closure_ampi::commCreatePhase1_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */

void CProxy_ampi::intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_intercommCreatePhase1_marshall15(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_intercommCreatePhase1_marshall15() {
  int epidx = CkRegisterEp("intercommCreatePhase1(const MPI_Comm &nextInterComm)",
      _call_intercommCreatePhase1_marshall15, CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_intercommCreatePhase1_marshall15);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_intercommCreatePhase1_marshall15() {
  return CkRegisterEp("redn_wrapper_intercommCreatePhase1(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_intercommCreatePhase1_marshall15, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_intercommCreatePhase1_marshall15(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_intercommCreatePhase1_marshall15, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_ampi::_callthr_intercommCreatePhase1_marshall15(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  ampi *impl_obj = (ampi *) impl_arg->obj;
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextInterComm; implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommCreatePhase1(nextInterComm);
  delete impl_msg_typed;
}

void CkIndex_ampi::_marshallmessagepup_intercommCreatePhase1_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextInterComm; implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextInterComm");
  implDestP|nextInterComm;
}
PUPable_def(SINGLE_ARG(Closure_ampi::intercommCreatePhase1_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
 */

void CProxy_ampi::intercommCreatePhaseSelf(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_intercommCreatePhaseSelf_marshall16(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_intercommCreatePhaseSelf_marshall16() {
  int epidx = CkRegisterEp("intercommCreatePhaseSelf(const MPI_Comm &nextInterComm)",
      _call_intercommCreatePhaseSelf_marshall16, CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_intercommCreatePhaseSelf_marshall16);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_intercommCreatePhaseSelf_marshall16() {
  return CkRegisterEp("redn_wrapper_intercommCreatePhaseSelf(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_intercommCreatePhaseSelf_marshall16, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_intercommCreatePhaseSelf_marshall16(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_intercommCreatePhaseSelf_marshall16, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_ampi::_callthr_intercommCreatePhaseSelf_marshall16(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  ampi *impl_obj = (ampi *) impl_arg->obj;
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextInterComm; implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommCreatePhaseSelf(nextInterComm);
  delete impl_msg_typed;
}

void CkIndex_ampi::_marshallmessagepup_intercommCreatePhaseSelf_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextInterComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextInterComm; implP|nextInterComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextInterComm");
  implDestP|nextInterComm;
}
PUPable_def(SINGLE_ARG(Closure_ampi::intercommCreatePhaseSelf_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */

void CProxy_ampi::intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextIntraComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextIntraComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextIntraComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_intercommMergePhase1_marshall17(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_intercommMergePhase1_marshall17() {
  int epidx = CkRegisterEp("intercommMergePhase1(const MPI_Comm &nextIntraComm)",
      _call_intercommMergePhase1_marshall17, CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_intercommMergePhase1_marshall17);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_ampi::reg_redn_wrapper_intercommMergePhase1_marshall17() {
  return CkRegisterEp("redn_wrapper_intercommMergePhase1(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_intercommMergePhase1_marshall17, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_ampi::_call_intercommMergePhase1_marshall17(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_intercommMergePhase1_marshall17, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_ampi::_callthr_intercommMergePhase1_marshall17(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  ampi *impl_obj = (ampi *) impl_arg->obj;
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextIntraComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextIntraComm; implP|nextIntraComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->intercommMergePhase1(nextIntraComm);
  delete impl_msg_typed;
}

void CkIndex_ampi::_marshallmessagepup_intercommMergePhase1_marshall17(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Comm &nextIntraComm*/
  PUP::fromMem implP(impl_buf);
  MPI_Comm nextIntraComm; implP|nextIntraComm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextIntraComm");
  implDestP|nextIntraComm;
}
PUPable_def(SINGLE_ARG(Closure_ampi::intercommMergePhase1_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */

void CProxy_ampi::setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &rproxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)rproxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)rproxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ampi::idx_setRemoteProxy_marshall18(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampi::reg_setRemoteProxy_marshall18() {
  int epidx = CkRegisterEp("setRemoteProxy(const CProxy_ampi &rproxy)",
      _call_setRemoteProxy_marshall18, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setRemoteProxy_marshall18);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setRemoteProxy_marshall18);

  return epidx;
}


void CkIndex_ampi::_call_setRemoteProxy_marshall18(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_ampi &rproxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_ampi rproxy; implP|rproxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setRemoteProxy(rproxy);
}

int CkIndex_ampi::_callmarshall_setRemoteProxy_marshall18(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast< ampi *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CProxy_ampi &rproxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_ampi rproxy; implP|rproxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setRemoteProxy(rproxy);
  return implP.size();
}

void CkIndex_ampi::_marshallmessagepup_setRemoteProxy_marshall18(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_ampi &rproxy*/
  PUP::fromMem implP(impl_buf);
  CProxy_ampi rproxy; implP|rproxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("rproxy");
  implDestP|rproxy;
}
PUPable_def(SINGLE_ARG(Closure_ampi::setRemoteProxy_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemotePut_marshall19() {
  int epidx = CkRegisterEp("winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      _call_winRemotePut_marshall19, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemotePut_marshall19);

  return epidx;
}


void CkIndex_ampi::_call_winRemotePut_marshall19(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int orgtotalsize; implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr; 
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemotePut(orgtotalsize, orgaddr, orgcnt, orgtype, targdisp, targcnt, targtype, winIndex);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_ampi::_marshallmessagepup_winRemotePut_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int orgtotalsize; implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr; 
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*orgaddr))<impl_cnt_orgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|orgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemotePut_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemoteGet_marshall20() {
  int epidx = CkRegisterEp("winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      _call_winRemoteGet_marshall20, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteGet_marshall20);

  return epidx;
}


void CkIndex_ampi::_call_winRemoteGet_marshall20(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteGet(orgcnt, orgtype, targdisp, targcnt, targtype, winIndex);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_ampi::_marshallmessagepup_winRemoteGet_marshall20(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteGet_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemoteAccumulate_marshall21() {
  int epidx = CkRegisterEp("winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex)",
      _call_winRemoteAccumulate_marshall21, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteAccumulate_marshall21);

  return epidx;
}


void CkIndex_ampi::_call_winRemoteAccumulate_marshall21(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int orgtotalsize; implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr; 
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  MPI_Op op; implP|op;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteAccumulate(orgtotalsize, orgaddr, orgcnt, orgtype, targdisp, targcnt, targtype, op, winIndex);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_ampi::_marshallmessagepup_winRemoteAccumulate_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int orgtotalsize; implP|orgtotalsize;
  int impl_off_orgaddr, impl_cnt_orgaddr; 
  implP|impl_off_orgaddr;
  implP|impl_cnt_orgaddr;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  MPI_Op op; implP|op;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *orgaddr=(char *)(impl_buf+impl_off_orgaddr);
  if (implDestP.hasComments()) implDestP.comment("orgtotalsize");
  implDestP|orgtotalsize;
  if (implDestP.hasComments()) implDestP.comment("orgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*orgaddr))<impl_cnt_orgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|orgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("op");
  implDestP|op;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteAccumulate_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemoteCompareAndSwap_marshall22() {
  int epidx = CkRegisterEp("winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex)",
      _call_winRemoteCompareAndSwap_marshall22, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteCompareAndSwap_marshall22);

  return epidx;
}


void CkIndex_ampi::_call_winRemoteCompareAndSwap_marshall22(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int size; implP|size;
  int impl_off_sorgaddr, impl_cnt_sorgaddr; 
  implP|impl_off_sorgaddr;
  implP|impl_cnt_sorgaddr;
  int impl_off_compaddr, impl_cnt_compaddr; 
  implP|impl_off_compaddr;
  implP|impl_cnt_compaddr;
  MPI_Datatype type; implP|type;
  MPI_Aint targdisp; implP|targdisp;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *sorgaddr=(char *)(impl_buf+impl_off_sorgaddr);
  char *compaddr=(char *)(impl_buf+impl_off_compaddr);
  void *impl_retMsg=(void *)   impl_obj->winRemoteCompareAndSwap(size, sorgaddr, compaddr, type, targdisp, winIndex);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_ampi::_marshallmessagepup_winRemoteCompareAndSwap_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex*/
  PUP::fromMem implP(impl_buf);
  int size; implP|size;
  int impl_off_sorgaddr, impl_cnt_sorgaddr; 
  implP|impl_off_sorgaddr;
  implP|impl_cnt_sorgaddr;
  int impl_off_compaddr, impl_cnt_compaddr; 
  implP|impl_off_compaddr;
  implP|impl_cnt_compaddr;
  MPI_Datatype type; implP|type;
  MPI_Aint targdisp; implP|targdisp;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *sorgaddr=(char *)(impl_buf+impl_off_sorgaddr);
  char *compaddr=(char *)(impl_buf+impl_off_compaddr);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("sorgaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*sorgaddr))<impl_cnt_sorgaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|sorgaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("compaddr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*compaddr))<impl_cnt_compaddr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|compaddr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("type");
  implDestP|type;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteCompareAndSwap_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemoteLock_marshall23() {
  int epidx = CkRegisterEp("winRemoteLock(int lock_type, int winIndex, int requestRank)",
      _call_winRemoteLock_marshall23, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteLock_marshall23);

  return epidx;
}


void CkIndex_ampi::_call_winRemoteLock_marshall23(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int lock_type, int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  int lock_type; implP|lock_type;
  int winIndex; implP|winIndex;
  int requestRank; implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteLock(lock_type, winIndex, requestRank);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_ampi::_marshallmessagepup_winRemoteLock_marshall23(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int lock_type, int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  int lock_type; implP|lock_type;
  int winIndex; implP|winIndex;
  int requestRank; implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("lock_type");
  implDestP|lock_type;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
  if (implDestP.hasComments()) implDestP.comment("requestRank");
  implDestP|requestRank;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteLock_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemoteUnlock_marshall24() {
  int epidx = CkRegisterEp("winRemoteUnlock(int winIndex, int requestRank)",
      _call_winRemoteUnlock_marshall24, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteUnlock_marshall24);

  return epidx;
}


void CkIndex_ampi::_call_winRemoteUnlock_marshall24(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  int winIndex; implP|winIndex;
  int requestRank; implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->winRemoteUnlock(winIndex, requestRank);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_ampi::_marshallmessagepup_winRemoteUnlock_marshall24(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int winIndex, int requestRank*/
  PUP::fromMem implP(impl_buf);
  int winIndex; implP|winIndex;
  int requestRank; implP|requestRank;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
  if (implDestP.hasComments()) implDestP.comment("requestRank");
  implDestP|requestRank;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteUnlock_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */

// Entry point registration function

int CkIndex_ampi::reg_winRemoteIget_marshall25() {
  int epidx = CkRegisterEp("winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex)",
      _call_winRemoteIget_marshall25, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_winRemoteIget_marshall25);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_winRemoteIget_marshall25);

  return epidx;
}


void CkIndex_ampi::_call_winRemoteIget_marshall25(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  MPI_Aint orgdisp; implP|orgdisp;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteIget(orgdisp, orgcnt, orgtype, targdisp, targcnt, targtype, winIndex);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

int CkIndex_ampi::_callmarshall_winRemoteIget_marshall25(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast< ampi *>(impl_obj_void);
  /*Unmarshall pup'd fields: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  MPI_Aint orgdisp; implP|orgdisp;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->winRemoteIget(orgdisp, orgcnt, orgtype, targdisp, targcnt, targtype, winIndex);
  return implP.size();
}

void CkIndex_ampi::_marshallmessagepup_winRemoteIget_marshall25(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex*/
  PUP::fromMem implP(impl_buf);
  MPI_Aint orgdisp; implP|orgdisp;
  int orgcnt; implP|orgcnt;
  MPI_Datatype orgtype; implP|orgtype;
  MPI_Aint targdisp; implP|targdisp;
  int targcnt; implP|targcnt;
  MPI_Datatype targtype; implP|targtype;
  int winIndex; implP|winIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("orgdisp");
  implDestP|orgdisp;
  if (implDestP.hasComments()) implDestP.comment("orgcnt");
  implDestP|orgcnt;
  if (implDestP.hasComments()) implDestP.comment("orgtype");
  implDestP|orgtype;
  if (implDestP.hasComments()) implDestP.comment("targdisp");
  implDestP|targdisp;
  if (implDestP.hasComments()) implDestP.comment("targcnt");
  implDestP|targcnt;
  if (implDestP.hasComments()) implDestP.comment("targtype");
  implDestP|targtype;
  if (implDestP.hasComments()) implDestP.comment("winIndex");
  implDestP|winIndex;
}
PUPable_def(SINGLE_ARG(Closure_ampi::winRemoteIget_25_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
 */

// Entry point registration function

int CkIndex_ampi::reg_Alltoall_RemoteIget_marshall26() {
  int epidx = CkRegisterEp("Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag)",
      _call_Alltoall_RemoteIget_marshall26, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Alltoall_RemoteIget_marshall26);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Alltoall_RemoteIget_marshall26);

  return epidx;
}


void CkIndex_ampi::_call_Alltoall_RemoteIget_marshall26(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag*/
  PUP::fromMem implP(impl_buf);
  MPI_Aint disp; implP|disp;
  int cnt; implP|cnt;
  MPI_Datatype type; implP|type;
  int tag; implP|tag;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->Alltoall_RemoteIget(disp, cnt, type, tag);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

int CkIndex_ampi::_callmarshall_Alltoall_RemoteIget_marshall26(char* impl_buf, void* impl_obj_void) {
  ampi* impl_obj = static_cast< ampi *>(impl_obj_void);
  /*Unmarshall pup'd fields: const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag*/
  PUP::fromMem implP(impl_buf);
  MPI_Aint disp; implP|disp;
  int cnt; implP|cnt;
  MPI_Datatype type; implP|type;
  int tag; implP|tag;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->Alltoall_RemoteIget(disp, cnt, type, tag);
  return implP.size();
}

void CkIndex_ampi::_marshallmessagepup_Alltoall_RemoteIget_marshall26(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag*/
  PUP::fromMem implP(impl_buf);
  MPI_Aint disp; implP|disp;
  int cnt; implP|cnt;
  MPI_Datatype type; implP|type;
  int tag; implP|tag;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("disp");
  implDestP|disp;
  if (implDestP.hasComments()) implDestP.comment("cnt");
  implDestP|cnt;
  if (implDestP.hasComments()) implDestP.comment("type");
  implDestP|type;
  if (implDestP.hasComments()) implDestP.comment("tag");
  implDestP|tag;
}
PUPable_def(SINGLE_ARG(Closure_ampi::Alltoall_RemoteIget_26_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_ampi::reg_ampi_CkMigrateMessage() {
  int epidx = CkRegisterEp("ampi(CkMigrateMessage* impl_msg)",
      _call_ampi_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampi::_call_ampi_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  ampi* impl_obj = static_cast<ampi *>(impl_obj_void);
  new (impl_obj) ampi((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void allInitDone();
 */

void CProxySection_ampi::allInitDone(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_allInitDone_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInitDoneFlag();
 */

void CProxySection_ampi::setInitDoneFlag(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setInitDoneFlag_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unblock();
 */

void CProxySection_ampi::unblock(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_unblock_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ssend_ack(int impl_noname_1);
 */

void CProxySection_ampi::ssend_ack(int impl_noname_1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_ssend_ack_marshall6(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(AmpiMsg* impl_msg);
 */

void CProxySection_ampi::generic(AmpiMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_generic_AmpiMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrierResult();
 */

void CProxySection_ampi::barrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_barrierResult_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ibarrierResult();
 */

void CProxySection_ampi::ibarrierResult(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_ibarrierResult_void(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rednResult(CkReductionMsg* impl_msg);
 */

void CProxySection_ampi::rednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_rednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void irednResult(CkReductionMsg* impl_msg);
 */

void CProxySection_ampi::irednResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_irednResult_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhase1(CkReductionMsg* impl_msg);
 */

void CProxySection_ampi::splitPhase1(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhase1_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
 */

void CProxySection_ampi::splitPhaseInter(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_splitPhaseInter_CkReductionMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
 */

void CProxySection_ampi::commCreatePhase1(const MPI_Comm &nextGroupComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextGroupComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextGroupComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextGroupComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_commCreatePhase1_marshall14(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
 */

void CProxySection_ampi::intercommCreatePhase1(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommCreatePhase1_marshall15(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
 */

void CProxySection_ampi::intercommCreatePhaseSelf(const MPI_Comm &nextInterComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextInterComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextInterComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommCreatePhaseSelf_marshall16(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
 */

void CProxySection_ampi::intercommMergePhase1(const MPI_Comm &nextIntraComm, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MPI_Comm &nextIntraComm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextIntraComm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MPI_Comm &)nextIntraComm;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_intercommMergePhase1_marshall17(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setRemoteProxy(const CProxy_ampi &rproxy);
 */

void CProxySection_ampi::setRemoteProxy(const CProxy_ampi &rproxy, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_ampi &rproxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)rproxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_ampi &)rproxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ampi::idx_setRemoteProxy_marshall18(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void winRemoteUnlock(int winIndex, int requestRank);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampi(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ampi::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: ampi();
  idx_ampi_void();
  CkRegisterDefaultCtor(__idx, idx_ampi_void());

  // REG: ampi(const CkArrayID &parent_, const ampiCommStruct &s);
  idx_ampi_marshall2();

  // REG: void allInitDone();
  idx_allInitDone_void();
  idx_redn_wrapper_allInitDone_void();

  // REG: void setInitDoneFlag();
  idx_setInitDoneFlag_void();

  // REG: void unblock();
  idx_unblock_void();

  // REG: void ssend_ack(int impl_noname_1);
  idx_ssend_ack_marshall6();

  // REG: void generic(AmpiMsg* impl_msg);
  idx_generic_AmpiMsg();

  // REG: void barrierResult();
  idx_barrierResult_void();
  idx_redn_wrapper_barrierResult_void();

  // REG: void ibarrierResult();
  idx_ibarrierResult_void();
  idx_redn_wrapper_ibarrierResult_void();

  // REG: void rednResult(CkReductionMsg* impl_msg);
  idx_rednResult_CkReductionMsg();

  // REG: void irednResult(CkReductionMsg* impl_msg);
  idx_irednResult_CkReductionMsg();

  // REG: threaded void splitPhase1(CkReductionMsg* impl_msg);
  idx_splitPhase1_CkReductionMsg();

  // REG: threaded void splitPhaseInter(CkReductionMsg* impl_msg);
  idx_splitPhaseInter_CkReductionMsg();

  // REG: threaded void commCreatePhase1(const MPI_Comm &nextGroupComm);
  idx_commCreatePhase1_marshall14();
  idx_redn_wrapper_commCreatePhase1_marshall14();

  // REG: threaded void intercommCreatePhase1(const MPI_Comm &nextInterComm);
  idx_intercommCreatePhase1_marshall15();
  idx_redn_wrapper_intercommCreatePhase1_marshall15();

  // REG: threaded void intercommCreatePhaseSelf(const MPI_Comm &nextInterComm);
  idx_intercommCreatePhaseSelf_marshall16();
  idx_redn_wrapper_intercommCreatePhaseSelf_marshall16();

  // REG: threaded void intercommMergePhase1(const MPI_Comm &nextIntraComm);
  idx_intercommMergePhase1_marshall17();
  idx_redn_wrapper_intercommMergePhase1_marshall17();

  // REG: void setRemoteProxy(const CProxy_ampi &rproxy);
  idx_setRemoteProxy_marshall18();

  // REG: sync void winRemotePut(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemotePut_marshall19();

  // REG: sync AmpiMsg* winRemoteGet(int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemoteGet_marshall20();

  // REG: sync void winRemoteAccumulate(int orgtotalsize, const char *orgaddr, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, const MPI_Op &op, int winIndex);
  idx_winRemoteAccumulate_marshall21();

  // REG: sync AmpiMsg* winRemoteCompareAndSwap(int size, const char *sorgaddr, const char *compaddr, const MPI_Datatype &type, const MPI_Aint &targdisp, int winIndex);
  idx_winRemoteCompareAndSwap_marshall22();

  // REG: sync void winRemoteLock(int lock_type, int winIndex, int requestRank);
  idx_winRemoteLock_marshall23();

  // REG: sync void winRemoteUnlock(int winIndex, int requestRank);
  idx_winRemoteUnlock_marshall24();

  // REG: AmpiMsg* winRemoteIget(const MPI_Aint &orgdisp, int orgcnt, const MPI_Datatype &orgtype, const MPI_Aint &targdisp, int targcnt, const MPI_Datatype &targtype, int winIndex);
  idx_winRemoteIget_marshall25();

  // REG: AmpiMsg* Alltoall_RemoteIget(const MPI_Aint &disp, int cnt, const MPI_Datatype &type, int tag);
  idx_Alltoall_RemoteIget_marshall26();

  // REG: ampi(CkMigrateMessage* impl_msg);
  idx_ampi_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ampi_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ampiWorlds: IrrGroup{
ampiWorlds(const ampiCommStruct &nextWorld);
void add(const ampiCommStruct &nextWorld);
ampiWorlds(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ampiWorlds::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiWorlds(const ampiCommStruct &nextWorld);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void add(const ampiCommStruct &nextWorld);
 */

void CProxyElement_ampiWorlds::add(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiWorlds(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiWorlds(const ampiCommStruct &nextWorld);
 */

CkGroupID CProxy_ampiWorlds::ckNew(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  CkGroupID gId = CkCreateGroup(CkIndex_ampiWorlds::__idx, CkIndex_ampiWorlds::idx_ampiWorlds_marshall1(), impl_msg);
  return gId;
}

  CProxy_ampiWorlds::CProxy_ampiWorlds(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateGroup(CkIndex_ampiWorlds::__idx, CkIndex_ampiWorlds::idx_ampiWorlds_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_ampiWorlds::reg_ampiWorlds_marshall1() {
  int epidx = CkRegisterEp("ampiWorlds(const ampiCommStruct &nextWorld)",
      _call_ampiWorlds_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ampiWorlds_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ampiWorlds_marshall1);

  return epidx;
}


void CkIndex_ampiWorlds::_call_ampiWorlds_marshall1(void* impl_msg, void* impl_obj_void)
{
  ampiWorlds* impl_obj = static_cast<ampiWorlds *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const ampiCommStruct &nextWorld*/
  PUP::fromMem implP(impl_buf);
  ampiCommStruct nextWorld; implP|nextWorld;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) ampiWorlds(nextWorld);
}

int CkIndex_ampiWorlds::_callmarshall_ampiWorlds_marshall1(char* impl_buf, void* impl_obj_void) {
  ampiWorlds* impl_obj = static_cast< ampiWorlds *>(impl_obj_void);
  /*Unmarshall pup'd fields: const ampiCommStruct &nextWorld*/
  PUP::fromMem implP(impl_buf);
  ampiCommStruct nextWorld; implP|nextWorld;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) ampiWorlds(nextWorld);
  return implP.size();
}

void CkIndex_ampiWorlds::_marshallmessagepup_ampiWorlds_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const ampiCommStruct &nextWorld*/
  PUP::fromMem implP(impl_buf);
  ampiCommStruct nextWorld; implP|nextWorld;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextWorld");
  implDestP|nextWorld;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void add(const ampiCommStruct &nextWorld);
 */

void CProxy_ampiWorlds::add(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

void CProxy_ampiWorlds::add(const ampiCommStruct &nextWorld, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  CkSendMsgBranchMulti(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}

void CProxy_ampiWorlds::add(const ampiCommStruct &nextWorld, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  CkSendMsgBranchGroup(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_ampiWorlds::reg_add_marshall2() {
  int epidx = CkRegisterEp("add(const ampiCommStruct &nextWorld)",
      _call_add_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_add_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_add_marshall2);

  return epidx;
}


void CkIndex_ampiWorlds::_call_add_marshall2(void* impl_msg, void* impl_obj_void)
{
  ampiWorlds* impl_obj = static_cast<ampiWorlds *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const ampiCommStruct &nextWorld*/
  PUP::fromMem implP(impl_buf);
  ampiCommStruct nextWorld; implP|nextWorld;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->add(nextWorld);
}

int CkIndex_ampiWorlds::_callmarshall_add_marshall2(char* impl_buf, void* impl_obj_void) {
  ampiWorlds* impl_obj = static_cast< ampiWorlds *>(impl_obj_void);
  /*Unmarshall pup'd fields: const ampiCommStruct &nextWorld*/
  PUP::fromMem implP(impl_buf);
  ampiCommStruct nextWorld; implP|nextWorld;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->add(nextWorld);
  return implP.size();
}

void CkIndex_ampiWorlds::_marshallmessagepup_add_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const ampiCommStruct &nextWorld*/
  PUP::fromMem implP(impl_buf);
  ampiCommStruct nextWorld; implP|nextWorld;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nextWorld");
  implDestP|nextWorld;
}
PUPable_def(SINGLE_ARG(Closure_ampiWorlds::add_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiWorlds(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_ampiWorlds::reg_ampiWorlds_CkMigrateMessage() {
  int epidx = CkRegisterEp("ampiWorlds(CkMigrateMessage* impl_msg)",
      _call_ampiWorlds_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_ampiWorlds::_call_ampiWorlds_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  ampiWorlds* impl_obj = static_cast<ampiWorlds *>(impl_obj_void);
  new (impl_obj) ampiWorlds((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiWorlds(const ampiCommStruct &nextWorld);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void add(const ampiCommStruct &nextWorld);
 */

void CProxySection_ampiWorlds::add(const ampiCommStruct &nextWorld, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ampiCommStruct &nextWorld
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(ampiCommStruct &)nextWorld;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ampiWorlds::idx_add_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ampiWorlds(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ampiWorlds::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ampiWorlds::isIrreducible());
  // REG: ampiWorlds(const ampiCommStruct &nextWorld);
  idx_ampiWorlds_marshall1();

  // REG: void add(const ampiCommStruct &nextWorld);
  idx_add_marshall2();

  // REG: ampiWorlds(CkMigrateMessage* impl_msg);
  idx_ampiWorlds_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ampiWorlds_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerampi(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message AmpiMsg{
char data[];
}
;
*/
CMessage_AmpiMsg::__register("AmpiMsg", sizeof(AmpiMsg),(CkPackFnPtr) AmpiMsg::pack,(CkUnpackFnPtr) AmpiMsg::unpack);

  _registerInitCall(ampiNodeInit,1);

  _registerInitCall(ampiProcInit,0);

/* REG: array ampiParent: ArrayElement{
ampiParent(int universeNo, const CProxy_TCharm &threads_);
void ResumeThread();
void Checkpoint(int len, const char *dname);
void ExchangeProxy(const CProxy_ampi &impl_noname_0);
ampiParent(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ampiParent::__register("ampiParent", sizeof(ampiParent));

/* REG: array ampi: ArrayElement{
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
  CkIndex_ampi::__register("ampi", sizeof(ampi));

/* REG: group ampiWorlds: IrrGroup{
ampiWorlds(const ampiCommStruct &nextWorld);
void add(const ampiCommStruct &nextWorld);
ampiWorlds(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ampiWorlds::__register("ampiWorlds", sizeof(ampiWorlds));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ampiParent::virtual_pup(PUP::er &p) {
    recursive_pup<ampiParent >(dynamic_cast<ampiParent* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ampi::virtual_pup(PUP::er &p) {
    recursive_pup<ampi >(dynamic_cast<ampi* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ampiWorlds::virtual_pup(PUP::er &p) {
    recursive_pup<ampiWorlds >(dynamic_cast<ampiWorlds* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
