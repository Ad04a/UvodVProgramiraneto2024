#include <stdio.h>
#include <string.h>

void func(int arr[])
{
    for(int i=0; i<4; i++)
    {
        printf("%d, ", *(arr+i));
    }
}


int main()
{
    int b[4] = {4, 3, 9, 11};

    int* pb = &b;

    func(b);
    char* str1 = "helloAsia";
    char* str2 = "World";

    printf("value of strcmp  = %d\n", strcmp(str1, str2));
    printf("%s  -  %s\n", str1, str2);
    printf("%s  -  %s\n", str1+3, str2);
    printf("%s  -  %s\n", str1, str2);
    str1 += 5;
    printf("%s  -  %s\n", str1, str2);
    printf("value of shano strcmp  = %d\n", strcmp(str1, str2));

    printf("%c  -  %s\n", *( (char*)( ((short*)str1)+1 ) ), str2);

    /*printf("value of shano strcmp  = %d\n", strcmp(str1, str2));
    printf("%s  -  %s\n", str1-2, str2);

    /*printf("value of b = %d\n", b);
    printf("address of b = %p\n", &b);

    printf("value of b from pb+1 = %d\n", *(pb+2));
    printf("address of b from pb+1= %p\n", pb+2);

    printf("value of b from pb = %d\n", *pb);
    printf("address of b from pb= %p\n", pb);*/
}