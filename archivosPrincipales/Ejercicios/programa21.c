int main(){

int sueldo, antiguedad, sueldoAPagar;

printf("Ingrese el primer numero");
scanf("%d", &sueldo);

printf("Ingrese el segundo numero");
scanf("%d", &antiguedad);


if(sueldo < 500){

    if(antiguedad >=10){

    sueldoAPagar = sueldo * 1.20;
    printf("El sueldo a pagar es %d", sueldoAPagar);

    }
    else{

    sueldoAPagar = sueldo * 1.05;
    printf("El sueldo a pagar es %d", sueldoAPagar);

    }
}
else{
        printf("El sueldo a pagar es %d", sueldo);

    }

 getch();
 return 0;
 }



