#include <stdio.h>

void mayorElementoDeArray(int vector[10]){

    int mayor = vector[0];
    int pos;

    for(int i=0; i<10; i++){
        if(vector[i]>mayor){
            mayor = vector[i];
            pos = i;
        }
    }
    printf("El mayor elemento es %i, en la posicion %i", mayor, pos+1);
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
    mayorElementoDeArray(vector);

    return 0;


}
