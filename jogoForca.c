#include <stdio.h>
#include <string.h>

int main()
{

	char palavrasecreta[20];
	sprintf(palavrasecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;
	char chutes[26];
	int tentativas = 0;

	do
	{
		char palpite;

		for (int i = 0; i < strlen(palavrasecreta); i++)
		{
			int achou = 0; 
			for (int j = 0; j < tentativas; j++)
			{
				if (chutes[j] == palavrasecreta[i])
				{
					achou = 1;
					break;
				}
			}
			if (achou)
			{
				printf("%c ", palavrasecreta[i]);
			}
			else
			{
				printf("_ ");
			}
		}
		printf("\n");
		scanf(" %c", &palpite);

		chutes[tentativas] = palpite;
		tentativas++;

	} while (!acertou && !enforcou);

	printf("%s %c", palavrasecreta, palavrasecreta[19]);
}