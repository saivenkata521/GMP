#include <stdio.h>


int main(){

	
	char str[100];
		
	printf("Enter the string :");
	
	fgets( str , 100 , stdin );
	
	int afrq[35] = {0};
	int Afrq[35] = {0};
	

	
	int n = -1;
	while( str[n+1] != '\0' ){
		n++;	
	}
	

	
	for( int i = 0 ; i < n ; i++ ){
		if( str[i] >= 'a' && str[i] <= 'z' ) afrq[str[i]-'a']++;		
		else if( str[i] >= 'A' && str[i] <= 'Z' ) Afrq[str[i]-'A']++; 
	}
	
	printf("The sorted Array is : ");
	
	
	char ans[100];
	int l = 0;
	
	for( int i = 0 ; i < 26 ; i++ ){
		while( Afrq[i] ){
		  ans[l] = i+'A';
		  Afrq[i]--;
		  l++; 
		} 	
	}
	

	for( int i = 0 ; i < 26 ; i++ ){
	   while( afrq[i] ){
	      ans[l] = i+'a';
	      afrq[i]--;
	      l++;
	   }
	}
	
	ans[l-1] = '\0';
	
	printf("%s \n",ans );
	

	
	
	


}
