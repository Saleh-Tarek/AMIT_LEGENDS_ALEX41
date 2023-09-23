/**
 * 
 * 
 * */
#ifndef DEBUG_H_INCLUDE
#define DEBUG_H_INCLUDE


#define GOT_HERE		printf("reached %i in %s\n",--LINE--, --FILE--)
#define SHOW(E , FMT)	printf("#E "=" " FMT "\n",E)


void MyDebug(int x, double y);



#endif /* End of Header file guard. */