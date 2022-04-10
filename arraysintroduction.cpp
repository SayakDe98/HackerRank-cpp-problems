/*
Sample Input:
4
1 4 3 2
Sample Output:
2 3 4 1
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
   // int *arr=new int[1000];
    int arr[1000];
    cin>>n;
    int output[1000];
    int i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
       output[i]=arr[n-i-1];
    for(i=0;i<n;i++)
        cout<<output[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
