#include <stdio.h>

#define buffSize  100


int main(){


	char s[buffSize];
	
	
	fgets( s , buffSize , stdin );
	
	int n = -1;
	
	
	while( s[n+1] != '\0' ){
	 	n++;
	}
	
	int cnt = 0;
	for( int i = 0 ; i < n ; i++ ) if( s[i] == '1' ) cnt++;

	 for( int i = n ; i > 1 ; i++ ){
	    s[i] = s[i-1];c
	 }
	 
	 if( cnt % 2 !=  0 ) s[0] = 1;
	 else s[1] = 1;
	 
	 printf( "%s" , s );

}
