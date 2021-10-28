#include<stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = a > b;
	printf("%d\n", res);
	res = a <= c;
	printf("%d\n", res);
	res=b != c;
	printf("%d\n", res);
	res = (b == c);
	printf("%d\n", res);
	res = !(b == c);
	printf("%d\n", res); //0!=1
	return 0;

	printf("%d\n", (15 > 10) && (30 < 15));
	printf("%d\n", (15 == 10) && (30 < 15));
	printf("%d\n", (15 > 10) && (30 > 15));
	printf("%d\n", (15 > 10) && (30 < 15));
	printf("%d\n", (15 > 10) || (30 < 15));
	printf("%d\n", (15 == 10) || (30 < 15));
	printf("%d\n", (15 > 10) || (30 > 15));

	int a = 30;
	printf("%d\n", 10 < a < 20);
	printf("%d\n", (10 < a) && (a < 20));

	/*int ko = 1, ma = 2, en = 2;
	double ev;

	ev = ((double)ko) + ((double)ma) + (double(en)); */

	/*switch (조건식)
	{
		case (조건식 결과값 1);*/
	}
	}