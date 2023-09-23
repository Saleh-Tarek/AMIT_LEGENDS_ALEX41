/**
 * 
 * 
 * */
#ifndef CALLBACKFUN_H_
#define CALLBACKFUN_H_

void MyPrintf();

void CallBackFun(void (*callback)());
/**
 *  Global pointer to function of type void. 
 **/
void (*PtrFun)();



#endif /* End of Header file guard. */