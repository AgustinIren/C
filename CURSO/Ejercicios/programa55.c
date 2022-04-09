int main(){

int vec1[4];
int vec2[4];
int resultado[4];

for(int i=0; i<4; i++){
    printf("Ingrese los valores del primer vector");
    scanf("%i",&vec1[i]);
}

for(int i=0; i<4; i++){
    printf("Ingrese los valores del segundo vector");
    scanf("%i",&vec2[i]);
}

for(int i=0; i<4; i++){
    resultado[i]= vec1[i] + vec2[i];
}

for(int i=0; i<4; i++){
    printf("La suma del elemento %i es %i\n", i+1, resultado[i]);
    getch();
}


return 0;


}
