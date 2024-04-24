#include <stdio.h>

int  b= 10;

struct car{
    int age;
};

void func(int b)
{
    static int c = 0;
    c+=b;
    printf("%d\n", c);
}

int main()
{
    int b = 4;
    for(int i=0; i<b; i++)
    { 
        func(b);
    }
    printf("%d\n", b);
}