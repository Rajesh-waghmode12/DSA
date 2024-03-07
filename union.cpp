#include<iostream>
using namespace std;

// int doUnion(int a[], int n, int b[], int m)
// {

//     // code here
//     // cout << "function called" << endl;
//     int count = n + m;
//     // cout << count << endl;

//     for (int i = 0; i < n; i++)
//     {
//         // cout << a[i] << endl;
//         // cout << "I am in outer loop" << endl;
//         int key = a[i];
//         for (int j = 0; j < m; j++)
//         {
//             // cout << b[j] << endl;
//             // cout << "I am in inner loop" << endl;
//             if (b[j] == key)
//             {
//                 count--;
//             }
//         }
//     }
//     return count;
// }

void doUnion(int *a, int *b,int n,int m)
{
    int i = 0;
    int j = 0;

    while (i < n && j < m){
        if (a[i] == b[j]) {
            // ans.push_back(a[i]);
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]){
            // ans.push_back(a[i]);
            cout << a[i] << " ";
            i++;
        }
        else{
            // ans.push_back(b[j]);
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n) {
        // ans.push_back(a[i]);
        cout << a[i] << " ";
        i++;
    }
    while (j < m){
        // ans.push_back(b[j]);
        cout << b[j] << " ";
        j++;
    }
}    

    int main()
    {

        int a[5] = {1 ,2, 3, 4, 6};
        int b[3] = {2,3,5};
        doUnion(a, b,5, 3);

        return 0;
    }

    vector<int> sortedArray(vector<int> a, vector<int> b)
    {
        // Write your code here
        vector<int> ans;
        int i = 0;
        int j = 0;

        while (i < a.size() && j < b.size())
        {
            if (a[i] == b[j])
            {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while (i < a.size())
        {
            ans.push_back(a[i]);
            i++;
        }
        while (j < b.size())
        {
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }