int main(){

int suma = 0;
int promedio = 0;
int contador = 1;
int valorIngresado;

while(contador <= 10){
printf("Ingrese un numero");
scanf("%i", &valorIngresado);
suma = suma + valorIngresado;
contador = contador + 1;
}

promedio = suma / 10;

printf("La suma final de los 10 numeros es: %i\n", suma);
printf("El promedio final de los 10 numeros es: %i\n", promedio);

getch();
return 0;

}
