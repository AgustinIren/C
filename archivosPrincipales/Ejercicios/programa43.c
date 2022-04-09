int main(){

int pares;
int lado1;
int lado2;
int lado3;
int equilateros=0;
int isosceles=0;
int escalenos=0;

printf("Ingrese la cantidad de pares");
scanf("%i", &pares);


for(int i=1; i<=pares; i++){

    printf("Ingrese el primer lado");
    scanf("%i", &lado1);
    printf("Ingrese el segundo lado");
    scanf("%i", &lado2);
    printf("Ingrese el tercer lado");
    scanf("%i", &lado3);

    if(lado1==lado2 && lado1==lado3){
        printf("Es un triangulo equilatero");
        equilateros++;
    }
    else{


    if(lado1==lado2 || lado2==lado3 || lado1==lado3){
        printf("Es un triangulo isosceles");
        isosceles++;
    }else{
        printf("Es un triangulo escaleno");
        escalenos++;
    }
    }

}

printf("Se enconcontraron %i triangulos equilateros", equilateros);

printf("Se enconcontraron %i triangulos isosceles", isosceles);

printf("Se enconcontraron %i triangulos escalenos", escalenos);


getch();
return 0;

}


