#include<stdio.h>
#include<stdlib.h>

int find1(int *arr, int len, int a)
{
    int res = -1;

    for(int i = 0; i < len; i++)
    {
        if(arr[i] == a)
        {
            res = 0;
            break;
        }
    }

    return res;  
}

int main()
{

    int arr[10] = {1,2,100,4,5,6,7,8,9,10};
    int  m = find1(arr, 10, 2);

    printf("find = %d\n", m);
}


