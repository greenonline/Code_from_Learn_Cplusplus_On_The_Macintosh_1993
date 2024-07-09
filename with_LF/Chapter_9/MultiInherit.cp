#include <iostream.h>

enum ColorEnum {red, yellow, blue };
enum ShapeEnum {sphere, cylinder, cube };
;
//-------------------------- ostream overloads

ostream &operator<<( ostream &os, ColorEnum color ) 
{
    switch ( color )
    {
       case red:
            os << "Red";
            break; 
       case yellow:
            os << "Yellow";
            break; 
        case blue:
            os << "Blue";
            break;
        default:
            os << "Unknown"; break;
    }

    return( os );
}

ostream &operator<<( ostream &os, ShapeEnum shape )
{
    switch ( shape ) {
        case sphere:
            os << "Sphere"; break;
        case cylinder:
            os << "Cylinder"; break;
        case cube:
            os<< "Cube"; break;
        default:
            os << "Unknown"; break;
    }
    return( os );
}

//--------------------------------------- HasColor 
class HasColor
{
    private:
        ColorEnum color;

    public:
        HasColor( ColorEnum objectColor ); 
        ~HasColor( void);

};

HasColor::HasColor( ColorEnum objectColor )
{
    color = objectColor;
    cout << "color: " << color << "\n" ;
}

HasColor::~HasColor( void ) 
{
    cout << "HasColor destructor called.\n";
}

//--------------------------------------- HasShape

class HasShape 
{
    private:
        ShapeEnum shape;

    public:
        HasShape( ShapeEnum objectShape ); 
        ~HasShape( void );
};

HasShape::HasShape( ShapeEnum objectShape )
{
    shape = objectShape;

    cout << "shape: " << shape << "\n";
}

HasShape::~HasShape( void)
{
    cout << "HasShape destructor called.\n" << "---------\n";
}

//-------------------------- Object:HasShape,HasColor
class Object : public HasShape, public HasColor
{
    private:
        short objectID; 
        static short lastObjectID;
    public:
        Object( ColorEnum objectColor, ShapeEnum objectShape );
        ~Object ( void ) ;
};

Object::Object( ColorEnum objectColor, ShapeEnum objectShape ):HasShape( objectShape ), HasColor( objectColor )
{
    objectID = ++lastObjectID;

    cout << "objectID: " << objectID << "\n---------\n";
}

Object::~Object( void)
{
    cout << "Object(" << objectID << ") destructor called.\n";

}

short Object::lastObjectID = 0;


//--------------------------------------- main() 

void main( void )
{
    Object objectl( red, cube ); 
    Object object2( blue, cylinder ); 
    Object object3( yellow, sphere );
}
