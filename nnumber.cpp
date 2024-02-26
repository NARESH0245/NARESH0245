#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
    printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=0; i <= n; i=i+1){
		sum=sum+i;
	}
			printf("%d ",sum);
	return 0;
}