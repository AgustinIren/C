

int main(){

int pares = 0;
int impares = 0;
int cantidad;
int contador = 1;
int valor;

    printf("Ingrese la cantidad de valores a cargar");
    scanf("%i", &cantidad);

    while(contador <= cantidad){
        printf("Ingrese el valor ");
        scanf("%i", &valor);

        if(valor%2==0){
            pares = pares + 1;
        }
        else{
            impares = impares + 1;
        }

        contador = contador + 1;
    }

printf("Hubo %i numeros pares\n", pares);
printf("Hubo %i numeros impares\n", impares);

    getch();
    return 0;

}
