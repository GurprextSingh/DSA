#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of Array: " << endl;
    cin >> size;
    int arr[size];
    cout<<"Enter Values: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}