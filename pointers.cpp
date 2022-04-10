/*
Sample Input:
4
5
Sample Output:
9
1
*/

#include <stdio.h>
#include<cmath>
void update(int *a,int *b) {
    // Complete this function    
        int originala=(*a);
        (*a)=(*a)+(*b);
        (*b)=abs(originala-(*b));
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
