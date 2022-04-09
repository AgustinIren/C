#include<stdio.h>
#include<conio.h>


void presentacion(){
	
	printf("El programa carga dos valores \n");
	printf("Efectua la suma y muestra el resultado \n");
	printf("-----------------------------------\n");
}


void cargarYSumar(){
	
	int valor1, valor2;
	int suma =0;
	
	printf("Ingrese un valor");
	scanf("%i", &valor1);
	
	printf("Ingrese otro valor");
	scanf("%i", &valor2);
	
	suma = valor1 + valor2;
	
	printf("El resultado de la suma es: %i\n", suma);
}

void finalizacion(){
	
	printf("Termino el programa, gracias por usar el programa\n");
	
}



int main(){
	
	presentacion();
	cargarYSumar();
	finalizacion();
	
	getch();
	return 0;
	
	
}




