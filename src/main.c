#include <stdio.h>
#include <string.h>
#include "mapa.h"


int main() {
     // 1. Criamos a matriz que vai guardar o labirinto[cite: 1]
    char meu_labirinto[MAX_LINHAS][MAX_COLUNAS];
    
    // 2. Chamamos a função passando a matriz e o caminho do arquivo
    carregar_cenario(meu_labirinto, "data/mapa_2.txt");
    
    return 0;

    return 0;
}