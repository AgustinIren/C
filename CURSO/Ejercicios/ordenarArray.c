#include <stdio.h>


void cargarVector(int vec[10]){


    for(int i=0; i<10; i++){
        printf("Ingrese la posicion %i del vector \n", i+1);
        scanf("%i", &vec[i]);
    }
}



void ordenar(int numeros[10]){
    for(int k=0; k<=10; k++){
        for(int i=0; i<=10; i++){
            if(numeros[i]<numeros[i+1]){   // cambiar el signo para ordenar mayor-menor
            int aux = numeros[i];           //basicamente todo este for hace un intercambio
            numeros[i] = numeros[i+1];
            numeros[i+1] = aux;
            }
        }
    }
}


void imprimir(int vector[10]){
    for(int i=0; i<=10; i++){
        printf("Se encontro el valor %i\n", vector[i]);
    }

}


int main(){


    int vector[10];
    cargarVector(vector);
    ordenar(vector);
    imprimir(vector);


return 0;

}
