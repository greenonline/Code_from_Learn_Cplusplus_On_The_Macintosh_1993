#include <iostream.h> 
#include <new.h>

void NewFailed( void );
 
char gDone = false;
char *gSpareBlockPtr = NULL; 

void main( void )
{
    char *myPtr;
    long numBlocks = 0;

    cout << "Installing NewHandler ... \n";

    set_new_handler( NewFailed );
    gSpareBlockPtr =new char[20480];

    while ( gDone == false ) {
        myPtr = new char[1024];
        numBlocks++;
    }
    cout << "Number of blocks allocated: " << numBlocks;
}

void NewFailed( void )
{
    if ( gSpareBlockPtr != NULL )
    {
        delete gSpareBlockPtr;
        gSpareBlockPtr = NULL;
    }
    gDone = true;
}