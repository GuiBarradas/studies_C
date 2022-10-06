#include <stdio.h>
#include <string.h>
#include <locale.h>


void openning()
{
	printf("	        +--|-+|             \n");
	printf("		   O  |                 \n");
	printf("		  /|\\ |                \n");
	printf("		  / \\ |                \n");
	printf("		      |                 \n");
	printf("		== == == ==             \n");
	printf("               JOGO DA FORCA    \n");
	printf("		== == == ==             \n\n");
}

char palavrasecreta[20];
char chutes[26];
int tentativas = 0;

void chuta()
{
	char chute;
	printf("Qual letra? ");
	scanf(" %c", &chute);

	chutes[tentativas] = chute;
}

// Essa função não foi discutida no último vídeo
int jachutou(char letra)
{
	int achou = 0;
	for (int j = 0; j < tentativas; j++)
	{
		if (chutes[j] == letra)
		{
			achou = 1;
			break;
		}
	}

	return achou;
}

// Essa função não foi discutida no último vídeo
void desenhaforca()
{

	printf("Você já deu %d chutes\n\n", tentativas);

	for (int i = 0; i < strlen(palavrasecreta); i++)
	{

		if (jachutou(palavrasecreta[i]))
		{
			printf("%c ", palavrasecreta[i]);
		}
		else
		{
			printf("_ ");
		}
	}
	printf("\n");
}

// Essa função não foi discutida no último vídeo
void escolhepalavra()
{
	sprintf(palavrasecreta, "MELANCIA");
}

int main()
{
	

	int acertou = 0;
	int enforcou = 0;

	openning();
	escolhepalavra();

	do
	{

		desenhaforca();
		chuta();

		tentativas++;

	} while (!acertou && !enforcou);
}