#include <stdio.h>
#include <conio.h>


int calcularSuperficie(int lado){
	
	int superficie;
	superficie = lado * lado; 
	return superficie;
}



int main(){
	
	int lado;
	int superficie;
	
	printf("Ingrese el lado del cuadrado\n");
	scanf("%i", &lado);
	superficie = calcularSuperficie(lado);
	printf("La supercie del cuadrado es %i", superficie);
	
	getch();
	
	return 0;
}
