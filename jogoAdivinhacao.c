#include <stdio.h>
#include <locale.h>
#define NUMERO_TENTATIVAS 3

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 77;
    int palpite;

    for (int i = 1; i <= NUMERO_TENTATIVAS; i++)
    {

        printf("Tentativa %d de %d\n", i, NUMERO_TENTATIVAS);
        printf("Qual é o seu palpite? ");
        scanf("%d", &palpite);
        printf("Seu palpite foi %d\n", palpite);

        int acertou = (palpite == numerosecreto);
        int maior = palpite > numerosecreto;

        if(palpite < 0){
            printf("Atenção! Você não pode passar valores negativos!\n");
            i--;
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
    }
    printf("===Fim de jogo!===");
}
