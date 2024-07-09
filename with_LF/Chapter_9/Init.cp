#include <iostream.h> 

//--------------------------------------- MyClass
class MyClass
{
    public:
        const short kMaxNameLength; 
        short &numberAlias; 
        short number;

        MyClass( short constValue );
};


MyClass::MyClass( short constValue)
: kMaxNameLength( constValue ), numberAlias( number )
{
    number = kMaxNameLength;

    cout << "Before: number = " << number << "\n";

    numberAlias += 10;

    cout << "After: number = " << number << "\n";
}

//--------------------------------------- main() 
void main( void )
{
    MyClass myObject( 10 ) ;
}