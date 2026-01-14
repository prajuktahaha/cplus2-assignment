//create an enum(Day) for days of the week and print a message based on the day using switch case
#include<iostream>
using namespace std;
enum Day {Sunday , Monday , Tuesday , Wednesday , Thursday , Friday , Saturday};
int main(){
    int num;
    cout << "Enter a day number(1-7): ";
    cin >> num;
    Day d = (Day)num;
    switch(d){
        case Sunday : cout << "Sunday" ; break;
        case Monday : cout << "Monday" ; break;
        case Tuesday : cout << "Tuesday" ; break;
        case Wednesday : cout << "Wednesday" ; break;
        case Thursday : cout << "Thursday" ; break;
        case Friday : cout << "Friday" ; break;
        case Saturday : cout << "Saturday" ; break;
        default : cout << "invalid number";break;
    }
    return 0;

}
