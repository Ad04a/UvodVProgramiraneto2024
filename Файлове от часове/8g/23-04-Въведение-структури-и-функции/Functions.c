#include <stdio.h>
int name;
int name2;

int func_A(a, b){
    int c;
    c = a + b;
    return c;
}

void main(){
    func_A(name, name2);
}