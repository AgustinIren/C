int main(){

int num1, num2, num3;

printf("Ingrese el primer numero");
scanf("%d",&num1);

printf("Ingrese el segundo numero");
scanf("%d",&num2);

printf("Ingrese el tercer numero");
scanf("%d",&num3);

if(num1 > num2 && num1 > num3){

        printf("El mayor es el numero 1");


        }

        else{

            if(num2> num3){

                printf("El numero 2 es el mayor");
            }
            else{
                printf("El numero 3 es el mayor");
            }

        }
getch();
return 0;


}
