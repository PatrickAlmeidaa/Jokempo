#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "jokempo.h"


int main(){
    char continuar;
    Jokempo* user;
    Jokempo* cpu;

    cria_jokempo(&user);
    cria_jokempo(&cpu);
    jogar_jokempo(&user, &cpu, 5);

    while (scanf("%c", &continuar)){
        switch (continuar)
        {
        case 'p':
            resultado_jogo(&user, &cpu);
            libera_jokempo(&user);
            libera_jokempo(&cpu);
            exit(1);
            break;
        case 'c':
            jogar_jokempo(&user, &cpu, 2);
            break;
        }
    }
}