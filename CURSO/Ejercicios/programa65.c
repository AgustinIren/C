
#include <stdio.h>
#include <conio.h>

int main(){
	
	int edad1;
	int edad2;
	char nombre1[21];
	char nombre2[21];
	
	printf("Ingrese el primer nombre");
	gets(nombre1);
	printf("Ingrese la primer edad");
	scanf("%i", &edad1);
	fflush(stdin);
	
	
	printf("Ingrese el segundo nombre");
	gets(nombre2);
	printf("Ingrese la segunda edad");
	scanf("%i", &edad2);	
	fflush(stdin);
	
	
	if(edad1>edad2){
		printf("La persona %s de %d anios es mas grande que la %s de %d anios", nombre1,edad1, nombre2, edad2);
	}
	else{

		printf("La persona %s de %d anios es mas grande que la %s de %d anios", nombre2,edad2, nombre1, edad1);
	}
	
	getch();
	
	return 0;
		
	}
	
	
	

