#include <stdio.h>
int calcularAreaQuadrada(int lado) {
    return lado * lado;
}

int main(){
    int lado = 5;
    int area = calcularAreaQuadrada(lado);

    printf("A area do quadrado é: %d\n", area);
    return 0;
}
