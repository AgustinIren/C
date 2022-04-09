int main(){
	
	int valor1;
	int valor2;
	int suma = 0;
	int suma2 = 0;
	char resp;
	
		printf("Ingrese un valor");
		scanf("%i", &valor1);
		
		suma = valor1;
	
	do{
		
		printf("Ingrese otro valor");
		scanf("%i", &valor2);
		suma = suma + valor2;
		printf("La suma es: %i\n", suma);
		printf("Desea cargar otro valor?:\n");
		scanf(" %c", &resp);
		
	}while (resp!= 'n');
	
	
	return 0;
	
	
}
