#include <stdio.h>

#define  NUMERO_DE_TENTATIVAS 5

int main() {
    // Cabeçalho do jogo
    printf("***************************************************************\n");
    printf("Bem-vindo ao nosso jogo de adivinhação!\n");
    printf("***************************************************************\n");

    int numeroSecreto = 42;

    int chute;

    for(int i = 1; i <=  NUMERO_DE_TENTATIVAS; i++){
        printf("Tentativa %d de %d\n", i,  NUMERO_DE_TENTATIVAS);
        printf("Qual seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);
    int menor = (chute < numeroSecreto);

    if(acertou) {
        printf("Parabens! Voce acertou!\n");
        printf("Jogue novamente, voce e bom!\n");

        // FOR
        break;

    }

      else  if(maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }
 }
 printf("Fim do jogo\n");
       return 0;
}
