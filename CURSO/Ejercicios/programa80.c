#include <stdio.h>

void mayorEntre(int valor1, int valor2, int valor3){

    if(valor1>valor2 && valor1 > valor3){
        printf("El mayor es el valor 1");

    }
    else{
        if(valor2>valor3){
        printf("El mayor es el valor 2");
        }
    else
    {
            printf("El mayor es el valor 2");

    }
}
}



int main(){

int valor1,valor2,valor3;

printf("Ingrese el primer valor:\n ");
scanf("%i", &valor1);
printf("Ingrese el segundo valor:\n ");
scanf("%i", &valor2);
printf("Ingrese el tercer valor:\n ");
scanf("%i", &valor3);
mayorEntre(valor1,valor2,valor3);


return 0;
}
