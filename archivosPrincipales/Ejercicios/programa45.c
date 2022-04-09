int main(){


int edad;

int sumaManana = 0;
int promedioManana =0;
int sumaTarde= 0;
int promedioTarde =0;
int sumaNoche = 0;
int promedioNoche =0;

for(int i=1; i<=5; i++){

printf("Ingrese una edad del turno mañana");
scanf("%i", &edad);
sumaManana = sumaManana + edad;
}

for(int i=1; i<=6; i++){

printf("Ingrese una edad del turno tarde");
scanf("%i", &edad);
sumaTarde = sumaTarde + edad;
}

for(int i=1; i<=11; i++){
printf("Ingrese una edad del turno noche");
scanf("%i", &edad);
sumaNoche = sumaNoche + edad;
}

promedioManana = sumaManana / 5;
promedioTarde = sumaTarde / 6;
promedioNoche = sumaNoche / 11;

printf("El promedio de edades del turno mañana es %i", promedioManana);

printf("El promedio de edades del turno tarde es %i", promedioTarde);

printf("El promedio de edades del turno noche es %i", promedioNoche);

if(promedioManana < promedioTarde && promedioManana < promedioNoche){
    printf("El promedio de edades mas bajas esta en el turno mañana");
    }
    else{
        if(promedioTarde < promedioNoche){
        printf("El promedio de edades mas bajas esta en el turno tarde");
        }
        else{
                printf("El promedio de edades mas bajas esta en el turno tarde"); }

    }




getch();
return 0;

}



