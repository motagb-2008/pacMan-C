// As guardas de inclusão evitam que o cabeçalho seja lido duas vezes
#ifndef MAPA_H
#define MAPA_H

// Constantes globais corretas (sem "int" e sem ";")
#define MAX_LINHAS 100
#define MAX_COLUNAS 100
void carregar_cenario(char mapa[MAX_LINHAS][MAX_COLUNAS], char *caminhoArquivo);

#endif