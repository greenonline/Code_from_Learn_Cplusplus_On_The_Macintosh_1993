#include <iostream.h>
#include <string.h>

const short kMaxNameLength = 40 ;

//--------------------------------------- Name 

class Name
{
    private:
        char nameString[ kMaxNameLength ]; 
        short nameLength;
    public:
        Name( char *name );
        void operator()(void);
        char &operator[]( short index) ;
};

Name::Name( char *name )
{
    strcpy( nameString, name );
    nameLength = strlen( name );
}

void Name::operator()( void) 
{
    cout << nameString << "\n";
}

char& Name::operator[]( short index )
{
    if ( ( index < 0 ) || (index >= nameLength ) )
    {
        cout <<"index out of bounds!!!\n"; 
        return( nameString[ 0 ] );
    }
    else
        return( nameString[ index ] );
}

//--------------------------------------- main() 

void main( void )
{
    Name pres( "B. J. Clinton" ); 

    pres[ 3 ] = 'X';
    pres();

    pres[ 25 ] = 'Z'; 
    pres();
}