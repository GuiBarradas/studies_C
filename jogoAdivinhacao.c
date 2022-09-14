#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 77;
    int palpite;

    printf("Qual é o seu palpite?\n");
    scanf("%d", &palpite);
    printf("\nSeu paplpite foi %d\n", palpite);

    if(palpite == numerosecreto){

        printf("Parabéns, você acertou!\n");
    } else {
        if(palpite > numerosecreto) {

            printf("Errooou! Seu palpite foi maior que o Número Secreto\n");
        }
        if (palpite < numerosecreto)
        {
            printf("Errooou! Seu palpite foi menor que o Número Secreto\n");
        }
    }









}