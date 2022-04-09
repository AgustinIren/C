int main(){

int aprobados = 0;
int desaprobados = 0;
int nota;

for(int i = 1; i<=10; i++){

    printf("Ingrese la nota del alumno");
    scanf("%i", &nota);
    if(nota>=7){
        aprobados++;
    }
    else{
        desaprobados++;
    }
}

printf("Hubo %d aprobados\n", aprobados);
printf("Hubo %d desaprobados\n", desaprobados);

getch();
return 0;


}
