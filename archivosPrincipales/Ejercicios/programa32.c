int main(){

int suma1 = 0;
int suma2 = 0;
int valor;
int contador1 = 1;
int contador2 = 1;

while(contador1 < 15){
    printf("Ingrese un valor");
    scanf("%i", &valor);
    suma1 = suma1 + valor;
    contador1 = contador1 + 1;
}

while(contador2<15){
printf("Ingrese un valor para la segunda lista");
scanf("%i", &valor);
suma2 = suma2 + valor;
contador2 = contador2 + 1;
    }

    if(suma1 > suma2){
        printf("La lista con el acumulado mas grande es la primera");
    }
    else{
            if(suma1== suma2){
            printf("Las listas son iguales");
    }
        else{
        printf("La lista con el acumulado mas grande es la segunda");
    }

    }
    getch();
    return 0;


}



