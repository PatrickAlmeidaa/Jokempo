#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jokempo.h"

struct jokempo{
    int v;
    int d;
    int e;
    int num_partidas;
    int escolha;
};

void cria_jokempo(Jokempo** jogo){
    *jogo = malloc(sizeof(Jokempo));
    (*jogo)->v = 0;
    (*jogo)->d = 0;
    (*jogo)->e = 0;
    (*jogo)->num_partidas = 0;
}

void libera_jokempo(Jokempo** jogo){
    free(*jogo);
}

void atualiza_jokempo(Jokempo** user, Jokempo** cpu, int p1, int p2){
    if (p1 > p2){
        (*user)->v += 1;
        (*cpu)->d += 1;
        (*user)->num_partidas += 1;
        (*cpu)->num_partidas += 1;
    }else if (p2 > p1){
        (*cpu)->v += 1;
        (*user)->d += 1;
        (*cpu)->num_partidas += 1;
        (*user)->num_partidas += 1;
    }else if (p1 == p2){
        (*cpu)->e += 1;
        (*user)->e += 1;
        (*cpu)->num_partidas += 1;
        (*user)->num_partidas += 1;
    }
}

void jogar_jokempo(Jokempo** user, Jokempo** cpu, int n){
    int p1, p2;
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        scanf("%d", &((*user)->escolha));
        (*cpu)->escolha = rand() % 3;
        
        if ((*user)->escolha == 0 && (*cpu)->escolha == 2){
            p1 = 1;
            p2 = 0;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d 1\n", (*cpu)->escolha);
        }else if ((*user)->escolha == 2 && (*cpu)->escolha == 0){
            p1 = 0;
            p2 = 1;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d -1\n", (*cpu)->escolha);
        }else if ((*user)->escolha == 1 && (*cpu)->escolha == 0){
            p1 = 1;
            p2 = 0;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d 1\n", (*cpu)->escolha);
        }else if ((*user)->escolha == 0 && (*cpu)->escolha == 1){
            p1 = 0;
            p2 = 1;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d -1\n", (*cpu)->escolha);
        }else if ((*user)->escolha == 2 && (*cpu)->escolha == 1){
            p1 = 1;
            p2 = 0;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d 1\n", (*cpu)->escolha);
        }else if ((*user)->escolha == 1 && (*cpu)->escolha == 2){
            p1 = 0;
            p2 = 1;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d -1\n", (*cpu)->escolha);
        }else if ((*user)->escolha == (*cpu)->escolha){
            p1 = 1;
            p2 = 1;
            atualiza_jokempo(user, cpu, p1, p2);
            printf("%d 0\n", (*cpu)->escolha);
        }
        
    }
}

void resultado_jogo(Jokempo** user, Jokempo** cpu){
    printf("%d %d\n", (*user)->v, (*cpu)->v);
    if ((*user)->v > (*cpu)->v){
        printf("voce ganhou.\n");
    }else printf("a cpu ganhou.\n");
}