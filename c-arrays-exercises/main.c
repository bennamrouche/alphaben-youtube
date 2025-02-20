#include<stdio.h>
#include<stdlib.h>

int find2(int *arr, int len, int a)
{
    int res = 0;

    for(int i = 0; i < len; i++)
    {
        if(arr[i] == a)
        {
            res++;

        }
    }
    return res;  
}

int main()
{
    int arr[10] = {1,2,100,4,2,6,2,8,9,10};
    int  m = find2(arr, 10, 111);

    printf("find = %d\n", m);
}

