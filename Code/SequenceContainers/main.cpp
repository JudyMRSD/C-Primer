#include <iostream>
#include <vector>
using namespace std;

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
    for(size_t i = 0; i<v.size(); ++i){
        size_t smallestIndex = GetSmallestIndex(v, i);
        swap(v[i], v[smallestIndex]);
    }

}

int main() {
    cout << "Test selection sort" << endl;
    int kNumValues = 5;
    vector<int> values;
    for(int i = 0; i<kNumValues; ++i){
        //v1 = rand() % 100;         // v1 in the range 0 to 99
        //rand() Returns a pseudo-random integral number in the range between 0 and RAND_MAX.
        values.push_back(rand()%100);
    }
    SelectionSort(values);

    for(size_t i = 0; i<kNumValues; ++i){
        cout<<values[i]<<endl;
    }


    return 0;
}