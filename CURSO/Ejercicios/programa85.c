#include <stdio.h>

void  cargarMatriz(int matriz[3][5]){
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("Ingrese un valor para la fila %i columna %i:\n",i,j);
            scanf("%i", &matriz[i][j]);                                             //LLENA TODA LA FILA Y PASA A LA PROXIMA
        }
    }

}


void mostrarMatriz(int matriz[3][5]){
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("  %i",matriz[i][j]);
        }
        printf("\n");
    }
}


int main(){


    int matriz[3][5];

    cargarMatriz(matriz);
    mostrarMatriz(matriz);

    return 0;



}
