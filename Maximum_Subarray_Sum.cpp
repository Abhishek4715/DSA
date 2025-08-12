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

    //Variable to find maximum subarray
    int str, end, i, sum=0,max_sum=INT_MIN;
    for (str=0; str<n; str++) {
        for (end=str; end<n; end++) {
            for (i=str; i<=end; i++) {
                sum += arr[i];
            }
            if (max_sum<sum) {
                    max_sum = sum;
                }
            sum = 0;
        }
    }

    cout << "Maximum subarray sum: " << max_sum << endl;
}