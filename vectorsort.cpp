/*
Sample Input:
5
1 6 10 8 4

Sample Output:
1 4 6 8 10
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> v;
    int element;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        v.push_back(element);
        
    } 
    
        sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
            
      cout<<  v.at(i)<<" ";
    }
    return 0;
}
