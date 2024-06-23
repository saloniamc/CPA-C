#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_CHARS 20
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
    unsigned short item_weight;
    struct Item_Dimensions dimensions;
    unsigned char country_of_origin[MAX_CNAME_CHARS];
    struct Customer_Reviews reviews;
};

int main(void)
{
    struct Book my_book_2;
    strncpy(my_book_2.book_name, "THE FOUNTAINHEAD", strlen("THE FOUNTAINHEAD"));
    strncpy(my_book_2.publisher, "Penguin UK", strlen("Penguin UK"));
    strncpy(my_book_2.language, "English", strlen("English"));
    my_book_2.no_of_pages = 752;
    my_book_2.isbn_10 = atoi("0141188626");
    my_book_2.isbn_13 = 9780141188621;
    my_book_2.item_weight = 513;
    my_book_2.dimensions.length = 13;
    my_book_2.dimensions.width = 3;
    my_book_2.dimensions.height = 19.5;
    strncpy(my_book_2.country_of_origin, "United Kingdom", strlen("United Kingdom"));
    my_book_2.reviews.star_ratings = 4.4;
    my_book_2.reviews.total_global_ratings = 9082;

    printf("Book Name : %s\n", my_book_2.book_name);
    printf("Publisher : %s\n", my_book_2.publisher);
    printf("Language : %s\n", my_book_2.language);
    printf("Paperback : %d pages\n", my_book_2.no_of_pages);
    printf("ISBN-10 : %llu\n", my_book_2.isbn_10);
    printf("ISBN-13 : %llu\n", my_book_2.isbn_13);
    printf("Item Weight : %hug\n", my_book_2.item_weight);
    printf("Dimensions : %.2F * %.2f * %.2f cm\n", my_book_2.dimensions.length,
           my_book_2.dimensions.width, my_book_2.dimensions.height);
    printf("Country Of Origin : %s\n", my_book_2.country_of_origin);
    printf("Customer Reviews : %.2f out of 5 stars   %lu Reviews\n",
           my_book_2.reviews.star_ratings, my_book_2.reviews.total_global_ratings);

    return (0);
}

// PROBLEM : UNKNOWN CHARACTERS AFTER THE FOUNTAINHEAD