#include <iostream>
#include <vector>
using namespace std;

using vecsz_t = std::vector<int>::size_type;


//-------------------------------vector---------------------------------------------
//input vector<int>& v passed by reference
//size_t startIndex   contains the start index
size_t GetSmallestIndex(vector<int>& v, size_t startIndex){
    size_t bestIndex = startIndex;
    for(size_t i = startIndex; i<v.size(); ++i){
        if(v[i]<v[bestIndex]){
            bestIndex = i;
        }
    }
    return bestIndex;
}
void SelectionSort(vector<int>& v){
    cout<<"selection sort starts "<<endl;
    for(size_t i = 0; i<v.size(); ++i){
        size_t smallestIndex = GetSmallestIndex(v, i);
        swap(v[i], v[smallestIndex]);
    }

}

void randomVect(vector<int>& values){
    int kNumValues = 5;
    for(int i = 0; i<kNumValues; ++i){
        //v1 = rand() % 100;         // v1 in the range 0 to 99
        //rand() Returns a pseudo-random integral number in the range between 0 and RAND_MAX.
        values.push_back(rand()%100);
        cout<<"size = "<<values.size()<<endl;
    }
}

void testSelectionSort(){
    cout << "Test selection sort" << endl;

    vector<int> values;
    randomVect(values);

    SelectionSort(values);

    for(size_t i = 0; i<values.size(); ++i){
        cout<<values[i]<<endl;
    }
}

size_t InsertionIndex(vector<int>& values, int val){
    for (int i = 0; i<values.size(); i++){
        if (val<values[i]){
            return i;
        }
    }
    //if val is larger than any number in the vector
    return values.size();
}

//insert the elements at the correct position
void testSort2(){
    cout << "Test sort 2" << endl;
    int kNumValues = 5;
    vector<int> values;
    //read the values
    for (int i = 0; i< kNumValues; ++i){
        int val = rand()%100;
        //insert element at correct position into a sorted vector, in ascending order
        values.insert(values.begin() + InsertionIndex(values, val), val);

    }
    //print out the sorted list
    for (size_t i = 0; i< values.size(); ++i){
        cout<<values[i]<<endl;
    }
}

void testVector(){
    cout<<"find median"<<endl;
    //initialize the vector to a certain size
    //primitive types(int, double) elements initialized to zero
    vector<int> myVector(15);
    //initialize to empty string
    vector<string> myStringVector(10);
    //specify both the number and default value
    vector<double> myReals(20, 137.0);
    vector<string> myStrings(5, "(none)");
    //can only use the syntax when initially creating a vector
    //vector<double> myReal2;
    //myReal2(20, 137.0);

}
//-------------------------------deque---------------------------------------------


void findMedian(){
    vector<int> values;
    randomVect(values);
    SelectionSort(values);

    // Find median:
    //     if vec size is odd, return middle elem
    //     if vec size is even, return average of middle two elems
    vecsz_t mid = values.size()/2;
    double median;

    if (values.size()%2 == 0){
        median = (values[mid-1] + values[mid])/2;
    }else{
        median = values[mid];
    }

    //print out the sorted list
    for (size_t i = 0; i< values.size(); ++i){
        cout<<values[i]<<endl;
    }
    cout<<"median= "<<median<<endl;

}



int main() {
    testSelectionSort();

    testSort2();
    testVector();

    findMedian();

    return 0;
}
















