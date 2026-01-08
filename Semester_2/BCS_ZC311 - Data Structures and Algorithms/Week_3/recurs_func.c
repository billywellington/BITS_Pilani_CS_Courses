//
// Created by billy on 2025/12/17.
//

#include <stdio.h>
int recurs_func(int n){
    if (n == 1) {
        return 1;
    }
    return n * recurs_func(n - 1);
}

int main(){
    int value = 5;

   int ans = recurs_func(value);
    printf("%d factorial = %d", value, ans);
    return 0;
}