#include <iostream>
using namespace std;
int main() 
{
    const int max = 100;
    int arr[max], n, loc, New;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
    cout << "Enter the position to insert the new element: ";
    cin >> loc;
    if (loc < 0 || loc > n) 
    {
        cout << "Invalid position." << endl;
    } 
    else 
    {
        cout << "Enter the new value to insert: ";
        cin >> New;
        for (int i = n; i > loc; --i) 
        {
            arr[i] = arr[i - 1];
        }
        arr[loc] = New;
        n++;
        cout << "Updated array:\n";
        for (int i = 0; i < n; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
