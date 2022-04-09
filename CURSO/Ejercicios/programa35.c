int main(){

int suma = 0;
int valor;
int promedio;

    for(int i=1; i<=10; i++){

        printf("Ingrese un valor");
        scanf("%i", &valor);
        suma = suma + valor;
    }

    promedio = suma / 10;

    printf("La suma es: %i\n", suma);
    printf("El promedio es; %i\n", promedio);

    getch();
    return 0;

}
