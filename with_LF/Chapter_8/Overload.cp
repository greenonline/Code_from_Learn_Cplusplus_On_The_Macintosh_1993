/* Overload.cp - Chapter 8 */

#include <iostream.h> 
#include <fstream.h> 
#include <string.h>

const short kMaxNameLength = 40;

//------------ --------------------------- Menu!tem

class MenuItem
{
    private:
        float price;
        char name[ kMaxNameLength ];
    public:
        void SetName( char *itemName );
        char *GetName( void );
        void SetPrice( float itemPrice );
        float GetPrice( void );
};

void MenuItem::SetName( char *itemName)
{
    strcpy( name, itemName );
}

char *MenuItem::GetName( void )
{
    return( this->name );
}

void MenuItem::SetPrice( float itemPrice)
{
    price = itemPrice;
}

float MenuItem::GetPrice( void) 
{
    return( this->price );
}

//-------------------------- iostream operators

istream &operator>>( istream &is, MenuItem &item ) 
{
    float itemPrice;
    char itemName[ kMaxNameLength ];

    is.getline( itemName, kMaxNameLength ); 
    item.SetName( itemName );

    is >> itemPrice; 
    item.SetPrice( itemPrice );

    is.ignore( 1, '\n' ); 
    return ( is ) ;
}

ostream &operator<<( ostream &os, MenuItem &item )
{
    os << item.GetName() << " ($" << item.GetPrice() << ") "; 
    return( os );
}

//--------------------------------------- main() 

void main( void )
{
    ifstream readMe( "Menu Items" ) ; 
    MenuItem item;

    while ( readMe >> item )
        cout <<item<< "\n";
}

