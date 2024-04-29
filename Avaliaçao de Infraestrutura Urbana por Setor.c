#include <stdio.h>

#define setores 5
#define estruturas 5

int main() {
    int avaliacoes[setores][estruturas];
    int setor, estrutura;
    int nomessetores[setores] = {1, 2, 3, 4, 5};
    const char* nomesestruturas[estruturas] = {"Esgoto", "Lazer", "Coleta de lixo", "Iluminação", "Segurança"};

    for (setor = 0; setor < setores; setor++) {
        printf("Setor %d\n", nomessetores[setor]);
        for (estrutura = 0; estrutura < estruturas; estrutura++) {
            printf("Digite a nota de 0 a 5 para a estrutura %s: ", nomesestruturas[estrutura]);
            scanf("%d", &avaliacoes[setor][estrutura]);
            if(avaliacoes[setor][estrutura]>=6){
                printf("Nota invalidade\n");
            }
        }
        printf("\n");
    }

    float notaMedia[setores][estruturas];
    float somaNotas[estruturas] = {0};

    for (estrutura = 0; estrutura < estruturas; estrutura++) {
        for (setor = 0; setor < setores; setor++) {
            somaNotas[estrutura] += avaliacoes[setor][estrutura];
        }
    }

    for (estrutura = 0; estrutura < estruturas; estrutura++) {
        for (setor = 0; setor < setores; setor++) {
            notaMedia[setor][estrutura] = somaNotas[estrutura] / setores;
        }
    }
    printf("=== Nota média por estrutura, por setor ===\n");

    for (setor = 0; setor < setores; setor++) {
        printf("Setor %d - ", nomessetores[setor]);

        if (nomessetores[setor] == 1) {
            printf("Jardim América\n");
        } else if (nomessetores[setor] == 2) {
            printf("Novo Mundo\n");
        } else if (nomessetores[setor] == 3) {
            printf("Grande Retiro\n");
        } else if (nomessetores[setor] == 4) {
            printf("Parque Ateneu\n");
        } else if (nomessetores[setor] == 5) {
            printf("Jardim Goiás\n");
        } else {
            printf("Setor desconhecido\n");
        }

        for (estrutura = 0; estrutura < estruturas; estrutura++) {
            printf("%s: Nota média %.2f\n", nomesestruturas[estrutura], notaMedia[setor][estrutura]);
        }

        printf("\n");
    }

    return 0;
}