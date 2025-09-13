#include <stdio.h>

int main(){

int peca, t = 1, b = 1, r, movimentocavalo = 1;

printf("Digite a peça a ser movimentada:\n"); // Entrada do usuário;
printf("1. TORRE - 5 casas para a direita\n");
printf("2. BISPO - 5 casas na diagonal\n");
printf("3. RAINHA - 8 casas para a esquerda\n");
printf("4. CAVALO - 2 casas para baixo e 1 casa para a esquerda\n");
scanf("%d", &peca);

    switch (peca)
    {
    case 1: // Movimentação da Torre;
        while (t <= 5)
        {
            printf("Direita\n");
            t++;
        }
        
        break;

        case 2: // Movimentação do Bispo;
        do
        {
            if (b % 2 != 0){
                printf("Cima, ");
            }
            else
                printf("Direita\n");            
            b++;
        } while (b <= 10);
        break;

        case 3: // Movimentação da Rainha;
        for (int r = 1; r <= 8; r++){
            printf("Esquerda\n");
        }
        break;

        case 4: // Movimentação do Cavalo
        while(movimentocavalo--)
        {
            for(int i = 0; i < 2; i++){
                printf("Baixo\n");
            }
                printf("Esquerda\n");
        }
        break;

    default:
        printf("Entrada digitada invalida!\n");

    }
}
