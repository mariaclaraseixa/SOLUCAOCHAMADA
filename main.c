#include <stdio.h>
#define VERDADEIRO 1
#define FALSO      0
#define INICIO_ARRAY 0

/**
 * Colocar comentario aqui sobre o que deveria fazer
 * Pensar em alguns testes e ver se faz o que devia fazer
 * Exemplo:
 *
 * @return
 */

int main (void)
{
    int registros,
        matriculaDeUmAluno;

    printf("Insira o total de registros:\n");
    scanf("%i", &registros);
    int chamada[registros];
    int contador;
    contador = 0; // quantos ja encontrou repetidos
    for (int i = INICIO_ARRAY; i < registros; i++) {
        printf("Digite uma matricula para posicao[%i]:",i);
        scanf("%i", &matriculaDeUmAluno);
        int achou = FALSO;
        for (int posicao = i; achou != VERDADEIRO && posicao > 0 ; posicao--)
        {
            int valorAtual = chamada[posicao];
            // printf("Comparando a matricula %d com o valor (%d) na posicao %d da chamada:",matriculaDeUmAluno,valorAtual,posicao);
            if (  valorAtual == matriculaDeUmAluno ) // ENCONTROU
            {
                contador++;
                achou = VERDADEIRO;
                printf("encontrou %d:",contador);
            }

        }
        chamada[i] = matriculaDeUmAluno;
    }
}