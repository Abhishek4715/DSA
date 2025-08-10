#include <iostream>
#include <vector>
using namespace std;

int main () {

    //Declaring
    vector<long int> vec ;            
    
    //Assigning 
    vec = {1,2,3,4};                

    //Different way to assign (four is length and 0 is value for each)
    vector <int> v(4,0);            

    //Printing Vector 1
    cout << "Vector 1 : ";
    for (int i=0; i<4; i++) {       
        cout << vec[i];             
    }

    //Another way to printing (i is value at each index)
    cout << "\nVector 2 : ";
    for (int i: v) {       
        cout << i;                  
    }

    //Printing one element
    cout << "\n\nThe vector: " << vec[0] ;

    //Size of vector
    cout << "\n\nThe size of Vector 1: " << vec.size() ;

    //Capacity of vector
    cout << "\n\nThe capacity of Vector 1: " << vec.capacity() ;

    //Pushback
    vec.push_back(5);
    cout << "\n\nSize of vector 1 after pushback: " << vec.size();

    //Capacity of vector
    cout << "\n\nThe capacity of Vector 1: " << vec.capacity();         //Capacity double everytime we uses push_back

    //Popback
    vec.pop_back();
    cout << "\n\nSize of vector 1 after popback: " << vec.size();

    //Front
    cout << "\n\nFront of vector 1: " << vec.front();

    //Back
    cout << "\n\nBack of vector 1: " << vec.back();

    //At
    cout << "\n\nVector at 0: " << vec.at(3);               //3 is index in vector

    //

    return 0;
} 