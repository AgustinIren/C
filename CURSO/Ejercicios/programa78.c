#include <stdio.h>
#include <conio.h>



void carga(int vec[5]){
	
	int i;
	
	for(i=0; i<5; i++){
		printf("Ingrese el valor %i para el vector",i+1);
		scanf("%i", &vec[i]);
	}
}

void imprimir(int vec[5]){
	
	int i;
	
	for(i=0; i<5; i++){
		printf("Se encontro en la posicion %i el valor %i",i+1,vec[i]);
	}
}

int main(){
	
	int vector[5];
	
	carga(vector);
	imprimir(vector);
	
	getch();
	return 0;
	
	
}
