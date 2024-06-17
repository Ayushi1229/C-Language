#include<stdio.h>
#include<math.h>
int main(){
    int n,firstDigit,lastDigit,digits,swappedNumber;
    printf("Enter number=");
    scanf("%d",&n);
    lastDigit=n%10;
    digits=(int)log10(n);
    firstDigit=(int)(n/pow(10,digits));
    swappedNumber=lastDigit;
    swappedNumber*=(int)round(pow(10,digits));
    swappedNumber+=n%((int)round(pow(10,digits)));
    swappedNumber-=lastDigit;
    swappedNumber+=firstDigit;
    printf("Number after swapping first and last digits : %d",swappedNumber);
    return 0;
}