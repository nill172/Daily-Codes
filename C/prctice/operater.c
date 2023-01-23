#include <stdio.h>
int main()
{
    //relational operation
    int a, b;
    printf("The a & b are: ");
    scanf("%d %d",&a, &b);
    int result1 = a == b; //eqyal to
    int result2 = a != b; //Not equal to
    int result3 = a < b;
    int resrlt4 = a > b;
    int restult5 = a <= b;
    int result6 = a >= b;

    int result7 = (a < b) && (a > b); //And opertion
    int result8 = (a < b) || (a > b); //Or operation
    int result9 = ! (a == b); //NOT operation

    printf("Equal: %d\nNot equal: %d\nLess than: %d\nGreater than: %d\nLess than equal to: %d\nGreater than equal to: %d\nAnd operation: %d\nOr operation: %d\nNot Equal: %d",result1,result2,result3,resrlt4,restult5,result6,result7,result8,result9);
    
    return 0; 
}