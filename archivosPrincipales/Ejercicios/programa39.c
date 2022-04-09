int main(){

int pares;
int base;
int altura;
int superficie =0;
int superficieGrande =0;

printf("Ingrese la cantidad de pares");
scanf("%i", &pares);


for(int i=1; i<=pares; i++){

    printf("Ingrese la base");
    scanf("%i", &base);
    printf("Ingrese la altura");
    scanf("%i", &altura);
    superficie = (base * altura) / 2;

    if(superficie > 12){
        superficieGrande++;
    }
}

    printf("Hubo %d triangulos de superficie grande", superficieGrande);

    getch();
    return 0;


}
