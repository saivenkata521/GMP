#include <bits/stdc++.h>
#include <gmp.h>

using namespace std;


int main(){
	
	mpz_t a,b;
	
	//allocating the memory 
	mpz_init( a );
	mpz_init( b );
	
	printf( "Enter the values of a and b \n " );
	
	gmp_scanf( "%Zd" , &a );
	gmp_scanf( "%Zd" , &b );
	
	//initializing a new variable	
	mpz_t rop;
		
	mpz_init(rop);
	
	//adding a and b and stored in a rop variable
	mpz_add(rop, a , b );
	
	gmp_printf( "The sum is %Zd \n" , rop );	
		
	mpz_mul( rop , a , b );
	
	gmp_printf( "The product is %Zd \n" , rop );

	mpz_sqrt( rop , a );
	
	gmp_printf( "The sqrt is %Zd \n" , rop );	

	mpz_swap( a , b );
	
	gmp_printf( "The values after swapped are %Zd %Zd  \n" , a, b );
	
	

}






/*

	// assinging the a and b variables with 100 
	
	int p,q;
	cout<<"Enter the integer1 : ";
	cin>>p;
	
	cout<<"Enter the integer 2 : ";
	cin>>q;
	
	// assinging the a and b variables with 100 
	mpz_set_ui( a , p );
	mpz_set_ui( b , q );
	
*/
