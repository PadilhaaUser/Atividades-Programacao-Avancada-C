#include <stdio.h>

int main() {
    float valorTotal;
    float desconto, totalComDesconto, valorParcela, comissaoVista, comissaoParcelada;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);

    desconto = 0.1 * valorTotal;
    totalComDesconto = valorTotal - desconto;

    valorParcela = totalComDesconto / 3;

    comissaoVista = 0.05 * totalComDesconto;

    comissaoParcelada = 0.05 * valorTotal;

    printf("Total a pagar com desconto de 10%%: R$ %.2f\n", totalComDesconto);
    printf("Valor de cada parcela (3x sem juros): R$ %.2f\n", valorParcela);
    printf("Comissao do vendedor (venda a vista): R$ %.2f\n", comissaoVista);
    printf("Comissao do vendedor (venda parcelada): R$ %.2f\n", comissaoParcelada);

    return 0;
}

