//
//  main.c
//  TurkeyTimer
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

//void means not returning a value
void showCookTimeForTurkey(int pounds) {
    int necessaryMinutes = 15 + 15 * pounds;
    printf("Cook for %d minutes. \n", necessaryMinutes);
    if (necessaryMinutes > 120) {
        int halfway = necessaryMinutes / 2;
        printf("Rotate after %d of the %d minutes.\n", halfway, necessaryMinutes);
    }
}
//main is always executed first
int main(int argc, const char * argv[]) {
    int totalWeight = 10;
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    
    return 0;
}
