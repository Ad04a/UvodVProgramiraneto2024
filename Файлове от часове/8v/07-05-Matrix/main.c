#include <stdio.h>


int main()
{
    char arr[2][4] = {{1, 2, 3, 4},
                     {3, 4, 5,6},};

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        //for(int j=0; j<sizeof(arr[2]))
    }


    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        fgets(arr[i], 4,stdin);
        
        //for(int j=0; j<sizeof(arr[2]))
    }


    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        //for(int j=0; j<sizeof(arr[2]))
    }

}