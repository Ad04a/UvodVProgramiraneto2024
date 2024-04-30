#include <stdio.h>


void func(int b)
{
    if(b==0)
    {
        return;
    }
    
    printf("%d\n", b);
    func(b-1);
}

int main()
{
    int b = 4;
    func(b);
    printf("%d\n", b);
}