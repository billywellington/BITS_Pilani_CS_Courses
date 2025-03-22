#include <stdio.h>

void func(int user_num){
    static int sum = 0, rem, div_ans;
    if (user_num < 10){
        sum = sum + user_num;
        printf("The sum of the digits of the number is: %d\n", sum);
        return;
    }
    else{
        rem = user_num % 10;
        div_ans = user_num / 10;
        sum = sum + rem;
        func(div_ans);
    }
}
void main(){

    int user_num;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    func(user_num);
}
