#include <stdio.h>

void calcularSuperficie(int lado){
    int superficie = lado * lado;
    printf("La superficie del cuadrado es %i\n", superficie);
}


void calcularPerimetro(int lado){
    int perimetro = lado * 4;
    printf("El perimetro del cuadrado es %i\n", perimetro);
}




int main(){

    for(int i = 10; i<=20; i++){
        calcularPerimetro(i);
        calcularSuperficie(i);
    }


return 0;
}
