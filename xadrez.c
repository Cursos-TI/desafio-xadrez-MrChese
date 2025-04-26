#include <stdio.h>

// torre bsipo e rainha

int main() {
    int Resultado, Movimento;
    int i = 1;


    printf(" Sejá Bem Vindo ao Jogo De Xadrez, Para iniciar escolha uma das peças: \n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &Resultado);

    switch (Resultado)
    {
    case 1:
        
         printf(" A opção escolhida foi Torre, escolha para onde ela deve andar:\n");
         printf("1. Para Cima\n");
         printf("2. Para Baixo\n");
         printf("3. Para Esquerda\n");
         printf("4. Para Direita\n");
         scanf("%d", &Movimento);

         switch (Movimento)
         {
         case 1:
            while (Movimento <= 5){
                printf("Sua peça se moveu para Cima\n");
                Movimento ++;
            }
            
            break;
            case 2:
            while (Movimento <= 5){
                printf("Sua peça se moveu para Baixo\n");
                Movimento ++;
            }
            
            break;
            case 3:
            while (Movimento <= 5){
                printf("Sua peça se moveu para Esquerda\n");
                Movimento ++;
            }
            
            break;
            case 4:
            while (Movimento <= 5){
                printf("Sua peça se moveu para Direita\n");
                Movimento ++;
            }
        }
      break;

        case 2:
        
        printf(" A opção escolhida foi Bispo, escolha para onde ela deve andar:\n");
        printf("1. Para Cima, Direita\n");
        printf("2. Para Cima, Esquerda\n");
        printf("3. Para Baixo, Direita\n");
        printf("4. Para Baixo, esquerda\n");
        scanf("%d", &Movimento);
        switch (Movimento)
        {
      case 1:
      
    }
 }
  break;


    return 0;
}
