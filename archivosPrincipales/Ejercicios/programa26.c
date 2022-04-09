int main(){

int piezasAProcesar;
int contador = 1;
int piezasCorrectas = 0;
float largo;

printf("Ingrese la cantidad de piezas a procesar");
scanf("%i", &piezasAProcesar);

while(contador <= piezasAProcesar){
    printf("Ingrese la medida de la pieza");
    scanf("%f",&largo);

    if(largo >= 1.20 && largo <= 1.30){
        piezasCorrectas = piezasCorrectas + 1;
    }
    contador = contador + 1;
}

printf("Cantidad de piezas aptas: %i", piezasCorrectas);

getch();

return 0;



}
