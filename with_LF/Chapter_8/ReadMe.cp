#include <iostream.h> 
#include <fstream.h>

void main( void )
{
    ifstream readMe( "My File" );
    char c;

    while (readMe.get( c ) )
        cout << c;
}
