# Jokempo
Jogo simples de jokempo

# Enunciado
Implemente uma versão simplificada do jogo conhecido como Jokempô ou pedra, papel, tesoura. Neste jogo, o
usuário e o computador escolhem entre pedra, papel ou tesoura. Sabendo que pedra ganha de tesoura, papel ganha
de pedra e tesoura ganha de papel, exiba na tela o ganhador das n rodadas: usuário ou computador. Empates também
devem ser contabilizados. O número de rodadas, n, pode ser alterado dinamicamente, sendo iniciado com 5 e pode
ser acrescido de duas em duas partidas. Ao terminar um conjunto de partidas, o usuário poderá escolher continuar ou
parar o jogo. Para essa implementação, assuma que o número 0 representa a pedra, 1 representa papel e 2 representa
tesoura. Observação: seu algoritmo deve ser honesto: a escolha feita pelo computador não pode ser realizada baseada
na escolha do usuário e vice-versa.

# Entrada e Saída
Inicialmente, para cada entrada do usuário (0 para pedra, 1 para papel ou 2 para tesoura), haverá uma saída
indicando a jogada do computador (0 para pedra, 1 para papel ou 2 para tesoura) e o resultado da jogada (0 para
empate, 1 caso o usuário tenha vencido ou −1 caso o usuário tenha perdido). Ao final das 5 jogadas inciais, a saída será
composta pelo placar numero_partidas_usuario numero_partidas_computador. O usuário poderá escolher entre
parar o jogo (p) ou continuar (c). Caso o usuário escolha continuar, serão executadas mais duas rodadas, ao final das
quais será exibido o placar atualizado e assim sucessivamente. Se a escolha for parar, será exibido quem é o vencedor:
usuário ou computador.
