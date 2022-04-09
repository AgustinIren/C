int main(){

int numero;
int termino =0;

printf("Ingrese un numero para saber su tabla de multiplicar");
scanf("%i", &numero);

for(int i=1; i<=13; i++){

    printf("%i\n",termino);
    termino = i*numero;
}

getch();
return 0;

}
