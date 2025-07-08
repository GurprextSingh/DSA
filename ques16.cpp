#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    int n, input, target;

    // Step 1: Take number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Step 2: Take elements into vector
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> input;
        vec.push_back(input);
    }

    // Step 3: Ask for the target value
    cout << "Enter the target value to count: ";
    cin >> target;

    // Step 4: Count how many times target appears
    int count = 0;
    cout << "Values in Vector are: ";
    for (int val : vec) {
        cout << val << " ";
        if (val == target) {
            count++;
        }
    }

    cout << "\n" << target << " appears " << count << " times in the vector.\n";

    return 0;
}
