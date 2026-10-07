Pac-Man em C - Projeto UERJ

Este projeto é uma implementação simplificada do jogo clássico Pac-Man, desenvolvido em linguagem C para a disciplina de Construção de Algoritmos (UERJ).

🎯 Funcionalidades

Leitura de mapas a partir de arquivos de texto (aleatoriedade de cenários).

Movimentação do jogador (Teclas W, A, S, D).

Contagem de pontos coletados e restantes.

Sistema de colisão e condições de vitória/derrota.

Dois níveis de dificuldade:

Fácil: Fantasmas se movem aleatoriamente.

Difícil: Fantasmas perseguem ativamente o jogador.

📂 Estrutura de Diretórios Sugerida

Para manter o código limpo e modularizado, a estrutura do projeto foi dividida da seguinte forma:

meu_pacman/
│
├── data/                   # Arquivos de texto contendo os mapas (ex: mapa1.txt, mapa2.txt)
│
├── include/                # Arquivos de cabeçalho (.h)
│   ├── config.h
│   ├── core.h
│   └── entidades.h
│
└── src/                    # Código-fonte (.c)
    ├── main.c              # Ponto de entrada e Menu Principal
    ├── config/
    │   └── mapa_loader.c   # Lógica para ler e carregar arquivos .txt
    ├── core/
    │   └── motor_jogo.c    # Lógica de renderização, loop principal e colisões
    └── entidades/
        ├── jogador.c       # Lógica de movimentação do Pac-Man e coleta de pontos
        └── fantasmas.c     # IA dos fantasmas (Fácil e Difícil)


🚀 Como Compilar

Para compilar o projeto inteiro, você deve referenciar todos os arquivos .c no GCC. Exemplo (estando na pasta raiz do projeto):

gcc src/main.c src/config/mapa_loader.c src/core/motor_jogo.c src/entidades/jogador.c src/entidades/fantasmas.c -I include -o pacman


(A flag -I include diz ao compilador para procurar os arquivos .h na pasta include)