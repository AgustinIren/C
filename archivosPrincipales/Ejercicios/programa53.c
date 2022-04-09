int main(){

float turnoMan[4];
float turnoTar[4];
float man = 0;
float tar =0;
float total =0 ;

for(int i=0; i<4; i++){
    printf("Ingrese un sueldo del turno maniana");
    scanf("%f", &turnoMan[i]);
}

for(int i=0; i<4; i++){
    printf("Ingrese un sueldo del turno tarde");
    scanf("%f", &turnoTar[i]);
}

for(int i=0; i<4; i++){

    man = man + turnoMan[i];
    tar = tar + turnoTar[i];

}

total = man + tar;

printf("EL gasto total en empleados es: %f", total);


getch();

return 0;

}
