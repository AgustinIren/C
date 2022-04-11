#include <stdio.h>


int menorElementoDeArray(int vector[10]){

    int menor = vector[0];
    int pos;

    for(int i=0; i<10; i++){
        if(vector[i]<menor){
            menor = vector[i];
            pos = i;
        }
    }
    printf("El menor elemento es %i, en la posicion %i", menor, pos+1);

    return menor;
}



void cargarVector(int vec[10]){


    for(int i=0; i<10; i++){
        printf("Ingrese la posicion %i del vector \n", i+1);
        scanf("%i", &vec[i]);
    }
}


void seRepite(int vector[10], int elemento){
    int cant = 0;

    for(int i=0; i<10; i++){
        if(vector[i]== elemento){
        cant ++;
        }
    }
    if(cant=!0){
        printf("El elemento se repite dentro del array %i veces", cant);
    }
    else{
        printf("El elemento no se repite en el array");
    }
}



int main(){

    int vector[10];
    int menor;
    cargarVector(vector);
    menor = menorElementoDeArray(vector);
    seRepite(vector, menor);

    return 0;


}
