#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest_index])
            {
                smallest_index = j;
            }
        }
        swap(arr[i], arr[smallest_index]);
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    print_array(arr, n);
    return 0;
}