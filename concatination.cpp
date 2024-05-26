#include <iostream>
using namespace std;

int main() {
    string name = "Aayush ";
    string surname = "Gupta";
    string full , full1;
    cout<<name;
    cout<<surname <<endl;
    full = name + surname;
    cout<<full<<"\n";
    full1 = name.append(surname);
    cout<<full1<<endl;
    cout<<"Length ="<<name.length()<<endl;
    cout<<"Size = "<<name.size();
    return 0;
}