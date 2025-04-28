#include <stdio.h>

void torreCima() {
    printf("A Torre se  moveu para cima: \n");
}

void torreBaixo() {
    printf("A Torre se  moveu para baixo: \n");
}

void torreEsquerda() {
    printf("A Torre se moveu para esquerda: \n");
}

void torreDireita() {
    printf("A TOrre se moveu para direita: \n");
}



int main() {
    int resultado, movimento;
    int contador = 0, contador2 = 1;
    char Rainha[20];


    printf("Seja Bem-Vindo ao Jogo De Xadrez! Para iniciar, escolha uma das peças:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
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
                        torreCima();
                        break;
                    case 2:
                        torreBaixo();
                        break;
                    case 3:
                       torreEsquerda();
                        break;
                    case 4:
                        torreDireita();
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
        printf("A opção escolhida foi Bispo, Escolha para onde ela deve andar:\n");
            printf("1. Para Cima, Esquerda\n");
            printf("2. Para Cima, Direita\n");
            printf("3. Para Baixo, Esquerda\n");
            printf("4. Para Baixo, Direita\n");
            scanf("%d", &movimento);
            
            switch (movimento)
            {
            case 1:
            do {
                int contadorInterno = 0;
                
                do {
                    if (contadorInterno == 0) {
                        printf("O Bispo se moveu para Cima\n");
                    } else if (contadorInterno == 1) {
                        printf("O Bispo se moveu para Esquerda\n");
                    }
                    contadorInterno++;
                } while (contadorInterno < 2);
        
                contador2++;
            } while (contador2 < 6);
                break;
            case 2:
            do {
                int contadorInterno = 0;
                
                do {
                    if (contadorInterno == 0) {
                        printf("O Bispo se moveu para Cima\n");
                    } else if (contadorInterno == 1) {
                        printf("O Bispo se moveu para Direita\n");
                    }
                    contadorInterno++;
                } while (contadorInterno < 2);
        
                contador2++;
            } while (contador2 < 6);
                break;

            case 3:
            do {
                int contadorInterno = 0;
                
                do {
                    if (contadorInterno == 0) {
                        printf("O Bispo se moveu para Baixo\n");
                    } else if (contadorInterno == 1) {
                        printf("O Bispo se moveu para Esquerda\n");
                    }
                    contadorInterno++;
                } while (contadorInterno < 2);
        
                contador2++;
            } while (contador2 < 6);
                break;
                
            case 4:
            do {
                int contadorInterno = 0;
                
                do {
                    if (contadorInterno == 0) {
                        printf("O Bispo se moveu para Baixo\n");
                    } else if (contadorInterno == 1) {
                        printf("O Bispo se moveu para Direita\n");
                    }
                    contadorInterno++;
                } while (contadorInterno < 2);
        
                contador2++;
            } while (contador2 < 6);
                break;
            
            default:
                printf("Movimento inválido.\n");
                contador2 = 5;
                break;
            }
            break;

        case 3:
        printf("A opção escolhida foi Rainha, Escolha para onde ela deve andar:\n");
        printf("Você pode escolher ate 2 movimentos\n");
        printf("Exemplo: Cima,Baixo\n");
        scanf("%s", &Rainha);
        
        for (contador2 = 1; contador2 <= 8; contador2++)
{
    printf("A Rainha se moveu para %s\n", Rainha);
}
            break;

    case 4:
        printf("A opção escolhida foi Cavalo, Escolha para onde ele deve andar:\n");
    printf("1. 2 Casa Para Cima e 1 para Direita\n");
    printf("2. 2 Casa Para Cima e 1 para Esquerda\n");
    printf("3. 2 Casa Para Baixo e 1 para Direita\n");
    printf("4. 2 Casa Para Baixo e 1 para Esquerda\n");
    scanf("%d", &movimento);
    switch (movimento) {
        case 1:
        for (contador = 0, contador2 = 2; contador < contador2; contador++, contador2--) {
            for (int i = 0; i < 2; i++) {
                printf("O Cavalo se moveu para Cima\n");
            }
            printf("O Cavalo se moveu para Direita\n");
        }
        break;
        case 2:
        for (contador = 0, contador2 = 2; contador < contador2; contador++, contador2--) {
            for (int i = 0; i < 2; i++) {
                printf("O Cavalo se moveu para Cima\n");
            }
            printf("O Cavalo se moveu para Esquerda\n");
        }
        break;
        case 3:
        for (contador = 0, contador2 = 2; contador < contador2; contador++, contador2--) {
            for (int i = 0; i < 2; i++) {
                printf("O Cavalo se moveu para Baixo\n");
            }
            printf("O Cavalo se moveu para Direita\n");
        }
        break;
        case 4:
        for (contador = 0, contador2 = 2; contador < contador2; contador++, contador2--) {
            for (int i = 0; i < 2; i++) {
                printf("O Cavalo se moveu para Baixo\n");
            }
            printf("O Cavalo se moveu para Esquerda\n");
        }
        break;

        default:
            printf("Movimento inválida.\n");
            break;
    }
 break;
}
    return 0;
}