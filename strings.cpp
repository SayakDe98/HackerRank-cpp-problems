/*
Sample Input:
abcd
ef

Sample Output:
4 2
abcdef
ebcd af
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  cout<<a.length()<<" "<<b.length()<<endl;
  cout<<a+b<<endl;
  string temp;
  temp[0]=b[0];
  b[0]=a[0];
  a[0]=temp[0];
  cout<<a<<" "<<b<<endl;
  
    return 0;
}
