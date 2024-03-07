#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 4, 1, 1, 1, 4, 2, 3};
    int sum = 0;
    for (int i = 0; i < 9;i++){
        sum = 0;
        for (int j = 0; j < 9;j++){
            for (int k = i; k <= j;k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}