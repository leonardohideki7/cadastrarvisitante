#include <stdio.h>
#include "cadastro.h"
#include <locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    int cadastrarLoop;
    struct Visitante visitante;


    FILE *arquivo = fopen("visitantes.txt", "w");
    if (arquivo != NULL) {
        fclose(arquivo);
    } else {
        printf("Não foi possível abrir.\n");
        return 1;
    }
    do {
    printf("\n---------------------------");
    printf("\nCadastro do visitante\n");
    registrarVisitante(&visitante);

    printf("\n=========================");
    printf("\nInformações do visitante:\n");
    printf("Nome - %s\n", visitante.nome);
    printf("CPF - %s\n", visitante.cpf);
    printf("Idade - %d\n", visitante.idade);
    printf("Tipo de Ingresso - %s\n", visitante.tipoIngresso);
    printf("=========================\n");

    printf("\nHá mais algum visitante a ser cadastrado?\n");
    printf("Digite a tecla 1 se sim. Digite 2 se não:");
    scanf(" %d", &cadastrarLoop);

    } while (cadastrarLoop == 1);

}
