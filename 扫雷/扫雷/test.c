#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		case 1:
			printf("start game\n");
			game();
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
	} while (input);
	
		return 0;
	
}