#include <stdio.h>
int main()
{
    int marks[2][3] = {{12,45, 54}, {94, 34, 29}};
    for(int i=0; i<2; i ++)
    {
        printf("\n");
        for(int j=0; j<3; j ++)
        {
            printf("%d\t",marks[i][j]);
        }
    }
    return 0;
}