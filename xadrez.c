#include <stdio.h>

int main() {
    int resultado, movimento;
    int contador = 0, contador2 = 1;
    char Rainha{10};

    printf("Seja Bem-Vindo ao Jogo De Xadrez! Para iniciar, escolha uma das peças:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &resultado);

    switch (resultado) {
        case 1:
            printf("A opção escolhida foi Torre, Escolha para onde ela deve andar:\n");
            printf("1. Para Cima\n");
            printf("2. Para Baixo\n");
            printf("3. Para Esquerda\n");
            printf("4. Para Direita\n");
            scanf("%d", &movimento);

            while (contador < 5) {
                switch (movimento) {
                    case 1:
                        printf("A Torre se moveu para Cima\n", contador + 1);
                        break;
                    case 2:
                        printf("A Torre se moveu para Baixo\n", contador + 1);  
                        break;
                    case 3:
                        printf("A torre se moveu para Esquerda\n", contador + 1);
                        break;
                    case 4:
                        printf("A Torre peça se moveu para Direita\n", contador + 1);
                        break;
                    default:
                        printf("Movimento inválido.\n");
                        contador = 5;
                        break;
                }
                contador++;
            }
            break;

        case 2:
        printf("A opção escolhida foi Torre, Escolha para onde ela deve andar:\n");
            printf("1. Para Cima, Esquerda\n");
            printf("2. Para Cima, Direita\n");
            printf("3. Para Baixo, Esquerda\n");
            printf("4. Para Baixo, Direita\n");
            scanf("%d", &movimento);
            
            switch (movimento)
            {
            case 1:
             do {
                printf("O bispo se moveu para Cima, Esquerda\n", contador2);
                contador2++;
            } while (contador2 <= 5);
                break;
            case 2:
                do {
                printf("O bispo se moveu para Cima, Direita\n", contador2);
                contador2++;
            } while (contador2 <= 5);
                break;
            case 3:
                do {
                printf("O bispo se moveu para Baixo, Esquerda\n", contador2);
                contador2++;
            } while (contador2 <= 5);
                break;
            case 4:
                do {
                printf("O bispo se moveu para Baixo, Direita\n", contador2);
                contador2++;
            } while (contador2 <= 5);
                break;
            
            default:
                printf("Movimento inválido.\n");
                contador2 = 5;
                break;
            }
            break;

        case 3:
        printf("A opção escolhida foi Rainha, Escolha para onde ela deve andar:\n");
    printf(" 1. Para Cima\n");
    printf(" 2. Para Baixo\n");
    printf(" 3. Para Esquerda\n");
    printf(" 4. Para Direita\n");
    scanf("%d", &movimento);

    switch (movimento) {
        case 1:
            for (contador2 = 1; contador2 <= 8; contador2++) {
                printf("A Rainha se moveu para Cima\n");
            }
            break;
        case 2:
            for (contador2 = 1; contador2 <= 8; contador2++) {
                printf("A Rainha se moveu para Baixo\n");
            }
            break;
        case 3:
            for (contador2 = 1; contador2 <= 8; contador2++) {
                printf("A Rainha se moveu para Esquerda\n");
            }
            break;
        case 4:
            for (contador2 = 1; contador2 <= 8; contador2++) {
                printf("A Rainha se moveu para Direita\n");
            }
            break;

        default:
            printf("Movimento inválida.\n");
            break;
    }

    }

    return 0;
}