#include <iostream>
using namespace std;

int main() {
    int num,num1,num2;
    cout<<"Enter the number 1 = "<<endl;
    cin>>num1;
    cout<<"Enter the number 2 ="<<endl;
    cin>>num2;
    num = num1 + num2;
    cout<<"Sum of number ="<<num<<"\n";
    num = num1 - num2;
    cout<<"sub = "<<num<<"\n";
    float mark,m1,m2;
    cout<<"Enter the m1 = "<<endl;
    cin>>m1;
    cout<<"Enter the m2 = "<<endl;
    cin>>m2;
    mark = m1*m2;
    cout<<"Product = "<<mark<<"\n";
    mark = m1/m2;
    cout<<"div = "<<mark<<endl;
    return 0;
}