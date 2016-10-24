#include <iostream>

using namespace std;

double mean(const double array[], int arraySize);
void remove(double array[], int arraySize, int index);
void display(const double array[], int arraySize);

int main() {
    int ARR_CAP = 10;
    double arr1[ARR_CAP];
    int removeVal;
    
    cout << "Enter " << ARR_CAP << " values:" << endl;
    
    for (int i = 0; i< ARR_CAP; ++i) {
        cin >> arr1[i];
    }
    cout << endl;
    
    double p = mean(arr1, ARR_CAP);
    cout << "Mean: " << p << endl << endl;
    
    cout << "Enter index of value to be removed: ";
    cin >> removeVal;
    cout << endl;
    
    cout << "Before removing value: ";
    display(arr1, ARR_CAP);
    cout << endl;
    
    remove(arr1, ARR_CAP, removeVal);
    
    cout << "After removing value: ";
    display(arr1, ARR_CAP - 1);
    cout << endl;
    
    return 0;
}

double mean(const double array[], int arraySize) {
    double mean = 0.0;
    
    for (int i = 0; i < arraySize; ++i) {
        mean = mean + array[i];
    }
    mean = mean / arraySize;
    
    return mean;
}

void remove(double array[], int arraySize, int index) {
    for (int i = 0; i < arraySize - 1; ++i) {
        if (i >= index && i < arraySize) {
            array[i] = array[i + 1];
        }
    }
}

void display(const double array[], int arraySize) {
    for (int i = 0; i < arraySize; ++i) {
        if (i != (arraySize - 1)) {
           cout << array[i] << ", ";        
        }
        else {
            cout << array[i];
        }
    }
}