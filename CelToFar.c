#include <stdio.h>
#include <limits.h>

int main(int argc, char * argv[]) {
    int i;

    for (i = 0; i <= 100; i+= 10) {
        float ans = i * ((float) 9 / 5) + 32;
        printf("%d Celsius is equal to %f Fahrenheit\n", i, ans);
    }

    return 0;
}
