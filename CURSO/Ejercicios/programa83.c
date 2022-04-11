#include <stdio.h>



void cargarVector(int vec[10]){


    for(int i=0; i<10; i++){
        printf("Ingrese la posicion %i del vector \n", i+1);
        scanf("%i", &vec[i]);
    }
}

void ordenamientoMenorAMayor(int vec[10]){

    int ordenado = 1;

    for(int i=0; i<10; i++){
        if(vec[i+1]<vec[i]){
            ordenado=0;
            break;
        }
    }
    if(ordenado==1){
        printf("El vector SI esta ordenado de menor a mayor");
    }
    else{
        printf("El vector NO esta ordenado de menor a mayor");
}
}


int main(){

    int vector[10];
    cargarVector(vector);
    ordenamientoMenorAMayor(vector);


return 0;


}
