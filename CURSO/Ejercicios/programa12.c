int main(){


int numero;

printf("Ingrese un numero");

scanf("%d", &numero);

if(numero == 0){
    printf("El numero es nulo");
}
else{
    if(numero>0){
    printf("EL numero es positivo");

    }

    else{
    printf("El numero es negativo");
    }
}

getch();

return 0;


}
