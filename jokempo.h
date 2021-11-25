#ifndef jokempo_h
#define jokempo_h

#include <stdio.h>

typedef struct jokempo Jokempo;

void cria_jokempo(Jokempo** jogo);
void libera_jokempo(Jokempo** jogo);
void atualiza_jokempo(Jokempo** user, Jokempo** cpu, int p1, int p2);
void jogar_jokempo(Jokempo** user, Jokempo** cpu, int n);
void resultado_jogo(Jokempo** user, Jokempo** cpu);

#endif