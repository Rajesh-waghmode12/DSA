#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void find(int *arr,int n){

//     int mini = INT32_MAX;
//     int maxi = INT32_MIN;
//     for (int i = 0; i < n;i++){
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }
//     cout << " minimum element is ->" << mini << endl;
//     cout << " maximum element is ->" << maxi << endl;
// }
void print(int *arr,int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// void doUnion(int a[], int n, int b[], int m)
// {
//     // code here
//     int k = 0;
//     int arr[m + n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[k++] = a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         arr[k++] = b[i];
//     }
//     sort(arr, arr+k);
//     print(arr, k);
//     int union1 = 0;
//     int prev = -1;

//     for (int i = 0; i < k;i++){
//        if(arr[i] != prev){
//            union1 = union1 + 1;
//        }
//        prev = arr[i];
//     }
//     cout <<  union1;
// }

void smallestSubWithSum(int arr[], int n, int x)
{
    // Your code goes here
    int ans = 0;
    int sum = 0;
    int j = 0;
    for (int i = 0 ; i < n; i++){
        sum = sum + arr[j];
        ans++;
        if (sum > x){
            break;
        }
        j++;
    }
    int i = 0;
    while(j < n){
        while(sum - arr[i] > x){
            sum = sum - arr[i];
            i++;
            ans = min(ans, j - i + 1);
        }
        j++;
        sum += arr[j];
        // ans++;
    }
    cout << ans;
}
int main(){

    int A[] = {1, 4, 45, 6, 0, 19};
    smallestSubWithSum(A, 6, 51);


    return 0;
}