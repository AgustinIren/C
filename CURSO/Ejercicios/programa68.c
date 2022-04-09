int main(){
	
	
	char oracion[201];
	int i;
	int palabras =1;
	
	printf("Ingrese una oracion");
	gets(oracion);
	
	
	for(i=0; oracion[i]!='\0'; i++){
		if(oracion[i]==' '){
			palabras++;
		}
	}
	
	printf("La oracion %s tiene %i palabras", oracion, palabras);
	
	
	getch();
	return 0;
	
}
