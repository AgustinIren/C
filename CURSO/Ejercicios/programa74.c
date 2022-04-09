#include<stdio.h>
#include<conio.h>



void calcularSueldo(float horas, float costo){
	
	float sueldo =0;
	sueldo = horas*costo; 
	printf("El sueldo es de %f ", sueldo);
}


void cargaDeDatos(){
	
	float costoHora;
	float cantidadHoras; 
	char opcion;
	float salario =0;
	do{
		
	printf("Ingrese la cantidad de horas trabajadas\n");
	scanf("%f", &cantidadHoras);
	printf("Ingrese el costo de la hora\n");
	scanf("%f", &costoHora);
	calcularSueldo(cantidadHoras,costoHora);
	printf("Desea calcular mas sueldos\n?");
	scanf(" %c", &opcion);
	} while(opcion=='s');
}



int main(){
	
	
	cargaDeDatos();
	
	getch();
	
	return 0;
	
	
	
}


