#include <stdio.h>
#include <conio.h>


int compararValores(int lado1, int lado2){
	if(lado1 > lado2){
		return lado1;
	}
	else{
		return lado2;
	}
}



int main(){
	
	int valor1;
	int valor2;
	int elMayor;
	
	printf("Ingrese el primer valor\n");
	scanf("%i", &valor1);
	
	printf("Ingrese el segundo valor\n");
	scanf("%i", &valor2);
	
	elMayor = compararValores(valor1, valor2);
	printf("El valor mayor es %i", elMayor);
	
	getch();
	
	return 0;
}
