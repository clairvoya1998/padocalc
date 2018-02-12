//
//  recursive_pado.c
//  W01-Practical-New
//
//  Created by apple on 2018/2/11.
//  Copyright © 2018年 Elsa Wei. All rights reserved.
//

#include <stdio.h>
int padocalc(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return 1;
    }
    else return padocalc(n-2) + padocalc(n - 3);
}
