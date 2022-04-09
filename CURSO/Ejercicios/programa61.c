int main(){
	
	int valor1;
	int valor2;
	char operador;
	int suma = 0;
	int div = 0;
	int resta = 0;
	int mult = 0;
		
	printf("Ingrese un valor");
	scanf("%i", &valor1);
	printf("Ingrese otro valor");
	scanf("%i", &valor2);

	printf("Ingrese algun operador aritmetico para informar el resultado, o N para salir");
	scanf(" %c", &operador);
	
	
		
	if(operador=='+'){
		suma = valor1 + valor2;
		printf("La suma de ambos numeros es: %i", suma);
	}
	
	if(operador=='-'){
		resta = valor1 - valor2;
		printf("La resta de ambos numeros es: %i", resta);
	}
	
	if(operador=='*'){
		mult = valor1 * valor2;
		printf("La multiplicacion de ambos numeros es: %i", mult);
	}
	
	
	if(operador=='/'){
		div = valor1 / valor2;
		printf("La division de ambos numeros es: %i", div);
	}
		


	getch();
	return 0;
	
	
	
}
