/*
Sample Input:
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output:
5
9
*/
//#include <cmath>//not needed 
//#include <cstdio>//not needed
#include <vector>
#include <iostream>
//#include <algorithm>//not needed 
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,size,element;
    cin>>n>>q;//getting n the no of rows,q the number of questions
    vector<vector<int> > vec1;//2D vector
    
    for(int i=0 ; i < n ;i++)//outer loop of 2D vector runs from 0th row to n-1th row
    {
        cin>>size;//first element of this outer loop gets the size of the inner loop
        vector<int> ivec;//1D array to get values for inner loop elements
        for(int j=0;j<size;j++)//inner loop to get values of the inner vector
        {
            cin>>element;//inputs inner loop vector values
            ivec.push_back(element);//adds values to the end of vector
        }
        vec1.push_back(ivec);//pushes the inner vector into the outer vector
    }
    int row,index;
    for(int k=0;k<q;k++)//loop to find element at a row number and index and print them 
    {
        cin>>row>>index;//gets the row number and index which is to be displayed
        cout<<vec1[row][index]<<endl;    
    }
    
    return 0;
}
