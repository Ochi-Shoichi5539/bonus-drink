#include <stdio.h>

int Bonus_drink(int buy_drink) {
    int total = 0;
    int quotient, remainder, tmp;
    int division = 3;
    quotient = buy_drink / division;
    remainder = buy_drink % division;
    total = buy_drink;
    while (1) {
        tmp = quotient + remainder; //tmp�́Abuy_drink��3�Ŋ������]��Ə��̘a
        total += quotient;
        quotient = tmp / division;
        // printf("����%d\n", quotient);
        remainder = tmp % division;
        // printf("���܂��%d\n", remainder);
        if (quotient == 0) {
            break;
        }
    }
    return total;
}


//�P�̃e�X�g
int main(void) {
    printf("�w�������{����0�{�̏ꍇ�̍��v�{����%d\n", Bonus_drink(0));
    printf("�w�������{����1�{�̏ꍇ�̍��v�{����%d\n", Bonus_drink(1));
    printf("�w�������{����3�{�̏ꍇ�̍��v�{����%d\n", Bonus_drink(3));
    printf("�w�������{����11�{�̏ꍇ�̍��v�{����%d\n", Bonus_drink(11));
    printf("�w�������{����100�{�̏ꍇ�̍��v�{����%d\n", Bonus_drink(100));
    return 0;
}

