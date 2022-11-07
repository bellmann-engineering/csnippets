#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() 
{ 
    // Initialize vector 
    vector<int> v; 

    v.push_back(1); 
    v.push_back(4); 
    v.push_back(2); 
    v.push_back(5); 
    v.push_back(3); 

    // iterator pointing to 
    // position where 2 is 
    auto pos = find(v.begin(), v.end(), 2);

    // prints the elements 
    cout << "The set elements after 3 are: "; 
    for (auto it = pos; it != v.end(); it++) 
        cout << *it << " "; 

    return 0; 
}
