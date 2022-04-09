int main(){
	
	
	char palabra[20];
	int i;
	
	printf("Ingrese una palabra");
	gets(palabra);
	
	if(palabra[0]=='a' || palabra[0]=='A'){
		printf("La palabra empieza con a o con A");
	}
	else{
		printf("La palabra NO empieza con a o con A");
	}

	
	getch();
	return 0;
	
}
