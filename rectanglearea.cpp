/*Sample Input:
10 5
Sample Output:
10 5
50
*/

#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle
{
    protected:
    int width,height;
    public:
        void display()
        {
            cout<<width<<" "<<height<<endl;
            
        }
};

class RectangleArea : public Rectangle
{
    public:
    void read_input()
    {
        cin>>width>>height;
    }
    
    void display()
    {
        cout<<width*height<<endl;
    }
    
}; 
