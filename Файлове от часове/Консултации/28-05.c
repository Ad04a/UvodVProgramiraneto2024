#include <stdio.h>
#include <limits.h>

//0110 0001
int main_complex()
{
    //unsigned int max = UINT_MAX; 
    unsigned int max = 4294967137; 
    unsigned char* ucharptr = &max;
    char* charptr = &max;
    unsigned int* intptr = &max;
    

    
    //max &= 0xFFFFFFAA;
    printf("%d - %d\n", sizeof(char), sizeof(unsigned char));
    printf("%u - %p\n\n", max, &max);

    printf("%u - %p\n", *charptr, charptr);
    printf("%u - %p\n", *ucharptr, ucharptr);
    printf("%u - %p\n", *((char*)intptr), ((char*)intptr));
    printf("%u - %p\n", *((unsigned char*)intptr), ((unsigned char*)intptr));
    printf("%u - %p\n\n", *intptr, intptr);
    
    printf("%u - %p\n", *(intptr+1), (intptr+1));
    printf("%u - %p\n", *(((char*)intptr)+1), (((char*)intptr))+1);


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


int main()
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
}

