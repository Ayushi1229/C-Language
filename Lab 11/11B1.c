#include<stdio.h>
int main(){
	 int first=0,second=1,next,i,n;
	 printf("Enter the number of terms:");
	 scanf("%d",&n);
	 printf("Fibonacci Series:");
	 printf("%d %d ",first,second);
	 for(i=3;i<n;i++){
	 	next=first+second;
	 	printf("%d\t",next);
	 	first=second;
	 	second=next;
	 }
	 
}
