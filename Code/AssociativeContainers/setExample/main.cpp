#include <iostream>
#include<set>
using namespace std;

void testDuplicates(){
    set<int> mySet;
    mySet.insert(137);//137
    mySet.insert(42);//42   137
    mySet.insert(137);//42  137, set do not allow for duplicates

}

void grocery(){
    set<string> groceryList;
    groceryList.insert("milk");
    groceryList.insert("eggs");
    cout<<"set contains milk: "<<groceryList.count("milk")<<endl;
    cout<<"set contains eggs: "<<groceryList.count("eggs")<<endl;
    groceryList.erase("eggs");
    cout<<"after erase eggs, set contains eggs= "<<groceryList.count("eggs")<<endl;
    auto found = groceryList.find("milk");
    cout<<"find milk:     "<<(*found)<<endl;

}
int main() {
    testDuplicates();
    grocery();
    return 0;
}