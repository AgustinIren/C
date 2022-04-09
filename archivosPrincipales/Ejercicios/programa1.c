
int main(){

    int horasTrabajadas;
    int precioHora;
    float sueldoACobrar;

    printf("Ingrese las horas trabajadas\n");
    scanf("%i", &horasTrabajadas);
    printf("Ingrese el precio de la hora\n");
    scanf("%i", &precioHora);
    sueldoACobrar = horasTrabajadas * precioHora;
    printf("Usted debe cobrar %f pesos", sueldoACobrar);
    return 0;
}
