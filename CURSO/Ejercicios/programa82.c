
#include <stdio.h>


void cargarSueldos(float vec[6]){


    for(int i=0; i<6; i++){
        printf("Ingrese el sueldo %i\n", i+1);
        scanf("%f", &vec[i]);
    }
}

void mostrarSueldos(float vec[6]){

    for(int i=0; i<6; i++){
        printf("El sueldo %i es %f\n", i+1, vec[i]);
    }
}


int calcularGastosTotales(float vec[6]){
    float suma = 0;
    for(int i=0; i<6; i++){
    suma = suma + vec[i];
    }

    return suma;

}

int main(){

    float sueldos[6];
    float gastosTotales;
    cargarSueldos(sueldos);
    mostrarSueldos(sueldos);
    gastosTotales = calcularGastosTotales(sueldos);
    printf("Los gastos totales son de %f", gastosTotales);

    return 0;

}
