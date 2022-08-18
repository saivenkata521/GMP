#include <stdio.h>

#define buffSize 100

void reverse( char str[] , int l , int r ){

	if( l >= r ) return;
	
	char a = str[l];
	str[l] = str[r];
	str[r] = a;
	
	reverse( str , l+1 , r-1 );

}

int main(){

	char str[buffSize];
	
	fgets(str,buffSize,stdin);
	
	int l = 0;
		
	while( str[l] != '\0' ){
	     l++;
	}
	
	reverse( str , 0 , l-1 );
	
	//fgets( str , buffSize , stdout );		
	printf("The reverse string is %s \n",str);
	

}
