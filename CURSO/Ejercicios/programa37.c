int main(){

int numero;
int multiplosDe3 = 0;
int multiplosDe5 = 0;

for(int i = 1; i<=10; i++){

    printf("Ingrese un numero");
    scanf("%i", &numero);

    if(numero%3==0){
        multiplosDe3++;

    }
    if(numero%5==0){
        multiplosDe5++;
        }

}

printf("Hubo %d multiplos de 3", multiplosDe3);

printf("Hubo %d multiplos de 5", multiplosDe5);

getch();

return 0;

}
