int main(){
	
	char respuesta;
	int valor;
	int suma = 0;
	
	do{
	printf("Ingrese un valor numerico");
	scanf("%i", &valor);
	suma = suma + valor;
	printf("Desea cargar otro valor? [s/n]" );
	scanf(" %c", &respuesta);
		}
	while(respuesta!='n');

	printf("La suma total de valores fue: %i", suma);
	getch();
	return 0;
		
	

	
	
	
}
