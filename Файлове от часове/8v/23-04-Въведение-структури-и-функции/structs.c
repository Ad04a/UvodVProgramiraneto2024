

int func(int a, int b)
{
    int result = a*b;
    return result;
}

int min_index(int array[])
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j]){
            int swap=array[i];
            array[i]=array[j];
            swap=array[j];
            }
        }
    }
    printf("%d",array[0]);
    return 0;
}

void main()
{
    int a = 4;
    int b = 5;
    printf("%d", func(a,b));

    int array[] = {11,2,3,4,5,22};
    printf("%d",min_index(array));
}