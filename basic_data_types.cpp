#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    float b;
    char c;
    double d;
    long l;
    scanf("%d %ld %c %f %lf",&a ,&l,&c,&b,&d);
    printf("%d\n%ld\n%c\n%0.3f\n%.9lf",a,l,c,b,d);
    return 0;
}