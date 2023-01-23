#include<stdio.h>
int main()
{
    /*
    &	Bitwise AND
    |	Bitwise OR
    ^	Bitwise XOR
    <<	Left Shift      It's double the value of the number
    >>	Right shift     It's half the value of the number
    ~	One's Complement
    */
    int a=5,b=9;  // a = 5(00000101), b = 9(00001001)

    printf("\n%d & %d = %d",a,b,a&b);   // The result is 00000001

    printf("\n%d | %d = %d",a,b,a|b);   // The result is 00001101

    printf("\n%d ^ %d = %d",a,b,a^b);   // The result is 00001100
    
    printf("\n%d << 1 = %d",b,b<<1);    // The result is 00010010
    
    printf("\n%d >> 1 = %d",b,b>>1);    // The result is 00000100

    printf("\n ~ %d = %d",a,~a);        // The result is 11111010
    
    return 0;}