#include <iostream>
using namespace std;

int main () {
    int n;
    cout << ("Enter the size of array: ");
    cin >> n;

    int arr[n];

    cout << ("Enter element of array: ");
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int Currsum = 0, maxsum = -20131313;

    for (int val: arr) {
        Currsum +=val;
        maxsum = max(Currsum, maxsum);
        if (Currsum <  0){
            Currsum = 0;
        }
    }
    
    cout << "The maximum sum of subarray; " << maxsum << endl;
    return 0;
}