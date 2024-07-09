/* Overload.cp - Chapter 4 */

#include <iostream.h>
void Display( short shortParam ); 
void Display( long longParam ); 
void Display( char *text );

void main( void )
{
    short myShort = 3;
    long myLong = 12345678L;
    char *text = "Make it so...";

    Display( myShort );
    Display( myLong );
    Display( text );
}

void Display( short shortParam )
{
    cout << "The short is: " << shortParam << "\n";
}

void Display( long longParam )
{
    cout << "The long is: " << longParam << "\n";
}

void Display( char *text )
{
    cout << "The text is: " << text << "\n";
}
