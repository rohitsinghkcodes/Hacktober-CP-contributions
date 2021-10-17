#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pindex = s;
    for (int i = s; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[pindex]);
            pindex++;
        }
    }
    swap(arr[e], arr[pindex]);
    return (pindex);
}
void quicksort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quicksort(arr, s, p - 1);
        quicksort(arr, p + 1, e);
    }
}
int main()
{
    int n;
    cout << "Enter size of an Array ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers of element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array Before Apply Quick Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    quicksort(arr, 0, n - 1);
    cout << "\nArray After Apply Quick Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}