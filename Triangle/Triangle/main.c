//
//  main.c
//  Triangle
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angleA, float angleB) {
    float newAngle = angleA + angleB;
    
    return newAngle;
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
