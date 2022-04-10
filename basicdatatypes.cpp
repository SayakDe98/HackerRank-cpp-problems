/*
Sample Input : 3 12345678912345 a 334.23 14049.30493
Sample Output : 3
12345678912345
a
334.230
14049.304930000
*/

#include <iostream>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cin >> i >> l >> c >> f >> d;
    printf("%d\n%ld\n%c\n%f\n%lf" , i , l , c , f , d);
    return 0;
}
