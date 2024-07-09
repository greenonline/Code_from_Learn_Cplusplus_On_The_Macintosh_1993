#include <iostream.h>

//--------------------------------------- Shape

class Shape
{
// Data members...
// Member functions ... 
    public:
        virtual void WhatAmI ( void ) ;
};

void Shape::WhatAmI( void )
{
    cout << "I don't know what kind of shape I am! \n";
}


//--------------------------------------- Shape:Rectangle
class Rectangle : public Shape
{
// Data members ...
// Member functions ... 
    public:
        void WhatAmI ( void ) ;
};

void Rectangle::WhatAmI( void) 
{
    cout << "I'm a rectangle!\n";
}

//--------------------------------------- Shape:Triangle

class Triangle : public Shape
{
// Data members .. .
// Member functions .. . 
    public:
    void WhatAmI( void);
};

void Triangle::WhatAmI( void )
{
    cout << "I'm a triangle! \n";
}

//--------------------------------------- main() 

void main( void )
{
    Shape *s1, *s2, *s3;

    s1 = new Rectangle;
    s2 = new Triangle;
    s3 = new Shape;

    s1->WhatAmI(); 
    s2->WhatAmI(); 
    s3->WhatAmI();
}
