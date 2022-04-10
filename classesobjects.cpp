/*Sample Input:
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output:
1
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student
{
    int sum;
    int score[5];
    public:
        Student() : sum(0){};//intialize constructor
            void input()
            {
                for(int i=0;i<5;i++)
                {
                cin>>score[i];
                sum+=score[i];
                }
            }
    
        int calculateTotalScore();
};

int Student ::  calculateTotalScore()
{
   return sum;
} 
int main() {
