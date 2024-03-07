#include<iostream>
using namespace std;

void sort012(int a[], int n)
{
    // code here
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid < high)
    {

        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

void print(int *arr,int size){

    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1, 0, 0, 2, 2, 2, 1, 2, 0};
    sort012(arr, 9);

    print(arr, 9);
}