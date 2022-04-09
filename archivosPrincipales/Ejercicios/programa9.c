int main(){

int numero;

printf("Ingrese un numero positivo");

scanf("%d", &numero);

if(numero > 9 ){

printf("El numero %d es de dos digitos", numero);

}

else{

printf("El numero %d es solo de un digito", numero);

}

getch();
return 0;


}
