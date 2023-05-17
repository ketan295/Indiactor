#include<stdio.h>

int swap(int *a , int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
main()
{
	int x=20, y=10;
	
	printf("Before swapping value :\n");
	printf("x=%d y=%d\n",x,y);
	
	swap(&x,&y);
	printf("After swapping value :\n");
	printf("x=%d y=%d",x,y);
}
	

	
	



