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

void testPointer(){
    cout<<"test pointer"<<endl;
    //declare a pointer to an integer
    int *ip;
    //declare a pointer to a double
    double *dp;
    //a pointer holds the address of another objecct
    //we get the address of an object by using the address of operator (&)
    int ival = 42;
    //p holds the address of ival
    //p is a pointer to ival
    ip = &ival;
    cout<<"ip:     "<<ip<<endl;//0x7fff595a5a0c
    cout<<"&ival:  "<<&ival<<endl;//0x7fff595a5a0c

    cout<<"use a pointer to access an object"<<endl;
    // when a pointer points to an object, we can
    // use the dereference (*) operator to access that object
    cout << "*ip:   " << *ip <<endl;//42
    //Dereferencing a opinter yields the object to which the pointer points
    //we can assign to that object by assigning to the result of the dereference
    *ip = 0;
    cout <<  "*ip:   " << *ip <<endl;//0
    cout <<  "ival:   " << ival <<endl;//0
    //null pointer
    int *p3 = NULL;

    //void pointer
    double obj = 3.14;
    double *pd = &obj;
    void *pv = &obj;//void pointer can hold a pointer to any type
    pv = pd;


}

int main() {
    cout << "Hello, World!" << endl;
    testReference();
    testPointer();
    return 0;
}