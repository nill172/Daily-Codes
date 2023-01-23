#include <stdio.h>
int main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	int ans;
	ans = (x > 10);
	printf("The number is greater than 10: %d", ans);
	return 0;
}
