// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// void move(int *arr, int n)
// {

//     int start = 0;
//     int end = n - 1;

//     while (start < end)
//     {
//         while (arr[start] < 0){
//             start++;}
//         while (arr[end] > 0){
//             end--;
//         }
//         cout << arr[start] << " " << arr[end] << endl;

//         if(arr[start] > arr[end]  ){
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//             break;
//         }
//     }
// }

void move(int *arr, int n)
{

    int end = 0;

    for (int i = 0; i < n;i++){

        if(arr[i] < 0){
            swap(arr[i], arr[end]);
            end++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++){
    
        cout << arr[i] << " ";
    }
}

int main()
{
    // Write C++ code here
    // std::cout << "Hello world!";
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    move(arr, 9);
    printArray(arr, 9);

    return 0;
}