#include <stdio.h> 
 
struct Amogus { 
    char color[32]; 
    unsigned int age; 
    unsigned int score; 
}; 

int main(){ 
    struct Amogus Amogus1; 
    fgets(Amogus1.color, 32, stdin/*standard input*/); 
    return 0;  
} 
/*  \0  */