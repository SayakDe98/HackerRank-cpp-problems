/*
Sample Input:
3
4
6
5
Sample Output:
6
*/
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a ,int b ,int c ,int d)
{
    int max;
    if(a>b && a>c && a >d)
        max = a;
    else if(b>a && b>c && b >d)
        max = b;
    else if(c>a && c>b && c >d)
        max = c;
    else if(d>a && d>c && d >a)
        max = d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}