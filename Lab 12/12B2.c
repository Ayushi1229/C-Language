#include<stdio.h>
void main(){
	 int n,i,j,f=1;
	 float e=1.0;
	 
	 printf("Enter a value of n:");
	 scanf("%d",&n);
	 if(n<0){
	 	printf("Enetr a non negative value\n");
	 	
	 }
	 for(i=1;i<=n;i++)
	 {
	 for(j=1;j<=i;j++)
	 {
	 	f=f*j;
	 }
	 e=e+((float)1/n);
	f=1;
	 }
	 printf("Result is:%f\n",(float)e);
}