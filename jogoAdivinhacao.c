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

    for (int i = 1; i <= 3; i++)
    {

        printf("Tentativa %d de 3\n", i);
        printf("Qual é o seu palpite? ");
        scanf("%d", &palpite);
        printf("Seu palpite foi %d\n", palpite);

        int acertou = (palpite == numerosecreto);

        if (acertou)
        {
            i = 3;
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
        }
        else
        {
            int maior = palpite > numerosecreto;
            if (maior)
            {
                printf("Seu palpite foi maior que o número secreto\n");
            }
            else
            {
                printf("Seu palpite foi menor que o número secreto\n");
            }
        }
    }
    printf("===Fim de jogo!===");
}