#include <iostream>
using namespace std;

void testReference(){
    //reference:
    int ival = 1024;
    int &refVal = ival; //refVal refers to (is another name for ) ival
    //int &refVal2; //error, a reference must be initialized
    cout<<"ival: "<<ival<<endl;
    cout<<"refVal: "<<refVal<<endl;

    refVal = 100;
    cout<<"ival: "<<ival<<endl;
    cout<<"refVal: "<<refVal<<endl;
}

int main() {
    cout << "Hello, World!" << endl;
    testReference();
    return 0;
}