/*Sample Input : 1 2 7
Sample Output : 10
*/

#include <iostream>
using namespace std;


int main() {
        
    int n , sum=0;
    
    for(int i=1;i<=3;i++)
    { 
           cin >> n;
           sum += n;
    }    
    
    cout << sum << endl;
   
    return 0;
}
