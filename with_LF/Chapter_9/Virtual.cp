 #include <iostream.h>

//--------------------------------------- Root 
class Root
{
    protected: 
        short num;
    public:
        Root( short numParam );
};

Root::Root( short numParam )
{
    num = numParam;
    cout << "Root constructor called\n";
}

//--------------------------------------- Basel 
class Base1 : public virtual Root
{
    public:
        Base1( void );
};

Base1::Base1( void) : Root( 1 ) 
{
    cout << "Base1 constructor called\n";
}

//--------------------------------------- Base2 

class Base2 : public virtual Root
{
    public:
        Base2( void );
};

Base2::Base2( void ) : Root( 2 )
{
    cout << "Base2 constructor called\n";
}

//--------------------------------------- Derived 

class Derived : public Base1, public Base2
{
    public:
        Derived( void ) ;
        short GetNum( void );
};

Derived::Derived( void ) : Root( 3 ) 
{
    cout << "Derived constructor called\n";
}

short Derived::GetNum( void) 
{
    return( num );
}

//--------------------------------------- main()

void main( void )
{
    Derived myDerived;

    cout << "-------\n"
<< "num = " << myDerived.GetNum();
}
