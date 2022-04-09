int main(){

int cantidad;
int numerosGrandes=0;
int numero;

printf("Ingrese la cantidad de numeros a evaluar");
scanf("%i",&cantidad);

for(int i = 1; i<=cantidad; i++){

printf("Ingrese el numero");
scanf("%i",&numero);

    if(numero>=1000){
    numerosGrandes++;
    }
}

printf("Hubo %i numeros mayores a 1000", numerosGrandes);

getch();
return 0;



}
