#include <iostream>
using namespace std;
int main() 
{
    const int max = 100;
    int arr[max], n, old, New;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
    cout << "Enter the value to be replaced: ";
    cin >> old;
    cout << "Enter the new value: ";
    cin >> New;
    bool found = false;
    for (int i = 0; i < n; ++i) 
    {
        if (arr[i] == old) 
        {
            arr[i] = New;
            found = true;
            break;
        }
    }
    if (found) 
    {
        cout << "Updated array: " << endl;
        for (int i = 0; i < n; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    } 
    else 
    {
        cout << "Element with value " << old << " not found in the array." << endl;
    }
    return 0;
}
