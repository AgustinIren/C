#include <stdio.h>

void menorElementoDeArray(int vector[10]){

    int menor = vector[0];
    int pos;

    for(int i=0; i<10; i++){
        if(vector[i]<menor){
            menor = vector[i];
            pos = i;
        }
    }
    printf("El menor elemento es %i, en la posicion %i", menor, pos+1);
}


void cargarVector(int vec[10]){


    for(int i=0; i<10; i++){
        printf("Ingrese la posicion %i del vector \n", i+1);
        scanf("%i", &vec[i]);
    }
}



int main(){

    int vector[10];
    cargarVector(vector);
    menorElementoDeArray(vector);

    return 0;


}
