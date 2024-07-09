#include <iostream.h> 
#include <string.h>

//------------------------- -------------- String
class String
{
    private:
        char *s ;
        short stringLength; 
    public:
            String( char *theString );
        void operator()( void);
        String&String::operator=( const String& fromString );
};

String::String( char *theString) 
{
    stringLength = strlen( theString ) ; 
    s =new char[ stringLength + 1 ];

    strcpy( s, theString );
}

void String::operator()( void )
{
    cout << "String address: " << (unsigned long)s << "\n";
}

String&String::operator=( const String& fromString) 
{
    delete this->s;

    this->stringLength = fromString.stringLength; 

    s =new char[ this->stringLength + 1 ]; 

    strcpy( this->s, fromString.s );

    return ( *this ) ;
}

//--------------------------------------- main() 
void main( void )
{
    String captain( "Picard" ); 
    String doctor ( "Crusher" ) ;

    captain(); 
    doctor();

    cout << "-----\n"; 

    doctor = captain;
    captain(); doctor ();

}