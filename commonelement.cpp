#include<iostream>
#include<vector>
using namespace std;

// void commonElements(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
// {
//     int i = 0, j = 0, k = 0;
//     // vector<int> ans;
//     int prev1, prev2, prev3;

//     prev1 = prev2 = prev3 = INT32_MIN;

//     while (i < n1 && j < n2 && k < n3)
//     {

//         while (ar1[i] == prev1 && i < n1)
//             i++;

//         while (ar2[j] == prev2 && j < n2)
//             j++;

//         while (ar3[k] == prev3 && k < n3)
//             k++;

//         if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
//         {
//             ans.push_back(ar1[i]);
//             // cout << ar1[i] << endl;
//             prev1 = ar1[i];
//             prev2 = ar2[j];
//             prev3 = ar3[k];
//             i++;
//             j++;
//             k++;
//         }

//         else if (ar1[i] < ar2[j])
//         {
//             prev1 = ar1[i];
//             i++;
//         }

//         else if (ar2[j] < ar3[k])
//         {
//             prev2 = ar2[j];
//             j++;
//         }

//         else
//         {
//             prev3 = ar3[k];
//             k++;
//         }
//     }

//     return ans;
// }

void commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    vector<int> ans;
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] == C[k])
        {
            ans.push_back(A[i]);
            cout << A[i] << endl;
            i++;
            j++;
            k++;
        }
        if ((A[i] < B[j]) && (A[i] < C[k]))
        {
            ans.push_back(A[i]);
            i++;
        }
        else if ((B[j] < A[i]) && (B[j] < C[k]))
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    // return ans;
}

int main(){

    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    // vector<int> ans;
    commonElements(A, B, C, 6, 5, 8);

    // for (int i = 0; i < ans.size();i++){
    //     cout << ans[i] << " ";
    // }

    return 0;
}