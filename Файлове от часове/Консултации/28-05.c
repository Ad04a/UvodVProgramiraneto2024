#include <stdio.h>
#include <limits.h>

//1...01111111   -128
//1...10000000   -127
//1.1010000000
int main()
{
    unsigned int max = UINT_MAX-127-256; 
    //unsigned int max = 4294967137; 
    unsigned char* ucharptr = &max;
    char* charptr = &max;
    unsigned int* intptr = &max;
    

    
    //max &= 0xFFFFFFAA;
    printf("%d - %d\n", sizeof(char), sizeof(unsigned char));
    printf("%u - %p\n\n", max, &max);

    char trough  = *((char*)intptr);

    printf("%d - %p\n", *charptr, charptr);
    printf("%u - %p\n", *ucharptr, ucharptr);
    printf("%d - %p\n", trough, ((char*)intptr));
    printf("%u - %p\n", *((unsigned char*)intptr), ((unsigned char*)intptr));
    printf("%u - %p\n\n", *intptr, intptr);
    
    printf("%u - %p\n", *(intptr+1), (intptr+1));
    printf("%d - %p\n", *(((char*)intptr)+1), (((char*)intptr))+1);


    char* str = "fortnite";
    printf("%c", *((unsigned char*)str));

    return 0;
}

int add(int arr[], int* counter)
{
    arr[*counter] = 4;
    (*counter)++;
    if(*counter == 10)
    {
        return 1;
    }
    return 0;
}


void printList(int arr[])
{
    for(int i=0; i<10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b\b\n");
}


int main_konsult()
{
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int counter = 0;
    int* p = &counter;
    while(1)
    {
        int boolean = add(arr, p);
        printf("Added ne elem: ");
        printList(arr);
        if(boolean == 1)
        {
            break;
        }
    }
    printf("list is full: ");
    printList(arr);
    printf("%x", 12);

    /*%d - decimal
    %x - hex
    %o - octagonal
    %u - unsigned
    %c - char
    %s - string
    %f - float
    %lf/d - long float/int
    %p - adress*/
}

