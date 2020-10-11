#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main(){
    float x1,y1,x2,y2,x3,y3, passo;
    int acum;
    char direcao;

    printf("Entre com o valor de X de P1: ");
    scanf(" %f", &x1);
    printf("Entre com o valor de Y de P1: ");
    scanf(" %f", &y1);
    printf("Entre com o valor de X de P2: ");
    scanf(" %f", &x2);
    printf("Entre com o valor de Y de P2: ");
    scanf(" %f", &y2);
    printf("Entre com o valor de X de P3: ");
    scanf(" %f", &x3);
    printf("Entre com o valor de Y de P3: ");
    scanf(" %f", &y3);

    acum=0;

    printf("Informe o valor do passo de deslocamento: ");
    scanf(" %f", &passo);

    if(x2>x1 && y2>y1 && passo>0 && x3>x1 && y3>y1 && x3<x2 && y3<y2){
        do{
            printf("\n\nInforme a direcao A S D W : ");
            scanf(" %c", &direcao);
            direcao=toupper(direcao);

            switch(direcao){
            case 'A':
                x3=x3-passo;
                printf("\nNova posicao: %.1f  %.1f", x3, y3);
                break;
            case 'S':
                y3=y3-passo;
                printf("\nNova posicao: %.1f  %.1f", x3, y3);
                break;
            case 'D':
                x3=x3+passo;
                printf("\nNova posicao: %.1f  %.1f", x3, y3);
                break;
            case 'W':
                y3=y3+passo;
                printf("\nNova posicao: %.1f  %.1f", x3, y3);
                break;

            default:
                printf("\n\n\t**Direcao Invalida**\n\nAtual posicao: %.1f  %.1f", x3, y3);
                acum--;
            }
            acum++;
        }while(x3>x1 && y3>y1 && x3<x2 && y3<y2);

        printf("\n\nForam realizados %d movimentos ate que o objeto saisse do perimetro\n\n\n", acum);
    }
    else{
        printf("\n\n**Informacao Inicial Invalida**\n\n");
    }
    return 0;
}
