int main(){

    int totalPreguntas, totalCorrectas, porcentajeFinal;

    printf("Ingrese el total de preguntas");
    scanf("%d", &totalPreguntas);
    printf("Ingrese el total de preguntas correctas");
    scanf("%d", &totalCorrectas);

    porcentajeFinal = (totalCorrectas * 100) / totalPreguntas;

    if(porcentajeFinal>= 90){

        printf("Se alcanzo el nivel maximo");

    }
    else{
        if(porcentajeFinal >=75){
        printf("Se alcanzo el nivel medio");

        }

        else{
            if(porcentajeFinal >=50){
            printf("Se alcanzo el nivel regular");

            }
            else{
                printf("Fuera de nivel");

            }

        }

    }

    getch();

    return 0;


}
