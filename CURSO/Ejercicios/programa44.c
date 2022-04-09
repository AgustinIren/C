int main(){

int valor;
int suma = 0;
int negativos = 0;
int positivos = 0;
int multiplos = 0;

for(int i=1; i<=10; i++){

printf("Ingrese un valor");
scanf("%i", &valor);

if(valor<0){
    negativos++;
}
else{
    positivos++;

}

if(valor%15== 0){
    multiplos++;
}

if(valor% 2 == 0){
    suma = suma + valor;
}

}

printf("La cantidad de numeros negativos fueron %i\n", negativos);

printf("La cantidad de numeros positivos fueron %i\n", positivos);

printf("La cantidad de numeros multiplos de 15 fueron %i\n", multiplos);

printf("La suma de los pares fueron %i\n", suma);

getch();

return 0;

}



