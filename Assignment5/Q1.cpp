/* Create a class named Employee with data members for name and ID. Create a class inheriting
the Employee class, namely Salary, which is used to enter the basic salary, daily allowance,
and house rent allowance for each employee. Create another class inheriting the Salary class,
named Bonus, to take the input for the bonus amount. Here, we want to calculate the total
net salary of an employee. Display the full salary slip of an employee with their name and ID.*/
#include<iostream>
using namespace std;
class Employee{
    public :
    string name;
    int id;
    void getEmployeeDetails(){
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee Id: ";
        cin >> id;
    }
};

class salary : public Employee {
    public :
    int basicsalary ;
    int dailyallowance ;
    int houserent ;
    void getsalaryDetails(){
        cout << "Enter the basic salary: ";
        cin >> basicsalary;
        cout << "Enter the daily allowance: ";
        cin >> dailyallowance;
        cout << "Enter the house rent: ";
        cin >> houserent;
    }
};

class Bonus : public salary {
    public : 
    int bonus ;
    int totalSalary ;
    void getBonus(){
        cout << "Enter the bonus received: ";
        cin >> bonus;
    }
    void calcBonus(){
        totalSalary = basicsalary + dailyallowance + houserent + bonus;
    }
    void displaySalarySlip(){
        cout << "Salary Slip" ;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Daily Allowance: " << dailyallowance << endl;
        cout << "House Rent: " << houserent << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main(){
    Bonus obj;
    obj.getEmployeeDetails();
    obj.getsalaryDetails();
    obj.getBonus();
    obj.calcBonus();
    obj.displaySalarySlip();

    return 0;
}
