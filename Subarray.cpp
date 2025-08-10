#include <iostream>
using namespace std;

int main () {
    int n;
    cout << ("Enter the size of array: ");
    cin >> n;

    int arr[n];

    cout("Enter element of array: ");
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        for (int end=i; end<n; end++) {
            for (int j=i; j<=end; j++) {
                cout << arr[j];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}