
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct my_struct
{
    char *str;
   int bar;
};

void init_my_struct(struct my_struct *s1)
{
   s1->str = "Best wishes,";
   s1->bar = 0;
}
int main(int argc,char *argv[]) 
{
    struct my_struct obj1;
    struct my_struct obj2= {"Tarek Saleh",1};
    init_my_struct(&obj1);
    printf("str1 then str2:\n%s\n%s\n",obj1.str,obj2.str);
}