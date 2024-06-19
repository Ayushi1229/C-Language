#include<stdio.h>
void main(){
	int n,sum,sum1=0,i,j;
	printf("enter a no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        sum=0;
		for(j=1;j<=i;j++){
		sum=sum+j;
		}
        sum1=sum1+sum;
    }
    printf("\nThe sum of series upto the value[%d]=[%d]\n",n,sum1);
}