int main(){
	
	int edad1;
	int edad2;
	char sexo1;
	char sexo2;
	
	
	printf("Ingrese la primer edad");
	scanf("%i", &edad1);
	printf("Ingrese la segunda edad");
	scanf("%i", &edad2);
	
	printf("Ingrese el primer sexo");
	scanf(" %c", &sexo1);
	printf("Ingrese el segundo sexo");
	scanf(" %c", &sexo2);
	
	if(edad1>edad2){
		printf("La persona 1 de sexo %c y  %d anios es mas grande que la persona 2 de sexo %c y %d anios", sexo1,edad1, sexo2, edad2);
	}
	else{
		printf("La persona 2 de sexo %c y  %d anios es mas grande que la persona 1 de sexo %c y %d anios", sexo2,edad2, sexo1, edad1);
	}
	
	getch();
	
	return 0;
}
