#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 77;
    int palpite;
    int tentativa = 1;

    while (1)
    {

        printf("Tentativa %d\n", tentativa);
        printf("Qual é o seu palpite? ");
        scanf("%d", &palpite);
        printf("Seu palpite foi %d\n", palpite);

        int acertou = (palpite == numerosecreto);
        int maior = palpite > numerosecreto;

        if (palpite < 0)
        {
            printf("Atenção! Você não pode passar valores negativos!\n");
            continue;
        }

        if (acertou)
        {

            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }

        else if (maior)
        {
            printf("Seu palpite foi maior que o número secreto\n");
        }
        else
        {
            printf("Seu palpite foi menor que o número secreto\n");
        }
        tentativa++;
    }
    printf("===Fim de jogo!===\n");
    printf("Você acertou em %d de tentatias", tentativa);
}
