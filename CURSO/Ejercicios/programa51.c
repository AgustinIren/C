int main(){

int sueldos[5];


for(int i=0; i<5; i++){
    printf("Ingrese un sueldo");
    scanf("%i", &sueldos[i]);
}

printf("Se ingresaron los siguientes sueldos\n");

for(int j=0; j<5; j++){

    printf("Sueldo de: %i\n", sueldos[j]);
}


getch();
return 0;

}
