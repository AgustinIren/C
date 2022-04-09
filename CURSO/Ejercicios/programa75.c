#include <stdio.h>
#include <conio.h>


void calcularPerimetro(int lado){
	
	int perimetro;
	perimetro = lado*4;
	printf("El prerimetro del cuadrado de lado %i es %i\n", lado, perimetro);
}


void calcularSuperficie(int lado){
	
	int superficie;
	superficie = lado*lado;
	printf("La superficie del cuadrado de lado %i es %i\n", lado, superficie);
}



int main(){
	
	int i;
	
	for(i=10; i<=20; i++){
		calcularSuperficie(i);
		calcularPerimetro(i);
		printf("-------------\n");
	}	
	
	getch();
	return 0;
	
}
