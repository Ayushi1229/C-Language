#include<stdio.h>
void main(){
	int n,rem,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n ;
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("%d",sum);
	if(sum==temp){
		printf("Yes");
		}else{ 
		printf("No");
		}
}