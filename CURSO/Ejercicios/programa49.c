int main(){
	
	int contador = 0;
	int promedio = 0;
	int suma =0;
	int valor;
	
	do{
		
		printf("Ingrese un valor");
		scanf("%i", &valor);
		if(valor!=9999){
		suma = suma + valor;
		contador++;
		}
		
	} while(valor!=9999);
	
	printf("Se acumulo un valor total de %i", suma);
	
	if(contador==0){
		printf("No se ingresaron numeros");
	}
	else{
		if(contador>0){
			printf("El contador es positivo");
		}
		else{
		printf("El contador es negativo");
		}
		
	}
	
	getch();
	
	return 0;
}
	
