int main(){

int num1, num2, num3;

printf("Ingrese el primer numero");
scanf("%i", &num1);

printf("Ingrese el segundo numero");
scanf("%i", &num2);


printf("Ingrese el tercer numero");
scanf("%i", &num3);


if(num1 < num2 && num1 < num3){
    printf("%i", num1);

    }
    else{
    if(num2<num3){
        printf("%i", num2);
    }
    else{
        printf("%i", num3);
    }
}

printf(" ---- ");

if(num1 > num2 && num1 > num3){
    printf("%i", num1);

    }
    else{
    if(num2>num3){
        printf("%i", num2);
    }
    else{
        printf("%i", num3);
    }
}

getch();

return 0;

}
