//
//  main.c
//  Turkey
//
//  Created by Adrian McDaniel on 3/5/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declare the variable called 'weight' of type float
    float weight;
    
    //Store a number in that variable
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weighs %f. \n", weight);
    
    float cookingTime;
    
    //Calculate the cooking time and store it in the variable
    //In this case, '*' means 'multiply by'
    cookingTime = 15.0 + 15.0 * weight;
    
    //Log that to the user
    printf("Cook it for %f minutes. \n", cookingTime);
    
    //End this function and indicate success
    return 0;
}
