
/* DEFS: message CkMarshallMsg{
char msgBuf[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkMarshallMsg::operator new(size_t s){
  return CkMarshallMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CkMarshallMsg::operator new(size_t s, int* sz){
  return CkMarshallMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CkMarshallMsg::operator new(size_t s, int* sz,const int pb){
  return CkMarshallMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CkMarshallMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkMarshallMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_CkMarshallMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkMarshallMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_CkMarshallMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_CkMarshallMsg::CMessage_CkMarshallMsg() {
CkMarshallMsg *newmsg = (CkMarshallMsg *)this;
  newmsg->msgBuf = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkMarshallMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkMarshallMsg::pack(CkMarshallMsg *msg) {
  msg->msgBuf = (char *) ((char *)msg->msgBuf - (char *)msg);
  return (void *) msg;
}
CkMarshallMsg* CMessage_CkMarshallMsg::unpack(void* buf) {
  CkMarshallMsg *msg = (CkMarshallMsg *) buf;
  msg->msgBuf = (char *) ((size_t)msg->msgBuf + (char *)msg);
  return msg;
}
int CMessage_CkMarshallMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkMarshall(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CkMarshallMsg{
char msgBuf[];
}
;
*/
CMessage_CkMarshallMsg::__register("CkMarshallMsg", sizeof(CkMarshallMsg),(CkPackFnPtr) CkMarshallMsg::pack,(CkUnpackFnPtr) CkMarshallMsg::unpack);

}
#endif /* CK_TEMPLATES_ONLY */
