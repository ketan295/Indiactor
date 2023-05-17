#include<stdio.h>

main()
{
	int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    int *ptr;
	ptr=&arr[5];    
   
    printf("Array elements: ");
    for (i = 0; i <5; i++)
    {
        printf("%d\n",*(ptr+i));
        //ptr++;
    }

    }
}

