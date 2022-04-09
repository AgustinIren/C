int main(){

int num1, num2, num3;


printf("Ingrese el primer numero");

scanf("%d",&num1);


printf("Ingrese el segundo numero");

scanf("%d",&num2);

printf("Ingrese el tercero numero");

scanf("%d",&num3);


if(num1>num2){

    if(num1>num3){

        printf("El numero 1 es el mayor");

    }

    else{
        printf("El numero 3 es el mayor");

    }

}

else{
    if(num2>num3){
            printf("El mayor es el 2");

    }
    else{
            printf("EL mayor es el 3");

    }


}


getch();

return 0;


}
