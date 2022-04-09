int main(){
	
	char palabra[30];
	int i=0;
	int vocales;
	
	printf("Ingrese una palabra");
	gets(palabra);
	
	while(palabra[i]!='\0'){
		if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u'){
			vocales++;
		}	
		i++;
	}
	
	printf("La cadena %s tiene %i vocales", palabra,vocales);
	
	getch();
	return 0;
	
	
}
