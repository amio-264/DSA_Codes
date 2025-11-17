#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n;i++){
        int curr=arr[i]; // first element of the unsorted array is current
        int prev = i - 1; // previous element of current element
        while(prev>=0 && arr[prev]>curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
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
    insertion_sort(arr, n);
    print_array(arr, n);
    return 0;
}