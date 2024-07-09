#include <iostream.h>

//--------------------------------------- main() 
void main( void )
{
    cout << 202 << '\n'; cout.width( 5 );


    cout.fill( 'x' );
    cout.setf( ios::left, ios::adjustfield );

    cout << 202 << '\n';

    cout.width( 10 );
    cout.fill( '=' );
    cout.setf( ios::internal, ios::adjustfield );

    cout << -101 << '\n';

    cout.width( 10 );
    cout.fill( '*' );
    cout.setf( ios::right, ios::adjustfield );

    cout << "Hello";
}