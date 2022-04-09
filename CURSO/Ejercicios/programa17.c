
int main(){

int num1,num2,num3, suma, resultado;

printf("Ingrese el primer numero");
scanf("%d",&num1);

printf("Ingrese el segundo numero");
scanf("%d",&num2);

printf("Ingrese el tercer numero");
scanf("%d",&num3);


if(num1 == num2  && num2 == num3){

    suma = num1 + num2;
    resultado = suma * num3;

    printf("El resultado es %d", resultado);

}

getch();
return 0;
}
