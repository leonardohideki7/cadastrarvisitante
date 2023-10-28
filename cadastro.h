#include <locale.h>
#include <stdbool.h>
#define CPF_TAMANHO 12
#define IDADE_TAMANHO 3
typedef struct cadastro Cadastro;

struct Visitante {
    char nome[50];
    char cpf[CPF_TAMANHO];
    int idade;
    char tipoIngresso[20];
    int cadastrarLoop;
    int  localVisitante;

};

typedef struct cadastro Cadastro;

void salvarVisitanteEmArquivo(struct Visitante visitante);
struct Visitante carregarVisitanteDeArquivo();


