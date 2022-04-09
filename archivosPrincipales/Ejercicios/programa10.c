int main(){


int nota1, nota2, nota3, promedio;

printf("Ingrese la primer nota");

scanf("%d",&nota1);


printf("Ingrese la segunda nota");

scanf("%d",&nota2);


printf("Ingrese la tercera nota");

scanf("%d",&nota3);


promedio = (nota1 + nota2 + nota3)/3;

if(promedio>=7){

    printf("Promocionado");

}
    else{
            if(promedio>=4){

            printf("Regular");

    }
            else{

            printf("Reprobado");

            }
}

getch();
return 0;



}
