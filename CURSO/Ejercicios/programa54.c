int main(){

int vector[8];
int acum = 0;
int grandes =0;
int gigantes =0;

for(int i=0; i<8; i++){
    printf("Ingrese los valores del vector");
    scanf("%i",&vector[i]);
}

for(int i=0; i<8; i++){
    acum = acum + vector[i];
}

for(int i=0; i<8; i++){
    if(vector[i]>36){
        grandes = grandes + vector[i];
    }
}

for(int i=0; i<8; i++){
    if(vector[i]>50){
        gigantes++;
    }
}

printf("El acumulado de los valores es: %i", acum);

printf("El acumulado de los valores mayores a 36 es: %i", grandes);

printf("La cantidad de valores mayores a 50 es: %i", gigantes);

getch();

return 0;

}
