#include<stdio.h>
void main(){
	int a,b,num1,num2,temp,hcf,lcm;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	num1=a;
	num2=b;
	while(num2!=0){
		temp=num2;
		num2=num1%num2;
		num1=temp;
	}
	hcf=num1;
	lcm=(a*b)/hcf;
	
	printf("HCF of %d and %d is=%d",a,b,hcf);
	printf("\nLCM of %d and %d is=%d",a,b,lcm);
}