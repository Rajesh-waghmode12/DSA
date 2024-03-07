#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> vet = {3, 5, 2, 6, 9, 45};
    int n = vet.size();
    int k = 2;

    // cout << *(vet.begin() + 2);
    // reverse(vet.begin(), vet.begin() + 2);
    // reverse(vet.begin(), vet.begin() - n - k);
    // reverse(vet.begin() + n - k + 1, vet.end());
    print(vet);

    return 0;
}