#include <stdio.h>

int main (){

    int x = 10;
    double y =20.5;
    float z = 30.5;

    int *p ;
/*int*p=&z; This line will cause a warning or error because z is not of type int*/ 


   p=&x;

   printf("Memory address of x :%p\n",(void*)p);

    return 0;
} 