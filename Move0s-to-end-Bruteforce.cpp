#include<iostream>
using namespace std;

void print(int *arr,int n){

    for (int i = 0; i < n;i++){

        cout << arr[i] << " ";
    }
}


// void move(int *arr,int n){

//     int temp[7];
//     int k = 0;
//     for (int i = 0; i < n;i++){
//         if(arr[i] != 0){
//             temp[k] = arr[i];
//         }
//     }
//     int i = 0;
//     for (; i <= k; i++){
//         arr[i] = temp[i];
//     }
//     while( i < n){
//         arr[i] = 0;
//     }
// }

void move(int *arr,int n){

    int i = 0;
    int j = 0;

    while(i < n){

        if(arr[i] == 0){
            i++;
        }
        else{
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
}

int main(){

    int arr[] = {1,0, 2, 5, 8, 0, 0, 4};
    move(arr, 8);
    print(arr, 8);

    return 0;
}