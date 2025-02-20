#include<stdio.h>
#include<stdlib.h>


int max(int *arr,int len)
{
    int m = arr[0];
    for(int i = 0; i < len; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
        }
    }
    
    return m;
}

int main()
{
    
    int arr[10] = {1,2,100,4,5,6,7,8,9,10};
    int m = max(arr,10);
    printf("result = %d\n", m);

}

