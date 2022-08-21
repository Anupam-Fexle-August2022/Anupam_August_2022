#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("Swapped number: &d\n%d",x,y);
	return 0;
}