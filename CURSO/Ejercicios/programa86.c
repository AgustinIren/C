#include <stdio.h>


void cargarMatriz(int matriz[5][3]){
    for(int i=0; i<5;i++){
    for(int j=0; j<3; j++){
           printf("Ingrese un valor para la fila %i columna %i:\n",i+1,j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
}

void mostrarPrimeraFila(int matriz[5][3]){
printf("Los elementos de la primera fila son:");
    for(int i=0; i<5; i++){
        printf("%i",matriz[0][i]);
    }
}


void mostrarPrimeraColumna(int matriz[5][3]){
printf("Los elementos de la primera columna son:");
    for(int j=0; j<3; j++){
        printf("%i",matriz[j][0]);

}
}

void mostrarMatriz(int matriz[5][3]){
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%i",matriz[i][j]);
        }
        printf("\n");
    }
}



int main(){

    int matriz[5][3];

    cargarMatriz(matriz);
    mostrarMatriz(matriz);
    mostrarPrimeraFila(matriz);
    mostrarPrimeraColumna(matriz);


return 0;
}
