#include <stdio.h>
#include <conio.h>


int mayorEntreDosNumeros(int num1, int num2){
	
		if(num1>num2){
			return num1;
		}
		else {
			return num2;
		}
}


int main(){
	
	int valor1;
	int valor2;
	int resultado;
	
	printf("Ingrese la carga del primer valor:\n");
	scanf("%i", &valor1);
	printf("Ingrese la carga del segundo valor:\n");
	scanf("%i", &valor2);
	resultado = mayorEntreDosNumeros(valor1, valor2);
	printf("El mayor entre ellos es %i", resultado);
	
	getch();
	
	return 0;
	
	
}


