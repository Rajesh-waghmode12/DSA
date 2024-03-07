#include<iostream>
using namespace std;

int *MinMax(int arr[], int size, int arr2[])
{

    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    arr2[0] = min;
    arr2[1] = max;

    return arr2;
}

int main(){

    int arr[] = {1000, 11, 90000,445, 1, 330, 3000};
    int arr2[2];
    MinMax(arr, 6,arr2);
    cout << "minimun " <<arr2[0]<< endl;
    cout << "maximum " <<arr2[1]<< endl;
}