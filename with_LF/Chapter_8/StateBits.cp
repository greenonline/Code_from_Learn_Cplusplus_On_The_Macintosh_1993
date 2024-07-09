#include <iostream.h> 

#define true 1
#define false 0 

void main( void )
{
    char done = false; char c;
    short number;

    while ( ! done ) {
        cout << "Type a number: "; 
        cin >> number;

        if ( cin.good() )
        {
            if ( number == 0 )
            {
                cout <<"Goodbye ... ";
                done = true;
            }
            else
                cout << "Your number is: " << number << "\n\n";
        }
        else if ( cin.fail() )
        {
            cin.clear();
            cin.get( c );

            cout << c << " is not a number...";
            cout << "Type 0 to exit\n\n";
        }
        else if ( cin.bad() )
        {
            cout << "\nYikes!!! Gotta go...";
            done = true;
        }
    }
}
