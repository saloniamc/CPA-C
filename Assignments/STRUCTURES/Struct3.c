#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_CHARS 30
#define MAX_LANGUAGE_CHARS 15
#define MAX_CNAME_CHARS 15

struct Item_Dimensions
{
    float length, width, height;
};

struct Customer_Reviews
{
    float star_ratings;
    unsigned long total_global_ratings;
};

struct Book
{
    unsigned char book_name[MAX_NAME_CHARS];
    unsigned char publisher[MAX_NAME_CHARS];
    unsigned char language[MAX_LANGUAGE_CHARS];
    unsigned short no_of_pages;
    unsigned long long isbn_10;
    unsigned long long isbn_13;
    int minimum_reading_age;
    unsigned short item_weight;
    struct Item_Dimensions dimensions;
    char country_of_origin[MAX_CNAME_CHARS];
    int net_quantity;
    struct Customer_Reviews reviews;
};

int main(void)
{
    struct Book My_Book_1;
    strncpy(My_Book_1.book_name, "MINDSET", strlen("MINDSET"));
    strncpy(My_Book_1.publisher, "Constable and Robinson", strlen("Constable and Robinson"));
    strncpy(My_Book_1.language, "English", strlen("English"));
    My_Book_1.no_of_pages = 288;
    My_Book_1.isbn_10 = 1780332009;
    My_Book_1.isbn_13 = 9781780332000;
    My_Book_1.minimum_reading_age = 5;
    My_Book_1.item_weight = 224;
    My_Book_1.dimensions.length = 13;
    My_Book_1.dimensions.width = 1.3;
    My_Book_1.dimensions.height = 19.7;
    strncpy(My_Book_1.country_of_origin, "United Kingdom", strlen("United Kingdom"));
    My_Book_1.net_quantity = 1;
    My_Book_1.reviews.total_global_ratings = 15581;
    My_Book_1.reviews.star_ratings = 4.5;

    printf("Book Name : %s\n", My_Book_1.book_name);
    printf("Publisher : %s\n", My_Book_1.publisher);
    printf("Language : %s\n", My_Book_1.language);
    printf("Paperback : %hu pages\n", My_Book_1.no_of_pages);
    printf("ISBN-10 : %llu\n", My_Book_1.isbn_10);
    printf("ISBN-13 : %llu\n", My_Book_1.isbn_13);
    printf("Reading age : %d years and up\n", My_Book_1.minimum_reading_age);
    printf("Item Weight : %hug\n", My_Book_1.item_weight);
    printf("Dimensions : %.2f * %.2f * %.2f cm\n", My_Book_1.dimensions.length,
           My_Book_1.dimensions.width, My_Book_1.dimensions.height);
    printf("Country of Origin : %s\n", My_Book_1.country_of_origin);
    printf("Net Quantity : %d\n", My_Book_1.net_quantity);
    printf("Customer Reviews : %.2f out of 5 stars    %lu reviews\n",
           My_Book_1.reviews.star_ratings, My_Book_1.reviews.total_global_ratings);

    return (0);
}

// PROBLEM : UNTIED KINGDOM ARRAY WHEN TAKEN MORE NUMBER OF CHARACTERS PRINTS UNKNOWN CHARACTERS.