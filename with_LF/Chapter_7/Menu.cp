#include <iostream.h> 
#include <string.h>

const short kMaxNameLength = 40;

// --------------------------------------- MenuItem

class MenuItem
{
    private:
        float price;
        char name[kMaxNameLength];
    public:
              MenuItem( float itemPrice, char *itemName ); 
        float GetPrice( void );
        float operator+( MenuItem item );
        float operator+( float subtotal );
};

MenuItem::MenuItem( float itemPrice, char *itemName )
{
    price = itemPrice;
    strcpy ( name, itemName );
}

float MenuItem::GetPrice( void )
{
    return( this->price );
}

float MenuItem::operator+( MenuItem item )
{
    cout << "MenuItem:: operator+ ( MenuItem item ) \n";
    return( this->GetPrice() + item.GetPrice() );
}

float MenuItem::operator+( float subtotal )
{
    cout << "MenuItem::operator+( float subtotal )\n";
    return( this->GetPrice() +subtotal );
}

//--------------------------------------- operator+()

float operator+( float subtotal, MenuItem item ) 
{
    cout << "operator+( float subtotal, MenuItem item )\n"; 

    return( subtotal+ item.GetPrice() );
}

//--------------------------------------- main() 
void main( void )
{
    MenuItem chicken( 8.99, "Chicken Kiev with salad" );
    MenuItem houseWine( 2.99, "Riesling by the glass" );
    MenuItem applePie( 3.99, "Apple Pie a la Mode" );

    cout << "\nTotal: " << chicken + houseWine + applePie << "\n\n";
    cout << "\nTotal: " << chicken+ (houseWine + applePie);
}
