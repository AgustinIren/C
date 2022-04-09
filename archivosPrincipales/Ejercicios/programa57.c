int main(){

int vector[10];
int orden =0;

for(int i=0; i<10; i++){
    printf("Ingrese los valores del vector");
    scanf("%i",&vector[i]);
}


for(int i=0; i<10; i++){
    if(vector[i+1] < vector[i]){
        orden = 1;
        break;
    }
}

if(orden==1){
    printf("El vector NO esta ordenado de menor a mayor");
}
else{
    printf("El vector SI esta ordenado de menor a mayor");
}


getch();
return 0;

}
