#include<stdio.h>
void main(){
    int x, y, i, b, a, result=0;
    printf("Enter value of base:");
    scanf("%d",&x);
    printf("Enter value of exponent:");
    scanf("%d",&y);
    a=x;
    result=x;
    for(i=1;i<y;i++){
        for(b=1;b<a;b++){
            result=result+x;
        }
        x=result;
    } 
    printf("x^y=%d\n",result);
}