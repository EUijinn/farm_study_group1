#include<stdio.h>
#include<string.h>

int make_strelen(char array[])//strlen�� ���� �Ȱ��� ������ �ϴ� ���� ����,nul���ڸ� ������ stop

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

//ftd -- �ǻ��ڵ�, �ּ�ó�� |  "�Լ�" | ���� --> ����ó��


/*#include<stdio.h>
#include<stdlib.h>

int angry = 0;
short first = 1;
short ��� = 0;


do {
	tease();

} while (��� && angry < 10);
boom();



/*int angry = 0;
short first = 1;
short ��� = 0;

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
} while (��� && angry < 100);
boom();

printf("if use while:\n");
while (��� && angry < 100);

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

