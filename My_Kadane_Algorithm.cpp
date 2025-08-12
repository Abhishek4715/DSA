#include <iostream>
#include <climits>
using namespace std;

int main () {
    
    //Taking size of array
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    //Initialising an array
    int arr[n];
    
    //Taking it values
    cout << "Enter elements of array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    //Varible used in loop
    int i, max_sum=INT_MIN, curr=0;
    
    //Loop
    for (i=0; i<n; i++) {
        curr += arr[i];
        if (max_sum<curr) {
            max_sum = curr;
        }
        if (curr<0) {
            curr = 0;
        }
    }

    //Displaying Subarray Sum
    cout << "The maximum Subarray Sum: " << max_sum << endl;

    return 0;
}