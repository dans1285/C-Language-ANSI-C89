#include <stdio.h>  
void main (){

    int a=10,b=9;
    int*p,*q;
    p=&a; /*p points to a*/ 
    q=&b; /* q points to b*/
    printf("Value of a=%d\n", a);
    printf("Value of a=%d\n", *p);
    printf("Address of a=%p\n",(void *) &a);
    printf("Address of p=%p\n", (void*)&p);
}