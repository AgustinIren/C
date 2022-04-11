#include<stdio.h>


void cargarMatriz(int matriz[5][3]){
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Ingrese el valor para la columna %i fila %i: ", j+1,i+1);
            scanf("%i", &matriz[i][j]);
        }

    }

}

void imprimirMatriz(int matriz[5][3]){
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%i",matriz[i][j]);
        }
        printf("\n");
}
}

void intercambiarPrimeraColumna(int matriz[5][3]){
    int aux;

        for(int j=0; j<5; j++){
            aux=matriz[j][0];
            matriz[j][0]=matriz[j][1];
            matriz[j][1] = aux;
        }
}



int main(){

 int matriz[5][3];
 cargarMatriz(matriz);
 imprimirMatriz(matriz);
 intercambiarPrimeraColumna(matriz);
         printf("\n");
imprimirMatriz(matriz);


return 0;

}

