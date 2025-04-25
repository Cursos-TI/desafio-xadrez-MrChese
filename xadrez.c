#include <stdio.h>

// torre bsipo e rainha

int main() {
    int Resultado, Movimento;

    printf(" Sejá Bem Vindo ao Jogo De Xadrez, Para iniciar escolha uma das peças: \n"):
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &Resultado);

    switch (Resultado)
    {
    case 1:
        
         Printf(" A opção escolhida foi Torre, escolha para onde ela deve andar:");
         printf("1. Para Cima\n");
         printf("2. Para Baixo\n");
         printf("3. Para Esquerda\n");
         printf("4. Para Direita\n");
         scanf("%d", Movimento);

         switch (Movimento)
         {
         case 1:
            while (Movimento == 5){
                printf("Sua peça se moveu pata Cima");
                Movimento ++;
            }
            
            break;
         
         default:
         printf(" Opção invalida ");
            break;
         }


        break;
    
    default:
        break;
    }

    return 0;
}
