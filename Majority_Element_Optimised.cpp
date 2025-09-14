#include <iostream>
#include <vector>
#include <algorithm>

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


    //Sorting vector
    sort(vec.begin(), vec.end());           //O(n) = nlogn


        //Finding frequency
        int freq = 1, maxfreq = 1, major = vec[0], check = 0;
        for (int i=0; i<n-1; i++) {
            if( vec[i] == vec[i+1]) {
                freq++;
            }

            else {
                freq = 1;
            }

            if(freq > maxfreq) {
                major = vec[i];
                maxfreq = freq;
            }
        }  

    //Printing Majority element
    if (maxfreq > n/2) {
        cout << "The majority element is: " << major << " occurred " << maxfreq << " times" << endl;
    }
    
    else {
        cout << "No majority element is present";
    }

    return 0;
}