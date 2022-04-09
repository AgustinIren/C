int main(){

float numero1, numero2, suma, resta, multiplicacion, division;

printf("Ingrese el primer numero");

scanf("%f", &numero1);

printf("Ingrese el segundo numero");

scanf("%f", &numero2);


if(numero1 > numero2){
    suma = numero1 + numero2;
    resta = numero1 - numero2;
   printf("La suma es %f ", suma);
    printf("La resta es %f", resta);

}
else{

    division = numero1 / numero2;
    multiplicacion = numero1 * numero2;
    printf("La division es %f ", division);
    printf("La multipliacion es %f", multiplicacion);
}

return 0;

}
