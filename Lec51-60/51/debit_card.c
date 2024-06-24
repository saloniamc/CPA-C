#include <stdio.h>
#include <stdlib.h>

#define MAX_HOLDER_NAME_CHARS 128
#define MAX_VENDOR_NAME_CHARS 64

struct date
{
    unsigned char day, month;
    int year;
};

struct debitCard
{
    char holder_name[MAX_HOLDER_NAME_CHARS];
    unsigned long long card_number;
    unsigned short card_cvv;
    struct date card_valid_thru_date;
    struct date card_expirey_date;
    char card_vendor[MAX_VENDOR_NAME_CHARS];
};

int main(void)
{
    struct debitCard myCard;
    unsigned long long name_length;

    name_length = strlen("Saloni");
    strncpy(myCard.holder_name, ("Saloni"), name_length);

    strncpy(myCard.card_vendor, "MasterCard", strlen("MasterCard"));

    myCard.card_number = 1111222233334444;
    myCard.card_cvv = 777;
    myCard.card_valid_thru_date.day = 12;
    myCard.card_valid_thru_date.month = 3;
    myCard.card_valid_thru_date.year = 2023;
    myCard.card_expirey_date.day = 4;
    myCard.card_expirey_date.month = 5;
    myCard.card_expirey_date.year = 2025;

    printf("Card name:%s\n", myCard.holder_name);
    printf("Card number:%llu\n", myCard.card_number);
    printf("Card CVV:%hu\n", myCard.card_cvv);
    printf("Valid through Date:%hhu/%hhu/%d\n", myCard.card_valid_thru_date.day, myCard.card_valid_thru_date.month, myCard.card_valid_thru_date.year);
    printf("Expirey Date:%hhu/%hhu/%d\n", myCard.card_expirey_date.day, myCard.card_expirey_date.month, myCard.card_expirey_date.year);
    printf("Card vendor:%s\n", myCard.card_vendor);

    return (0);
}