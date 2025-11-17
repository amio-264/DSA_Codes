#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int data)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (data == arr[mid])
            return mid;
        else if (data > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
int main()
{
    int n, data;
    cout << "Enter the number of Elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to find: ";
    cin >> data;
    int result = binary_search(arr, n, data);
    if (result != -1)
        cout << "Element is found: " << result;
    else
        cout << "Element is not found.";
    return 0;
}