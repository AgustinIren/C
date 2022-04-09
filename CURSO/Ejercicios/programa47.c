#include <stdio.h>
#include <conio.h>



int main(){
	
	int contador = 0;
	int promedio = 0;
	int suma =0;
	int valor;
	
	do{
		
		printf("Ingrese un valor");
		scanf("%i", &valor);
		if(valor!=0){
		suma = suma + valor;
		contador++;
			
		}
		
	} while(valor!=0);
	
	if(contador!=0){	
	promedio = suma / contador;
	printf("El promedio de los numeros ingresados es: %i ", promedio);
	
	}
		else{
			
		printf("El promedio de los numeros ingresados es: %i ", promedio);
	}
	


	getch();
	
	return 0;
	
	
}
