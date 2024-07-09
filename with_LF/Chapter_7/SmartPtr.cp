#include <iostream.h> 
#include <string.h>

const short kMaxNameLength = 40;

//--------------------------------------- Name 
class Name
{
    private:
        char first[ kMaxNameLength ];
        char last[ kMaxNameLength ];
public:
    public:
        Name( char *lastName , char *firstName );
        void DisplayName ( void ) ;
};

Name::Name( char *lastName, char *firstName )
{
    strcpy( last, lastName );
    strcpy( first, firstName );
}

void Name::DisplayName( void )
{
    cout << "Name: " << first << " " << last;
}

//--------------------------------------- Politician 

class Politician
{
    private:
        Name *namePtr;
        short age;
    public:
        Politician( Name *namePtr, short age );
        Name *operator->( void );
};

Politician::Politician( Name *namePtr, short age )
{
    this->namePtr = namePtr;
    this->age = age;
}

Name *Politician::operator->( void ) 
{
    return( namePtr );
}

//--------------------------------------- main()

void main( void )
{
    Name myName( "Clinton", "Bill");
    Politician billClinton( &myName, 46);

    billClinton->DisplayName();
}