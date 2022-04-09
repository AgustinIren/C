int main(){

int nota1, nota2, nota3;
float promedio;

printf("Ingrese su primera nota");

scanf("%d", &nota1);

printf("Ingrese su segunda nota");

scanf("%d", &nota2);

printf("Ingrese su tercera nota");

scanf("%d", &nota3);

promedio = (nota1 + nota2 + nota3) / 3 ;


if(promedio >=7){

printf("Promocionado");

}

getch();
return 0;

}



