/*
Sample Input 0 : 5
Sample Output 0 : five
Sample Input 1 : 8
Sample Output 1 : eight
Sample Input 2 : 44
Sample Output 2 : Greater than 9
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n==1)
        cout << "one" << endl;
    if(n==2)
        cout << "two" << endl;
    if(n==3)
        cout << "three" << endl;
    if(n==4)
        cout << "four" << endl;
    if(n==5)
        cout << "five" << endl;
    if(n==6)
        cout << "six" << endl;
    if(n==7)
        cout << "seven" << endl;
    if(n==8)
        cout << "eight" << endl;
    if(n==9)
        cout << "nine" << endl;
    if(n>9)
        cout << "Greater than 9" << endl;
    
    return 0;
    
}
