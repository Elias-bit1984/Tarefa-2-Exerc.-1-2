#include <stdio.h>

int main() {
    float receita, despesa, saldo = 0.0f;

    while (1) {
    printf("\nAplicativo de Gestão Financeira Pessoal\n");
    printf("1. Inserir Receita e Despesa\n");
    printf("2. Exibir Saldo Atual\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    
    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    // Inserir receita
    printf("Insira o valor da receita: ");
    scanf("%f", &receita);

    // Inserir despesa
    printf("Insira o valor da despesa: ");
    scanf("%f", &despesa);

    // Atualizar o saldo
    saldo += (receita - despesa);
    printf("Receita e despesa registradas com sucesso!\n");
    break;
    
    case 2:
    // Exibir saldo atualizado
    printf("Seu saldo atual é: %.2f\n", saldo);
    break;

    case 3:
    // Sair do programa
    printf("Saindo do aplicativo...\n");
    return 0;

    default:
    printf("Opção inválida. Tente novamente.\n");
    }
    }

    return 0;
}
