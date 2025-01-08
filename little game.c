#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*************************\n");
	printf("*************************\n");
	printf("********1.开始游戏*******\n");
	printf("********0.退出游戏*******\n");
	printf("*************************\n");
	printf("*************************\n");
}

void game()
{
	int ret = rand()%100+1;
	//printf("%d\n", ret);
	int guess = 0;
	while (1)
	{
		printf("请猜数字：\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("小了\n");
		}
		else if (guess > ret)
		{
			printf("大了\n");
		}
		else
		{
			printf("##          ##\n\n");
			printf("恭喜您，猜对了\n\n");
			printf("##          ##\n\n");
			break;
		}
	}


}

int main()
{
	int input = 0;
	srand((unsigned int)time( NULL ));
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				;
				break;
			}
		
	} while (input);

	return 0;
}