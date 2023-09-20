#include <stdio.h>
#include <stdlib.h>
#include "Quadrado.c"
#include "Quadrado.h"

int main()
{
    float area, perimetro;
    Quadrado *c = NULL;
    c = quadrado_cria(10);

    area = quadrado_area(c);
    perimetro = quadrado_perimetro(c);
    //chamou e atribuiu as funcoes
    printf("Area do quadrado: %f\nPerimetro do quadrado: %f",c);
    //depois de utilizar o ponteiros voce precisa liberar eles
    quadrado_libera(c);

    system("pause");
    return 0;
}
