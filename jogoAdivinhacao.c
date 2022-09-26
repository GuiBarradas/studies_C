#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brasil");

    // imprime cabecalho do jogo
   


    printf("          P  /_\\  P                                         P  /_\\  P                        \n");
    printf("         /_\\_|_|_/_\\                                      /_\\_|_|_/_\\                      \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao           n_n | ||. .|| | n_n                    \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!    |_|_|nnnn nnnn|_|_|                     \n");
    printf("    |" "  |  |_|  |"  " |                                     |" "  |  |_|  |"  " |                   \n");
    printf("    |_____| ' _ ' |_____|                              |_____| ' _ ' |_____|                   \n");
    printf("          \\__|_|__/                                          \\__|_|__/                       \n");
    printf("\n\n");


    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int palpite;
    int tentativa = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    // seleciona o nível de dificuldade
    switch (nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;
    case 2:
        numerodetentativas = 15;
        break;

    default:
        numerodetentativas = 6;
        break;
    }

    for (int i = 1; i <= numerodetentativas; i++)
    {

        printf("Tentativa %d\n", tentativa);
        printf("Qual é o seu chute? ");

        scanf("%d", &palpite);
        printf("Seu palpite foi %d\n", palpite);

        if (palpite < 0)
        {
            printf("Você não pode inserir números negativos!\n");
            continue;
        }

        acertou = (palpite == numerosecreto);
        int maior = palpite > numerosecreto;

        if (acertou)
        {
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

        double pontosperdidos = abs(palpite - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

     if(acertou) {
        printf("\n\n");
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabéns! Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativa);
        printf("Total de pontos: %.1f\n", pontos);

} else {
        printf("\n\n");
        printf("Você perdeu! Tente de novo!\n");
        printf("========FIM DE JOGO========\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
}

}