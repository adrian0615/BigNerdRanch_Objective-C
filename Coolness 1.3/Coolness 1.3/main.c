//
//  main.c
//  Coolness 1.3
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//
//Added libreadline.tbd library in the Build Phases of the project

#import <readline/readline.h>
#import <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Who is cool? ");
    const char * name = readline(NULL);
    printf("%s is cool!\n\n", name);
    
    return 0;
}
