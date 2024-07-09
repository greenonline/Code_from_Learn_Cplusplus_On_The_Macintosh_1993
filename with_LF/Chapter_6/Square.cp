#include <iostream.h>

//--------------------------------------- Rectangle

class Rectangle
{

// Data members ... 
    protected:
        short height;
        short width;
// Member functions ... 
    public:
        Rectangle( short heightParam, short widthParam ); 
        void DisplayArea( void );
};

Rectangle::Rectangle( short heightParam, short widthParam) 
{
    height = heightParam; 
    width = widthParam;
}

void Rectangle::DisplayArea( void) 
{
    cout << "Area is: " << height * width << '\n';
}

//--------------------------------------- Rectangle:Square

class Square : public Rectangle
{
// Data members ...
// Member functions .. . 
    public:
        Square( short side );
};

Square::Square( short side) : Rectangle( side, side ) 
{
}

//-- ---------- ------------ --------------- main()
void main( void )
{
    Square *mySquare ; 
    Rectangle*myRectangle;

    mySquare =new Square( 10 );
    mySquare->DisplayArea();

    myRectangle =new Rectangle( 10, 15 );
    myRectangle->DisplayArea();
}