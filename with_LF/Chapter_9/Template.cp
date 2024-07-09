
#include <iostream.h>

const short kNumElements = 10;

//--------------------------------------- Array

template <class T> 
class Array
{
    private:
        short arraySize; 
        T *arrayPtr;
        T errorRetValue;

    public:
        Array( short size );
        ~Array( void );
        T &operator[]( short index );
};

template <class T> 
Array<T>::Array( short size )
{
    arraySize = size; 
    arrayPtr =new T[ size ];
    errorRetValue = 0;
}

template <class T> 
Array<T>::~Array( void )
{
    delete[] arrayPtr;
}


template <class T>
T &Array<T>::operator[]( short index ) 
{
    if ( ( index < 0 ) || ( index >= arraySize ) )
    {
        cout << "index out of bounds(" <<index<< ")\n";
        return( errorRetValue );
    }
    else
        return( arrayPtr[ index ] );
}

//--------------------------------------- Power 

template <class T>
T Power( T base, T exponent)
{
    T i, product = 1;

    for ( i=1; i<=exponent; i++)
        product *= base;
    return( product );
}

//--------------------------------------- main()
 
void main( void )
{
    Array<short> myRay( kNumElements );
    Array<long> myLongRay( kNumElements );
    short i, shortBase = 4;
    long longBase = 4L;

    for ( i=0; i<=kNumElements; i++)
        myRay[ i ] = Power( shortBase, i );

    cout << "----\n";

    for ( i=0; i<kNumElements; i++ )
        cout << "myRay[" << i << "]: " << myRay[ i ] << "\n"; 

    for ( i=0; i<kNumElements; i++ )
        myLongRay[ i ] =Power( longBase, (long)i ); 

    cout << "----\n";

    for ( i=0; i<kNumElements; i++ )
        cout << "myLongRay[" << i
<< "]: " << myLongRay[ i ] << "\n";
}