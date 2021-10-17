#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    cout << "Array Before Apply Insertion Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    insertionsort(arr, n);
    cout << "\nArray After Apply Insertion Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}