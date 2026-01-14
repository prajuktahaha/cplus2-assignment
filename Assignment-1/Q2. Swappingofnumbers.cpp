#include<iostream>
using namespace std;
void SwapNumbers(int&a , int&b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x , y;
    cout << "Enter two numbers :";
    cin>>x>>y;
    SwapNumbers(x,y);
    cout << "After Swapping : " ;
    cout << x << " " << y;
    return 0;
}
