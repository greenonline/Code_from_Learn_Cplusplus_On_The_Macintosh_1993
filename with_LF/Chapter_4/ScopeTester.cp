#include <iostream.h>

short myValue = 5; 

void main( void )
{
    short yourValue = myValue;

    cout << "yourValue: "<< yourValue << "\n";

    short myValue = 10; 
    yourValue = myValue;

    cout << "yourValue: " << yourValue << "\n"; yourValue = ::myValue ;
    cout << "yourValue: " << yourValue << "\n";
}