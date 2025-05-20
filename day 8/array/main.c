#include <stdio.h>
int add() {
    int x, y;
    scanf("%d%d", &x, &y);
    return x + y;
}

int main() {
    int x = add(); 
    printf("%d\n", x);

    printf("%d\n", add()); 
    printf("%d\n", add()); 

    return 0;
}
