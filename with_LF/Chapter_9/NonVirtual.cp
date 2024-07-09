#include <iostream.h> 

//--------------------------------------- Root 

class Root
{
    public: 
        Root ( void ) ;
};

Root::Root ( void ) 
{
    cout << "Root constructor called\n";
}

//--------------------------------------- Basel

class Base1 : public Root
{
    public:
        Base1 ( void ) ;
};

Base1::Base1( void) 
{
    cout <<"Base1 constructor called\n";
}

//--------------------------------------- Base2 

class Base2 : public Root
{
    public:

        Base2( void );
};

Base2::Base2( void)
{
    cout << "Base2 constructor called\n";
}

//--------------------------------------- Derived 

class Derived : public Base1, public Base2
{
    public:
        Derived( void ) ;
};

Derived::Derived( void ) {
{
    cout << "Derived constructor called\n";
}

//--------------------------------------- main()

void main( void )
{
    Derived myDerived;
}