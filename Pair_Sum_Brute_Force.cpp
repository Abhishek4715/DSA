#include <iostream>
using namespace std;

int main () {

    //Taking size of array
    int n;
    cout << "Enter size of element: ";
    cin >> n;

    //Declaring array
    int arr[n];

    //Taking element of array
    cout << "Enter element of array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    //Taking number to find
    int x;
    cout << "Enter number to find: ";
    cin >> x;

    int check = 0;

    //Looking of number
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if(arr[i]+arr[j] == x) 
                cout << "Pair: " << arr[i] << " & " << arr[j] << " found at indexs: " << i <<" & " << j << endl;
                check = 1;
            
             
        }
    }

    if (check != 1) {
        cout << "\nThe pair of sum " << x << " was not found\n";
    }
    
    return 0;
}