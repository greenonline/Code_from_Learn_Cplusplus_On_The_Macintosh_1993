#include <iostream.h>

inline long power( short base, short exponent ); 

void main( void )
{
    cout << "power( 2, 3 ): " << power( 2, 3) << "\n";
    cout << "power ( 3, 6 ): " << power( 3, 6 ) << "\n";
    cout << "power ( 5, 0 ): " << power( 2, 0 ) << "\n";
    cout << "power( -3, 4 ): " << power( -3, 4 ) << "\n";
}

inline long power ( short base, short exponent ) 
{
    long product = 1; 
    short i;

    if ( exponent < 0 ) 
        return( 0 );
    for ( i=1; i <=exponent; i++ ) 
        product *= base;

    return( product );
}
