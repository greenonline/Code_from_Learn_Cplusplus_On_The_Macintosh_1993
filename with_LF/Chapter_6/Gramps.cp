#include <iostream.h>

//----- ----------- ---- ---- --------------- Gramps

class Gramps
{

// Data members .. . 
// Member functions . . .
    public:
        Gramps ( void ) ; 
        ~Gramps( void );
};

Gramps::Gramps( void ) 
{
    cout << "Gramps' constructor was called ! \n";
}

Gramps::~Gramps( void )
{
    cout << "Gramps' destructor was called! \n";
}

//---------------------------------- Pops : Gramps
class Pops : public Gramps {
// Data members . ..


// Member functions ... 
    public:
        Pops( void ); 
        ~Pops( void );
};

Pops::Pops( void)
{
    cout <<"Pops' constructor was called!\n";
}

Pops::~Pops( void)
{
    cout << "Pops' destructor was called!\n";
}

//---------------------------------- Junior:Pops
class Junior : public Pops {

//Data members ...
//Member functions .. . 
    public:
        Junior ( void ) ; 
        ~Junior( void );

};

Junior::Junior( void)
{
    cout << "Junior's constructor was called!\n";
}

Junior::~Junior( void)
{
    cout << "Junior's destructor was called! \n";
}

//--------------------------------------- main 
void main( void )
{
    Junior *juniorPtr; 
    juniorPtr = new Junior; 
    cout << "----\n";
    delete juniorPtr;
}