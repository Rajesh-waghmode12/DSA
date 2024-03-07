#include<iostream>
using namespace std;

int find(int *arr,int n,int N){

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n;i++){
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i + 1);
    }
    xor2 = xor2 ^ N;
    return xor1 ^ xor2;
}

int main(){

    int arr[] = {1, 2, 3, 4,5,7};

    cout << find(arr, 6,7);

    return 0;
}