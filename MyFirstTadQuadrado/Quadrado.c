#include <stdlib.h>
#include <stdio.h>
#include "Quadrado.h"
struct quadrado{
    float a;
};

Quadrado* quadrado_cria(float a){
    Quadrado* c = (Quadrado*) malloc(sizeof(Quadrado));
    if(c != NULL){
        c->a = a;
    }
    return c;

}

void quadrado_libera(Quadrado* c){
    free(c);
}

float quadrado_acessa(Quadrado* c){//perguntar se precisa desse float
    *a = c->a;
}

void quadrado_atribui(Quadrado* c, float a){
    c->a = a;
}

float quadrado_area(Quadrado* c){
    float area = (c->a)*(c->a);
    return area;
}

float quadrado_perimetro(Quadrado* c){
    float perimetro = (c->a)*4;
    return perimetro;
}
