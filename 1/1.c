#include <stdio.h>
#include <string.h>



int main(){

	
	
	char str[100];
	printf("Enter the string :");
	
	fgets( str , 100 , stdin );
	
	int frq[35];
	
	memset( frq , 35 , 0 );	

	int n = strlen(str);
	printf("%d \n" , n );	
	
	for( int i = 0 ; str[i] != '\0' ; i++ ){
		frq[str[i]-'a']++;		
	}
	
	
	for( int i = 0 ; i < 26 ; i++ ){
		if( frq[i] != 0 ){
		   printf("%c -> %d \n", (i+'a') , frq[i] );
		}	 
	}
	


}
