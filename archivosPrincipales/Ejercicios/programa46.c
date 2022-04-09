#include<stdio.h>
#include<conio.h>

int main(){
	
	
	int numero;

	do{
		printf("Ingrese un numero distinto a 0 para mostrarlo por pantalla\n");
		scanf("%i",&numero);

		if(numero>=100){
			printf("Se ingreso un numero de 3 cifras");
		}
		else{
			if(numero>=10){
				printf("Se ingreso un numero de 2 cifras");
			}
			else{
				printf("Se ingreso un numero de 1 cifra");
			}
		}

	

	} while(numero!=0);
		
	

	return 0;
	
}

