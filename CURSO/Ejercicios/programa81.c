#include <stdio.h>

void cargarVector(int vec[5]){

    for(int i=0; i<5; i++){
        printf("Ingrese elemento\n");
        scanf("%i", &vec[i]);
    }
}


void mostrar(int vec[5]){

    for(int i=0; i<5; i++){
        printf("Contenido del vector en la posicion %i es %i\n", i+1, vec[i]);
    }
}


int main(){

int vec[5];

cargarVector(vec);
mostrar(vec);

return 0;

}
