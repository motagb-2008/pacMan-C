#include <stdio.h>
#include <string.h>
#include "mapa.h" // Usamos aspas duplas para importar nossos próprios .h

void carregar_cenario(char mapa[MAX_LINHAS][MAX_COLUNAS], char *caminhoArquivo){
    int qtd_linhas = 0;
    
   
    FILE *meu_arquivo = fopen(caminhoArquivo, "r"); 
    
    if (meu_arquivo == NULL) {
        printf("Erro ao carregar o mapa do caminho: %s\n", caminhoArquivo);
        return; // Interrompe a função aqui para não dar erro no fgets
    }
    
    // Lemos o arquivo linha por linha usando o fgets
    while (fgets(mapa[qtd_linhas], MAX_COLUNAS, meu_arquivo) != NULL) {
        
        // removendo o '\n' (quebra de linha) e substitui por '\0'
        mapa[qtd_linhas][strcspn(mapa[qtd_linhas], "\n")] = '\0';
        
        qtd_linhas++; 
    }
    
    fclose(meu_arquivo); 
    
    // Imprime para confirmar
    printf("Mapa carregado com sucesso (%d linhas):\n", qtd_linhas);
    for (int i = 0; i < qtd_linhas; i++) {
        printf("%s\n", mapa[i]);
    }
}

