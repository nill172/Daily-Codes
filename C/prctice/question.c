#include <stdio.h>
int main()
{
    //Question 1: Find avarage of 3 numbers
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum;
    sum = a + b + c;
    printf("The sum of three numbers is: %d\n", sum);
    float avarage;
    avarage = sum/3;
    printf("The avarage of three numbers is: %.3f\n", avarage);

    //Question 2: Find the area of a circule
    int r;
    printf("The redius of the circule: ");
    scanf("%d", &r);
    float area;
    float pi = 3.14;
    area = pi * r * r;
    printf("The area of the circule is: %.4f\n", area);

    //Question 3: Find the area of a triangle
    int h, base;
    printf("The hight and the base are: ");
    scanf("%d %d", &h, &base);
    float tri_area;
    tri_area = 0.5 * h * base;
    printf("The area of triangle is: %.4f\n", tri_area);

    return 0;
}