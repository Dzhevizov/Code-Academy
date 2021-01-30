#include <stdio.h>
#include <math.h>

int lcm(unsigned int a, unsigned int b){
    unsigned int max, step, lcm;
    if (a>b){
        max = step = a;
    }
    else{
        max = step = b;
    }
    while(1){
        if (max % a == 0 && max % b == 0){
            lcm = max;
            break;
        }
        max += step;
    }
    return lcm;
}

float absValue(float a){
    if (a < 0){
        a = -a;
    }
    return a;
}

float sqr(float a){
    float rqRoot = sqrt(a);
        return rqRoot;
}
