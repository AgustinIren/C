int main(){
	
	char palabra[30];
	int letras;
	
	printf("Ingrese una palabra");
	gets(palabra);
	
	for(int i=0; palabra[i]!='\0'; i++){
	
			letras++;
	}
	
	printf("La cadena %s tiene %i letras", palabra,letras);
	
	getch();
	return 0;
	
	
}
