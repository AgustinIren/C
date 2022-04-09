#include <stdio.h>
#include <conio.h>



int main(){
	
	float valor;
	int pesadas = 0;
	int medianas = 0;
	int chicas = 0;
	int suma =0;
	
	
	do{
		
		printf("Ingrese un valor en kg");
		scanf("%f", &valor);
		
if(valor>10.2){
	pesadas++;
	
}
else {
	
	if(valor>=9.2) {
		medianas++;
		
		}
		else{
			if(valor>0){
				chicas++;
			}
			
		}
}
		
	} while(valor!=0);
	
	suma = pesadas + medianas + chicas;
	
	printf("Hubo %i pieza grandes", pesadas);
	
	printf("Hubo %i pieza medianas", medianas);
	
	printf("Hubo %i pieza chicas", chicas);
	
	printf("Hubo un total de %i piezas", suma);
	
	getch();
	
	return 0;
	
}
	
