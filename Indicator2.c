#include <stdio.h>

main()
{
    int arr[100],i,n;
    int *ptr;
    ptr=arr;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n", n);
    for(i=0;i< n;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (arr+i));
    }

    printf("\nArray elements is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr+i)); 
    }
}