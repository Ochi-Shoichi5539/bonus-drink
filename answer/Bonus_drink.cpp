#include <stdio.h>

int Bonus_drink(int buy_drink) {
    int total = 0;
    int quotient, remainder, tmp;
    int division = 3;
    quotient = buy_drink / division;
    remainder = buy_drink % division;
    total = buy_drink;
    while (1) {
        tmp = quotient + remainder; //tmpは、buy_drinkを3で割った余りと商の和
        total += quotient;
        quotient = tmp / division;
        // printf("商は%d\n", quotient);
        remainder = tmp % division;
        // printf("あまりは%d\n", remainder);
        if (quotient == 0) {
            break;
        }
    }
    return total;
}


//単体テスト
int main(void) {
    printf("購入した本数が0本の場合の合計本数は%d\n", Bonus_drink(0));
    printf("購入した本数が1本の場合の合計本数は%d\n", Bonus_drink(1));
    printf("購入した本数が3本の場合の合計本数は%d\n", Bonus_drink(3));
    printf("購入した本数が11本の場合の合計本数は%d\n", Bonus_drink(11));
    printf("購入した本数が100本の場合の合計本数は%d\n", Bonus_drink(100));
    return 0;
}

