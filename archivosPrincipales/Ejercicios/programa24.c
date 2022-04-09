int main(){

int numero;
int contador = 1;

printf("Ingrese un numero");
scanf("%i", &numero);

while(contador < numero){

    printf("Se encontro el valor %i\n", contador);
    contador = contador + 1;

}

getch();
return 0;

}
