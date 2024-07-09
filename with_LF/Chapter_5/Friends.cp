#include <iostream.h> 
#include <string.h>

const short kMaxNameSize = 20; 

class Employee;

class Supervisor
{
// Data members ... 
    private:
        char supervisorName[ kMaxNameSize ]; 
        long supervisorID;
        float supervisorSalary;
// Member functions ... 
    public:
        Supervisor( char *name, long id, float salary );
        ~Supervisor( void);
        void PayRaise( Employee *luckyPerson );
};

class Employee
{
    friend class Supervisor;
// Data members ... 
    private:
        char employeeName[ kMaxNameSize ];
        long employeeID;
        float employeeSalary;
// Member functions .. . 
    public:
        Employee( char *name, long id, float salary );
        ~Employee( void ); 
        void PrintEmployee( void );
};

Employee::Employee( char *name, long id, float salary) 
{
    strcpy( this ->employeeName, name ); 
    this->employeeID = id;
    this->employeeSalary = salary;

    cout << "Creating employee#" << employeeID << "\n";
}

Employee::~Employee( void ) 
{
    cout << "Deleting employee #" << employeeID << "\n";
}

void Employee :: PrintEmployee( void )
{
    cout << "-----\n";
    cout << "Name: " << employeeName << "\n";
    cout << "ID: " << employeeID << "\n"; 
    cout << "Salary: " << employeeSalary << "\n"; 
    cout << "-----\n";
}

Supervisor::Supervisor( char *name, long id, float salary) 
{
    strcpy( this->supervisorName, name ); 
    this->supervisorID = id;
    this->supervisorSalary = salary;

cout << "Creating supervisor#"<< supervisorID << "\n";
}

Supervisor::~Supervisor( void) 
{
    cout << "Deleting supervisor #" << supervisorID << "\n";
}

void Supervisor::PayRaise( Employee *luckyPerson)
{ 
    luckyPerson->employeeSalary *= 1.10;
}

void main( void )
{
    Employee *employeePtr ;
    Supervisor *supervisorPtr;

    employeePtr = new Employee( "Dave Mark", 1000, 200.0 );
    supervisorPtr =new Supervisor( "Carlos Derr" , 1002, 600.0 );

    employeePtr->PrintEmployee () ; 
    supervisorPtr->PayRaise( employeePtr ); 
    employeePtr ->PrintEmployee();

    delete employeePtr; 
    delete supervisorPtr ;
}