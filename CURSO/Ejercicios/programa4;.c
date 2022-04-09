int main(){

    int num1, num2, num3, num4, suma, multiplicacion;
    printf("Ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i",&num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%i",&num4);

    suma = num1 + num2;
    multiplicacion = num3 * num4;

    printf("La suma de los primeros dos numeros es %i \n", suma );
    printf("La multiplicacion de los ultimos dos numeros es %i ", multiplicacion);

    return 0;

}
