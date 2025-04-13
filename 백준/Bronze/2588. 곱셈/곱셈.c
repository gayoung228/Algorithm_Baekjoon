#include <stdio.h>

int main()
{
	int x, y;
	int y1, y2, y3;

	scanf("%d", &x);
	scanf("%d", &y);

	y1 = y%10;
	printf("%d\n", x * y1);
	y2 = (y % 100) / 10;
	printf("%d\n", x * y2);
	y3 = y / 100;
	printf("%d\n", x * y3);
	printf("%d\n", x * y);

	return 0;
}