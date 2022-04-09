#include <stdio.h>
#include <conio.h>



int main(){
	
int cuenta;
float saldo;
float suma = 0;
	
	
	do{
		
		printf("Ingrese el numero de cuenta:");
		scanf("%i", &cuenta);
		
		if(cuenta>=0){
		printf("Ingrese saldo");
		scanf("%f", &saldo);
		
			if(saldo>0){
				printf("Saldo acreedor");
				suma = suma + saldo;
			}
			else{
				if(saldo<0){
					printf("Saldo deudor");
				}
				else{
					
					printf("Saldo nulo");
				}
				
				
			}
		
}


	} while(cuenta>=0);
	
	
	printf("Total de saldo de acreedores %f", suma);
	
	getch();
	
	return 0;
	
}
