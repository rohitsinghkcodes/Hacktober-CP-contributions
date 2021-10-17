#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i = l, j = m + 1, k = l;
    int size = (r - l) + 1;
    int temp[size];
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int p = l; p <= r; p++)
    {
        arr[p] = temp[p];
    }
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
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
    cout << "Array Before Apply Merge Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    mergesort(arr, 0, n - 1);
    cout << "\nArray After Apply Merge Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}