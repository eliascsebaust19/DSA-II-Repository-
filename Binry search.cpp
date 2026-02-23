#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int left = 0, right = n - 1;
    int flag = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            cout << "Found at index " << mid << endl;
            flag = 1;
            break;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (flag == 0)
        cout << "Not Found" << endl;

    return 0;
}
