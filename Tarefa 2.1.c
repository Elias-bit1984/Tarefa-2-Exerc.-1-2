#include <stdio.h>

int main() {
    int visitantes = 0; // Inicializa o contador de visitantes
    int opcao;

    do {
    // Exibe o menu para o recepcionista
    printf("\nSistema de Recepção\n");
    printf("1. Registrar novo visitante\n");
    printf("2. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    // Registra um novo visitante
    visitantes++;
    printf("Visitante registrado! Total de visitantes hoje: %d\n", visitantes);
    break;
    case 2:
    printf("Sistema encerrado.\n");
    break;
    default:
    printf("Opção inválida. Tente novamente.\n");
    }
    } while (opcao != 2); // O loop continua até que a opção 2 seja selecionada

    return 0;
}