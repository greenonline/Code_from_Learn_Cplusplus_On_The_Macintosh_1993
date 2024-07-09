#include <iostream.h> 
#include <string.h>

const short kMaxNameSize = 20;
class Employee
{
// Data members ... 
    private:
        char employeeName[ kMaxNameSize ]; 
        long employeeID;
        float employeeSalary;

// Member functions . . . 
    public:
        Employee( char *name, long id, float salary );
        ~Employee( void ); 
        void PrintEmployee( void );
};

Employee::Employee( char *name, long id, float salary) 
{
    strcpy( this->employeeName, name ); 
    this->employeeID = id; 
    this->employeeSalary = salary;

    cout << "Creating employee#" << employeeID << "\n";
}

Employee::~Employee( void) 
{
    cout << "Deleting employee#" << employeeID << "\n";
}

void Employee::PrintEmployee( void)
{
    cout << "-----\n";
    cout << "Name: " << employeeName << "\n";
    cout << "ID: " << employeeID << "\n";
    cout << "Salary: " << employeeSalary << "\n";
    cout << "----- \n";
}

void main( void )
{
    Employee employeel( "Dave Mark", 1, 200.0 );
    Employee *employee2;

    employee2 = new Employee( "Steve Baker", 2, 300.0 );

    employeel.PrintEmployee(); 
    employee2 ->PrintEmployee();

    delete employee2;

}
