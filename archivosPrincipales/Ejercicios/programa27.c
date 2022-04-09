int main(){

int alumnosAprobados = 0;
int alumnosDesaprobados = 0;
int contador = 1;
int nota;

while (contador <= 10){
    printf("Ingrese la nota de un alumno");
    scanf("%i", &nota);

    if(nota>=7){
        alumnosAprobados = alumnosAprobados + 1;
    }
    else{
        alumnosDesaprobados = alumnosDesaprobados + 1;
    }
    contador = contador + 1;

}

printf("Hubo un total de %i  desaprobados\n", alumnosDesaprobados);
printf("Hubo un total de %i aprobados\n", alumnosAprobados);

getch();

return 0;


}
