#include<stdio.h>


int main()
{
    float r1,r2,r3;
    int n1;
    int n2,n3;
    scanf("%f%f%f",&r1,&r2,&r3);
    scanf("%d",&n1);
    n3=(r3/r1)*n1;
    printf("%d",n3);
	return 0;
}