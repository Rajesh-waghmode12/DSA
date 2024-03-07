#include<iostream>
using namespace std;

void vv(){

    sort(A, A + n);
    for (int i = 0; i < n; i++){
        int y = X - A[i];
        int low = i + 1, high = n - 1;
        while (low < high){
            if (A[low] + A[high] == y){
                return 1;
            }
            else if (A[low] + A[high] > y){
                high--;
            }

            else if (A[low] + A[high] < y) {
                low++;
            }
        }
    }
    return 0;
}

bool find3Numbers(int A[], int n, int X)
{
    // Your Code Here
    sort(A,A + n);
    for (int i = 0; i < n; i++){
        int low = i + 1;
        int high = n - 1;
        int y = X - A[i];

        while (low < high){
            if (A[low] + A[high] == y){
                return 1;
            }
            else if (A[low] + A[high] > y){
                high--;
            }
            else if (A[low] + A[high] < y){
                low--;
            }
        }
    }
    return 0;
}

int main(){

    int arr[] = {1, 4, 45, 6, 10, 8};
    cout << find3Numbers(arr, 6, 13);

    return 0;
}