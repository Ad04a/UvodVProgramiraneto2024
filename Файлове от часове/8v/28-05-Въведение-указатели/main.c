#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
    int b = 4;
    int c = 7;
    int d = 19;
    char x = 'a';
    char y = 'y';
    int* pd = &d;

    printf("value of b = %d\n", b);
    printf("address of b = %p\n", &b);

    b++;

    /*printf("value of c = %d\n", c);
    printf("address of c = %p\n", &c);   

    printf("value of d = %d\n", d);
    printf("address of d = %p\n", &d);  

    printf("value of x = %d\n", x);
    printf("address of x = %p\n", &x);  

    printf("value of y = %d\n", y);
    printf("address of y = %p\n", &y);  

    printf("value of pd = %p\n", pd);
    printf("address of pd = %p\n", &pd);  

    printf("value of d from pd = %d\n", *pd);
    printf("address of d from pd = %p\n", pd);  */


    printf("size of intptr = %d\n", sizeof(int*));
    printf("size of chatpr = %d\n", sizeof(char*));
    printf("size of doubleptr = %d\n", sizeof(short));






    int max = INT_MAX;
    printf("%d\n", max);
    int* intptr = &max;
    unsigned char* charptr = &max;
    short* shortptr = &max;
    printf("value of max from intptr = %d\n", *intptr);
    printf("value of max from charptr = %d\n", *charptr);
    printf("value of max from shortptr = %d\n", *shortptr);

    max -= 0b00000000111111111111111111111111;
    printf("%d", max);
    printf("value of max from intptr = %d\n", *intptr);
    printf("value of max from charptr = %d\n", *charptr);
    printf("value of max from shortptr = %d\n", *shortptr);
}