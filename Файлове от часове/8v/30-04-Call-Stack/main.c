#include <stdio.h>

void func(int arg)
{
    print("%d\n", arg);
    if(arg == 0)
    {
        return;
    }
    func(arg-1);
}

int main()
{ 
    int c;
    func(7);
}