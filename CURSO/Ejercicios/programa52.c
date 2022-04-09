int main(){

float alturas[4];
float suma = 0;
float promedio =0;
int altos =0;
int bajitos =0;

for(int i=0; i<=4; i++){

    printf("Ingrese una altura: ");
    scanf("%f", &alturas[i]);
}

for(int i=0; i<=4; i++){
    suma = suma + alturas[i];
}

promedio = suma / 5;

printf("El promedio de alturas es: %f",promedio);

for(int i=0; i<=4; i++){
    if(alturas[i]>promedio){
        altos++;
    }
    else{
                        bajitos++;

    }

}

printf("Hubo %i personas por encima del promedio de alturas",altos);

printf("Hubo %i personas por debajo del promedio de alturas",bajitos);


getch();
return 0;

}
