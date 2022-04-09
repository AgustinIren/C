int main(){

int cursoA[5];
int cursoB[5];
int sumaA = 0;
int sumaB = 0;
int promedioA = 0;
int promedioB =0;

for(int i=0; i<5; i++){
    printf("Ingrese las notas del primer curso");
    scanf("%i",&cursoA[i]);
}

for(int i=0; i<5; i++){
    printf("Ingrese las notas del segundo curso");
    scanf("%i",&cursoB[i]);
}

for(int i=0; i<5; i++){
    sumaA = sumaA + cursoA[i];
}

for(int i=0; i<5; i++){
    sumaB = sumaB + cursoB[i];
}

promedioA = sumaA / 5;

promedioB = sumaB / 5;

if(promedioA>promedioB){
    printf("El curso A tuvo el promedio mas alto");
}
else{
    printf("El curso B tuvo el promedio mas alto");
}

getch();

return 0;
}


