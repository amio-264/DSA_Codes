#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "Enter the nunmber of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter key to search: ";
    cin >> key;
    int result = linear_search(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";
    return 0;
}