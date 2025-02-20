#include<stdio.h>
#include<stdlib.h>

float  avg(int *arr, int len)
{
    float avg = 0;
    int sum = 0;

    for(int i =0; i< len; i++)
    {
        sum += arr[i]; 
    }
    avg = ((float)sum) / len; 
    return avg;
}

int main()
{

    int arr[10] = {1,2,100,4,5,6,7,8,9,10};
    float m = avg(arr,10);
    printf("result = %f\n", m);

}

