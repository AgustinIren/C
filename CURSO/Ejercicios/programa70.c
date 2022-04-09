int main(){
	
	
	char palabra[20];
	int i;
	
	printf("Ingrese una palabra");
	gets(palabra);
	
	while(palabra[i]!='\0'){
		if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u'){
			palabra[i]='-';
		}	
		i++;
	}
	
	printf("%s", palabra);
	

	
	getch();
	return 0;
	
}
