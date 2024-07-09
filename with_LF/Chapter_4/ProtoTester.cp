#include <iostream.h>

void MyFunc( short paraml, short param2 = 0,
short param3 = 0 ); 

void main( void )
{
    MyFunc( 1 ) ; 
    MyFunc( 1, 2 ); 
    MyFunc( 1, 2, 3 );
}

void MyFunc( short paraml, short param2, short param3 )
{
    cout << "MyFunc( " << paraml << ", "  << param2 << ", " << param3 << " )\n";
}
