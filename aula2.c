#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese" );

    char produtoA[30] = "produto A";
    char produtoB[30] = "produto B";
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 1000;
    float valorA = 10.50;
    float valorB = 20.40;
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 1500;
    float valortotalA = estoqueA * valorA;
    float valortotalB = estoqueB * valorB;

    int resultadoA, resultadoB;

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("Produto: %s\nEstoque: %u\nValor: %.2f\nEstoque mínimo: %u\nValor total: %.2f", produtoA, estoqueA, valorA, estoqueMinimoA, valortotalA);

    printf("\n\nProduto: %s\nEstoque: %u\nValor: %.2f\nEstoque mínimo: %u\nValor total: %.2f", produtoB, estoqueB, valorB, estoqueMinimoB, valortotalB);

    printf("\n\nO produto %s tem estoque minimo %d", produtoA, resultadoA);
    printf("\nO produto %s tem estoque minimo %d", produtoA, resultadoA);

    return 0;
}
