#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
    int b=0;
    int c = 2;
    int d = 'A';
    char x = 'x';
    char y = 'y';

    /*printf("value of b = %d\n", b);
    printf("address of b = %p\n", &b);

    b++;

    printf("value of c = %d\n", c);
    printf("address of c = %p\n", &c);   

    printf("value of d = %d\n", d);
    printf("address of d = %p\n", &d);   

    printf("value of x = %d\n", x);
    printf("address of x = %p\n", &x);   

    printf("value of y = %d\n", y);
    printf("address of y = %p\n", &y);   
    */

    int* pd = &d;

    int max = INT_MAX;
    printf("%d\n", max);
    int* intptr = &max;
    unsigned char* charptr = &max;
    printf("value of max from intptr = %d\n", *intptr);
    printf("value of max from charptr = %d\n", *charptr);
    max -= round(INT_MAX/2);
    printf("%d", max);
    printf("value of max from intptr = %d\n", *intptr);
    printf("value of max from charptr = %d\n", *charptr);
    /*printf("value of d from pd = %d\n", *pd);
    printf("address of d from pd = %p\n", pd);

    printf("value of pd = %p\n", pd);
    printf("address of pd = %p\n\n", &pd);

    printf("size of int ptr = %d\n", sizeof(int*));
    printf("size of char ptr = %d\n", sizeof(char*));
    printf("size of double ptr = %d\n", sizeof(double*));*/
}