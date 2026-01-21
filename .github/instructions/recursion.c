// recursive function 5 ,4,3,2,1
#include <stdio.h>  
void recursivePrint(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d\n", n);
    recursivePrint(n - 1);
}
int main() {
    int number = 5;
    recursivePrint(number);
    return 0;
}