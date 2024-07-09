#include <iostream.h>
#include <string.h>

//--------------------------------------- Name 
class Name
{
    private:
        char *last;
        char *first;


    public:
        Name( char *firstParam, char *lastParam );
        Name( const Name& original );

        void Name::operator ( ) ( void );
        Name &Name::operator=( const Name& original) ;
};

Name::Name( char *firstParam, char *lastParam)
{
    first= new char[ strlen(firstParam) + 1 ];
    last= new char[ strlen(lastParam) + 1 ];

    strcpy( first, firstParam );
    strcpy( last, lastParam );

    cout << "Original constructor ... \n" ;
}

Name::Name( const Name& original) 
{
    first= new char[ strlen(original.first) + 1 ];
    last= new char[ strlen(original.last) + 1 ];

    strcpy( first, original.first );
    strcpy( last, original.last );

    cout <<"Copy constructor ... \n";
}

void Name::operator ( ) ( void )
{
    cout << "Name: " << first << " " << last << "\n";
}

Name &Name::operator=( const Name& original) 
{
    if ( this == &original)
        return ( *this ) ; 

    delete first;
    delete last;

    first= new char[ strlen(original.first) + 1 ];
    last= new char[ strlen(original.last) + 1 ]; 

    strcpy( first, original.first );
    strcpy( last, original.last ); 

    return( *this );
}

//--------------------------------------- main()

void main( void )
{
    Name yourAuthor( "Dave", "Mark" ) ; 
    Name aCopy = yourAuthor;
    Name anotherAuthor( "Scott", "Knaster");

    yourAuthor ( ) ; 
    aCopy();

    aCopy = anotherAuthor; 

    aCopy();
}