#include<stdio.h>

main()
{
    int arr[100],i,n, temp;
    int *p;
    p=arr;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n", n);
    for(i=0;i< n;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (arr+i));
    }
    for(i=0;i< n/2;i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + n -1 -i);
        *(arr + n -1 -i) = temp;
    }
    printf("\nReversed array is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\n", *(arr+i));
    }
}