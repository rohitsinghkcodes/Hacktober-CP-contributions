#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
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
    bubblesort(arr, n);
    cout << "\nArray After Apply Merge Sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}