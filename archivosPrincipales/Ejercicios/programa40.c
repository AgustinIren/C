int main(){

int numero;
int suma = 0;

for(int i =1; i<=10; i++){

    printf("Ingrese un numero");
    scanf("%i", &numero);
    if(i>7){
        suma = suma + numero;
    }
}

printf("La suma de los ultimo 3 numeros es %i", suma);

getch();
return 0;
}
