#include <iostream.h>
#include <strstream.h>

const short kBufferSize = 10; 

//--------------------------------------- main() 

void main( void )
{
    char buffer[ kBufferSize ];
    ostrstream ostr( buffer, kBufferSize ); 
    short i = 0;

    while ( ostr << (char)( 'a' + i) ) 
        i++;

    cout << "Number of characters written: " << i << '\n';

    buffer[ kBufferSize - 1 ] = '\0 ';

    cout << "Buffer contents: " << buffer;
}