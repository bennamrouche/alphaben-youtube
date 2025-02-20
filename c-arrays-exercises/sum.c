#include<stdio.h>
#include<stdlib.h>

int sum(int *arr,int len)
{
    int res = 0;

    for(int i = 0; i < len; i++)
    {
        int a = arr[i];
        printf("a = %d\n",a);
        res += a;
    }

    return res;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int res = sum(arr, 10);
    printf("result = %d\n", res);

}

