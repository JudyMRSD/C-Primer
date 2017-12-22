#include <iostream>
#import <deque>
using namespace std;

void testDeque(){


}

size_t InsertionIndex(deque<int>& values, int val){
    for (int i = 0; i<values.size(); i++){
        if (val<values[i]){
            return i;
        }
    }
    //if val is larger than any number in the vector
    return values.size();
}

int main() {
    const int kNumValues = 5;
    deque<int> values;
    int val;
    int index;
    for (int i = 0; i<kNumValues; i++){
        val = rand()%10;
        index = InsertionIndex(values, val);
        values.insert(values.begin()+index, val);

    }
    for (int i = 0; i<values.size(); i++){
        cout<<values[i]<<endl;
    }



    return 0;
}