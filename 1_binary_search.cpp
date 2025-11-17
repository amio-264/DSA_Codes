#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int data)
{
    int l, r;
    l = 0;
    r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (data == arr[mid])
        {
            return mid;
        }
        else if (data > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 35, 45, 67, 89, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin>>target;
    int result = binary_search(arr, n, target);
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