#include <iostream>
#include <vector>
using namespace std;

int main () {

    //Declaring Vector to take numbers to find majority element
    vector <int> vec1;


    //Taking no of element in vector
    int n;
    cout << "No of enter of element: ";
    cin >> n;

    //Resize vec1
    vec1.resize(n);


    //Taking element
    cout << "Enter element: ";
    for(int i=0; i<n; i++) {
        cin >> vec1[i];
    }


    //Varible to find frequence
    int freq, check = 0;
    
    
    //Loop to find no of occurence
    for (int i: vec1) {
        freq = 0;
        for(int j: vec1) {
            if( vec1[i] == vec1[j]) {
                freq++;
            }
        }
        if(freq > (n/2)) {
                cout << "\nThe majority element is " << vec1[i] << " occured " << freq << " times" << endl;
                check = 1;
                break;
            }
    }   


    //If majority element was not found
    if(check == 0) {
        cout << "\nThe majority element is not present" << endl;
    }


    return 0;
}