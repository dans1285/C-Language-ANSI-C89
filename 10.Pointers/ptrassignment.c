#include <stdio.h>
int main (){

    int a=10, b=11;
    int *p, *q;
    q=&b; /* q points to b*/
    p = &a; /*p points to a*/ 
    /* q=p;*/

    *q=*p;

    *p = 65;

    printf("Value of a = %d %d %d\n", a, *p, *q);
    printf("\n");
    printf("Value of b = %d %d %d\n", b, *p, *q);
    printf("\n");
    printf("Address of a = %p %p %p\n", (void*)&a, (void*)p, (void*)q);
    printf("\n");
    printf("Address of p = %p\n", (void*)&p);
    printf("\n");
    printf("Address of q = %p\n", (void*)&q);
    printf("\n");
    printf("Address of b = %p\n", (void*)&b);
    printf("\n");


    return 0;
}