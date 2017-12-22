#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void traverseVector(){
    int n = 5;
    int k = 2;
    //create a vector with n copies of value k
    vector<int> myVector(n, k);
    for (int i = 0; i<n; i++){
        cout<<"original   "<<myVector.at(i)<<endl;
        myVector.at(i) = rand()%10;
    }
    for (vector<int>::iterator iter = myVector.begin(); iter!=myVector.end(); ++iter){
        cout<<"modified   "<<*iter<<endl;
    }
}

void traverseDeque(){
    cout<<"traverse deque"<<endl;
    int n = 5;
    deque<int> myDeque;
    for (int i = 0; i<n; i++){
        myDeque.push_back(i);
    }
    for (deque<int>::iterator iter = myDeque.begin(); iter!=myDeque.end(); ++iter){
        cout<<*iter<<endl;
    }
}



int main() {
    traverseVector();
    traverseDeque();
    return 0;
}