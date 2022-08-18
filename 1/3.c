#include <stdio.h>

#define buffSize 100


int main(){

	char str[buffSize];
	
	fgets(str,buffSize,stdin);
	
	int n = -1;
		
	while( str[n+1] != '\0' ){
	     n++;
	}
	
	
	char ans[buffSize];
	int l = 0;
	
	for( int i = 0 ; i < n ; i++ ){
	    if( (str[i] >= 'a' && str[i] <= 'z') || ( str[i] >= 'A' && str[i] <= 'Z' ) ){
	    	ans[l] = str[i];
	    	l++;
	    }	
	}
	
	printf("The resultant string is %s \n" , ans );
	
	
	

}
