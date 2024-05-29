#include <stdio.h>
#include <string.h>
void func(int* arr)
{
    for(int i=0; i<3; i++)
    {
        printf("%d ", *(arr+i));
    }
}

int main()
{
    int b[3] = {1,6,7};

    int* pb = b;

    char* str1 = "helloAsia";
    char* str2 = "World";

    printf("value of strcmp  = %d\n", strcmp(str1, str2));
    printf("%s  -  %s\n", str1, str2);
    printf("%s  -  %s\n", str1+3, str2);
    printf("%s  -  %s\n", str1, str2);

    str1 += 5;
    printf("%d  -  %s\n", *((int*)str1), str2);

    printf("value of shano strcmp  = %d\n", strcmp(str1, str2));
    printf("%s  -  %s\n", str1-2, str2);
    /*printf("address of b = %p\n", &b);

    printf("value of b from pb = %d\n", *pb);
    printf("address of b from pb= %p\n", pb);

    printf("value of pb+2 = %d\n", pb[2]);
    printf("address of pb+2= %p\n", pb+2);

    printf("value of b from pb = %d\n", *pb);
    printf("address of b from pb= %p\n", pb);*/
}