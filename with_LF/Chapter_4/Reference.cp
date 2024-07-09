#include <iostream.h>

void CallByValue( short valueParam );
void CallByReference( short &refParam ); 

void main( void )
{
    short number = 12;
    long longNumber = 12L;

    cout << "&number: " << (unsigned long)&number << "\n";
    cout << "&longNumber: " << (unsigned long)&longNumber << "\n\n";

    CallByValue( number );
    cout << "After ByValue: " << number << "\n\n";

    CallByReference( number );
    cout << "After ByRef( short ): " << number << "\n\n";

    CallByReference( longNumber );
    cout << "After ByRef( long ): " << longNumber << "\n";
}

void CallByValue( short valueParam )
{
    cout << "&valueParam: " << (unsigned long)&valueParam << "\n";
    valueParam *= 2;
}

void CallByReference( short &refParam )
{
    cout << "&refParam: " << (unsigned long)&refParam << "\n";
    refParam *= 2;
}