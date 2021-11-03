#include<stdio.h>
#include<string.h>

int make_strelen(char array[])//strlen과 거의 똑같은 동작을 하는 로직 구현,nul문자를 만나면 stop

{
	int count = 0;

	for (int i = 0; array[i] != '\0'; i++)
	{
		count++;

	}
	return count;
}
int main()
{
	int a;
	char arr[] = "abc\0def";
	a = make_strelen(arr);
	printf("%d\n", a);

	return 0;
}

//ftd -- 의사코드, 주석처리 |  "함수" | 실행 --> 예외처리


/*#include<stdio.h>
#include<stdlib.h>

int angry = 0;
short first = 1;
short 놀림감 = 0;


do {
	tease();

} while (놀림감 && angry < 10);
boom();



/*int angry = 0;
short first = 1;
short 놀림감 = 0;

void tease(void)
{
	int angry=0;
	angry++;
	printf("my angry gauge is %d\n",angry);

}

void boom(void)
{
	printf("STOP!!!");
}

int main(void)
{
	int angry = 0;
	while (angry > 100)
	{
		tease();

	}
	boom();

	return 0;

}

void tease(void)
{
	if ()
	{
		angry++;
		printf("my angry is %d\n", angry);
	}
}

printf("if use do ~ while:\n");
do {
	teas();
} while (놀림감 && angry < 100);
boom();

printf("if use while:\n");
while (놀림감 && angry < 100);

/* for (int i = 0; i < 100; i++);
{
	tease();
}
boom();
return 0;
*/









/*{
	printf("Hello World");
	
	return 0;
}
*/

