#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int data)
{
    for (int i = 0; i < n; i++){
        if(arr[i]==data){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 35, 45, 67, 89, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;
    int result = linear_search(arr, n, target);
    if (result != -1)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}