Arquitetura do Sistema e Estruturas de Dados

1. Estruturas de Dados Principais (include/core.h)

Para gerenciar o jogo de forma eficiente sem variáveis globais soltas, utilize estruturas (structs):

// Representa uma coordenada no mapa
typedef struct {
    int x;
    int y;
} Posicao;

// Representa um fantasma
typedef struct {
    Posicao pos;
    char itemAnterior; // Guarda o que estava no mapa ('.' ou ' ') antes do fantasma pisar
} Fantasma;

// Guarda o estado geral da partida
typedef struct {
    char mapa[MAX_LINHAS][MAX_COLUNAS];
    Posicao jogador;
    Fantasma fantasmas[MAX_FANTASMAS];
    int qtdFantasmas;
    int pontosColetados;
    int pontosRestantes;
    int dificuldade; // 1 = Fácil, 2 = Difícil
} EstadoJogo;


2. Divisão de Módulos (Headers)

include/config.h (Gerenciamento de Arquivos)

void carregarMapaAleatorio(EstadoJogo *jogo); -> Sorteia um arquivo .txt da pasta data/, lê as linhas, preenche a matriz jogo->mapa e inicializa as posições do jogador e dos fantasmas.

include/entidades.h (Lógica de Movimento)

void moverJogador(EstadoJogo *jogo, char direcao); -> Calcula nova posição baseada em W, A, S, D. Valida paredes e atualiza pontuação.

void moverFantasmas(EstadoJogo *jogo); -> Itera sobre o vetor de fantasmas e chama a lógica de movimento baseada na dificuldade.

include/core.h (Fluxo e Renderização)

void exibirMapa(EstadoJogo *jogo); -> Limpa o console e imprime a matriz e os pontos.

int verificarFimDeJogo(EstadoJogo *jogo); -> Retorna status de vitória, derrota ou jogo rodando.

3. Lógica da Dificuldade dos Fantasmas

A IA será decidida pela variável jogo->dificuldade.

Modo Fácil (Aleatório):
Gere um número de 0 a 3 usando rand() % 4. Cada número representa uma direção (Cima, Baixo, Esquerda, Direita). Verifique se a direção não é uma parede (#). Se for, tente outro número até achar um caminho livre.

Modo Difícil (Perseguição Básica - Eixo dominante):
A forma mais fácil de implementar perseguição sem algoritmos complexos (como A* ou Dijkstra) é a comparação de eixos:

Compare a posição do Fantasma (fx, fy) com a do Jogador (jx, jy).

Calcule a distância horizontal (|fx - jx|) e vertical (|fy - jy|).

O fantasma deve priorizar mover-se no eixo onde a distância é maior.

Exemplo: Se o jogador está muito mais para a direita do que para baixo, o fantasma tenta ir para a Direita.

Mecanismo de Destravamento: Se a direção ideal for uma parede (#), o fantasma deve "desviar", escolhendo mover-se no eixo secundário ou de forma aleatória para não ficar preso.