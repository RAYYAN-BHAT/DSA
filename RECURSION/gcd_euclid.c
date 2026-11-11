#include <stdio.h>


int gcd(int a,int b)
{
    if(b == 0) return a;

    return gcd(b,a%b);
}
int main()
{
      int number1,number2;

    printf("Enter a number: ");
    scanf("%d %d", &number1 , &number2);
    gcd(number1,number2);
    return 0;


}
