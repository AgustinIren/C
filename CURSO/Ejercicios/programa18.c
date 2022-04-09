int main(){

int num1, num2, num3;

printf("Ingrese el primer numero");
scanf("%d", &num1);

printf("Ingrese el segundo numero");
scanf("%d", &num2);


printf("Ingrese el tercer numero");
scanf("%d", &num3);


if(num1 < 10 && num2< 10 && num3 < 10){

    printf("Todos los numeros son menores a 10");
}

getch();
return 0;

}
