//
//  print_pado.c
//  W01-Practical-New
//
//  Created by apple on 2018/2/11.
//  Copyright © 2018年 Elsa Wei. All rights reserved.
//

#include <stdio.h>
#include "pado.h"
int main() {
    int n = 0;
    printf("Length?");
    scanf("%d", &n);
    printf("%d", padocalc(n));
    char buffer[10000];
    int value = padocalc(n);
    sprintf(buffer, "%d", value);
    char test[1000];
    test[0] = '[';
    test[1] = buffer;
    test[2] = ',';
    test[3] = ']';
    printf("%s", test);
    return 0;
    
}
