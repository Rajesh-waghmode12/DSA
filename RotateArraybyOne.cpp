#include<iostream>
using namespace std;

void printArray(int array[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void Rotate(int *arr,int n){

    int lastElement = arr[n - 1];

    for (int i = n - 2; i >= 0;i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = lastElement;
}

void print(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " " <<endl;
    }
    cout << endl;
}


int main(){

    int arr[] = {1, 2, 3, 4, 5,14,64,74,23};
    Rotate(arr, 9);
    printArray(arr, 9);

    return 0;
}