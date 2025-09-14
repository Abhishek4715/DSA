#include <iostream>
#include <vector>
using namespace std;

int main () {

    //No of element
    int n;
    cout << "Enter number of element: ";
    cin >> n;

    //Declaring vector
    vector <int> vec (n,0);


    //Taking input
    cout << "Enter element: ";
    for(int i = 0; i < n; i++) {
    cin >> vec[i];
    }

    //Voting
    int freq = 0, major;
    for (int i = 0; i<n; i++) {
        if(freq == 0) {
            major = vec[i];
        }

        if(vec[i] == major) {
            freq ++;
        }
        else {
            freq--;
        }
    }

    cout <<"\nThe major element is: " << major << endl;
    return 1;
}