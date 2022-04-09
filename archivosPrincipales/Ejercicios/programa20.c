int main(){

int x, y;

printf("Ingrese el primer numero");
scanf("%d", &x);

printf("Ingrese el segundo numero");
scanf("%d", &y);


if(x>0){
    if(y>0){
        printf("Esta en el primer cuadrante");
    }
    else{
        printf("Esta en el cuarto cuadrante");
    }

}
else{
    if(y>0){
        printf("Esta en el segundo cuadrante");
    }
    else{
        printf("Esta en el tercer cuadrante");
    }

}

getch();

return 0;

}

