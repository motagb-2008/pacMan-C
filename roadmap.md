Roadmap de Desenvolvimento (Passo a Passo)

Siga esta ordem para evitar frustrações. Teste cada etapa exaustivamente antes de passar para a próxima.

Fase 1: Fundação e Carregamento (Arquivos main.c e mapa_loader.c)

[ ] Crie a estrutura de pastas e os arquivos iniciais vazios.

[ ] Defina as structs básicas no core.h.

[ ] Crie 2 ou 3 arquivos .txt de mapas na pasta data/.

[ ] Implemente a função de ler o arquivo .txt e imprimir a matriz na tela (printf).

[ ] Identifique, durante a leitura, onde está o 'P', os 'G's e conte os pontos '.'.

Fase 2: O Pac-Man Vive (jogador.c e motor_jogo.c)

[ ] Implemente o loop principal no main.c (while(jogo_rodando) { ... }).

[ ] Capture a tecla do usuário (usando a dica do <conio.h> ou <termios.h> para não precisar dar Enter).

[ ] Implemente a função moverJogador(). Teste se ele bate na parede e para.

[ ] Faça o jogador "comer" os pontos: substitua o '.' por ' ' (espaço) e atualize os contadores.

[ ] Atualize a função de renderizar para mostrar o placar.

Fase 3: Fantasmas - Modo Fácil (fantasmas.c)

[ ] Implemente a lógica de movimento aleatório para um único fantasma.

[ ] Crucial: Lembre-se de salvar o item que o fantasma está pisando! Quando ele sai de cima de um ponto '.', ele deve recolocar o '.', não um espaço vazio.

[ ] Expanda a lógica para o vetor de múltiplos fantasmas.

Fase 4: O Menu e o Modo Difícil (Integração)

[ ] No main.c, antes de carregar o mapa, crie um menu simples de "1- Fácil / 2- Difícil".

[ ] Implemente a lógica de perseguição dos fantasmas (comparação de eixos) no fantasmas.c.

[ ] Teste exaustivamente se os fantasmas não travam em cantos no modo difícil.

Fase 5: Regras de Jogo e Polimento Final

[ ] Implemente a checagem de colisão (Jogador e Fantasma no mesmo 'X' e 'Y').

[ ] Implemente a checagem de vitória (Pontos restantes == 0).

[ ] Adicione telas de "Fim de Jogo" (Você Venceu / Game Over).

[ ] Revise o código, coloque o nome da dupla como comentário no main.c (conforme exigido pelo professor).