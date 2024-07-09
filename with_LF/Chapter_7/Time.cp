#include <iostream.h>

//--------------------------------------- Time

class Time 
{
// Data members . . . 
    private:
        short hours ;
        short minutes;
        short seconds;

// Member functions ... 
    public:
        Time( short h, short m, short s );
        void NormalizeTime( void );
        void Display( void);
        Time *operator+( Time aTime );
        void operator*=( short num );
};

Time::Time( short h, short m, short s )
{
    seconds = s;
    minutes = m;
    hours = h ;

    NormalizeTime();
}

void Time::NormalizeTime( void )
{
    hours+= ((minutes+ (seconds)) / 60);
    minutes= (minutes+ (seconds)) / 60;
    seconds %= 60;
}

void Time::Display( void)
{
    cout << "(" << hours << ":" << minutes << ":" << seconds << ") \n";
}

Time *Time::operator+( Time aTime )
{
    short h; 
    short m; 
    short s;
    Time *tempTimePtr;

    h = hours + aTime.hours;
    m = minutes + aTime.minutes;
    s = seconds + aTime.seconds;

    tempTimePtr =new Time( h, m, s );

    return( tempTimePtr );
}

void Time::operator*=( short num)
{
    hours *= num;
    minutes *= num;
    seconds *= num;

    NormalizeTime();
}

//--------------------------------------- main() 

void main( void )
{
    Time firstTime( 1, 10, 50 ); 
    Time secondTime( 2, 24, 20 );
    Time *sumTimePtr;

    firstTime.Display();
    secondTime.Display();

    cout << "---------\n";

    sumTimePtr = firstTime + secondTime;
    sumTimePtr->Display();

    cout << "        2\n";
    cout << "----------\n ";

    (*sumTimePtr) *= 2; 
    sumTimePtr->Display();
}
