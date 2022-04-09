int main(){

int cantidadDeEmpleados;
int contador = 1;
int sueldo;
int sueldosBajos = 0;
int sueldosAltos = 0;
int totalEnSueldosBajos = 0;
int totalEnSueldosAltos = 0;
int gastosEnSueldo;

printf("Ingrese la cantidad de empleados en la empresa");
scanf("%i", &cantidadDeEmpleados);

while (contador <= cantidadDeEmpleados){

    printf("Ingrese el sueldo del empleado");
    scanf("%i", &sueldo);

    if(sueldo <=300){
        sueldosBajos = sueldosBajos + 1;
        totalEnSueldosBajos = totalEnSueldosBajos + sueldo;
    }
    else{
        sueldosAltos = sueldosAltos + 1;
        totalEnSueldosAltos = totalEnSueldosAltos + sueldo;

    }

    contador = contador + 1;

}

gastosEnSueldo = totalEnSueldosBajos + totalEnSueldosAltos;

printf("La cantidad de sueldos altos es: %d\n", sueldosAltos);
printf("La cantidad de sueldos bajos es: %d\n", sueldosBajos);
printf("El gasto total en sueldos es de: %d", gastosEnSueldo);



}
