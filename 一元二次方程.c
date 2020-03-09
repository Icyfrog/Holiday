#include <stdio.h>
#include <math.h>
int main() {

    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float dt = b*b - 4*a*c;
    float x1 = 0, x2 = 0;
    if (dt > 0) {
        float sq = sqrt(dt);
        x1 = ((-1*b) + sq) / (2*a);
        x2 = ((-1*b) - sq) / (2*a);
        if (x1 > x2)
            printf("x1=%.5f;x2=%.5f", x1, x2);
        else
            printf("x1=%.5f;x2=%.5f", x2, x1);
    }
    else if (dt == 0) {
        if (b == 0)
            printf("x1=x2=0");
        else {
        x1 = (-1 * b) / (2 * a);
        printf("x1=x2=%.5f", x1);
        }
    }
    else if (dt < 0 ) {
        float sq = sqrt(-1*dt) / (2*a);
        if (b == 0)
            x1 = 0;
        else
            x1 = (-b)/(2*a);
        printf("x1=%.5f+%.5fi;", x1, sq);
        printf("x2=%.5f-%.5fi", x1, sq);
    }

    return 0;

}
