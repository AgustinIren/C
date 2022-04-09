

int main(){

int cantidadDePersonas;
int contador = 1;
float alturas = 0;
float nuevaAltura;
float promedio = 0;

printf("Ingrese la cantidad de personas a evaluar");
scanf("%i", &cantidadDePersonas);

while(contador <=cantidadDePersonas){
    printf("Ingrese la altura de la persona");
    scanf("%f", &nuevaAltura);
    alturas = alturas + nuevaAltura;
    contador = contador + 1;
}

promedio = alturas / cantidadDePersonas;

printf("El promedio de alturas es de %f ", promedio);

getch();

return ;

}
