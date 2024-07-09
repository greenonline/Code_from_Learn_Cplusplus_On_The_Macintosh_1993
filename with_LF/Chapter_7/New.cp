#include <iostream.h> 
#include <stddef.h>

//----- - --------------------------------- Blob 
class Blob
{
    public:
        void *operator new( size_t blobSize );
        void operator delete( void *blobPtr, size_t blobSize );
};

void *Blob::operator new( size_t blobSize)
{
    cout << "new: " << blobSize << " bytes.\n"; 
    return NULL;
}

void Blob::operator delete( void *blobPtr, size_t blobSize ) 
{
    cout << "delete: " << blobSize << " bytes.\n";
}

//--------------------------------------- main() 
void main( void )
{
    Blob *blobPtr; 

    blobPtr = new Blob; 

    delete blobPtr;
}