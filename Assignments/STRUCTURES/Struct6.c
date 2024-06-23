#include <stdio.h>
#include <stdlib.h>

#define MAX_SMALL_CHARS 10
#define MAX_MEDIUM_CHARS 15
#define MAX_LARGE_CHARS 30
#define MAX_XLARGE_CHARS 50

struct Bestseller_rank
{
    int rank1;
    unsigned char category1[MAX_SMALL_CHARS];
    int rank2;
    unsigned char category2[MAX_SMALL_CHARS];
};

struct Item_Dimensions
{
    float length, width, he, grams;
};

struct Imported_By
{
    unsigned char company_name[MAX_LARGE_CHARS];
    unsigned char address[MAX_XLARGE_CHARS];
    unsigned long pincode;
    unsigned char phone[MAX_MEDIUM_CHARS];
};

struct Lipstick
{
    unsigned char brand[MAX_MEDIUM_CHARS];
    unsigned char manufacturer[MAX_LARGE_CHARS];
    unsigned char Country_of_origin[MAX_SMALL_CHARS];
    struct Imported_By imported_by;
    struct Item_Dimensions item_dimensions;
    int net_quantity;
    unsigned char item_model_number[MAX_MEDIUM_CHARS];
    struct Bestseller_rank Bestseller_rank;
    unsigned char ASIN[MAX_MEDIUM_CHARS];
};

int main(void)
{
    struct Lipstick my_lipstick;

    strncpy(my_lipstick.brand, "Maybelline newyork matte lipstick", strlen("Maybelline newyork matte lipstick"));
    strncpy(my_lipstick.manufacturer, "Yichang Tianmei International cosmetic ltd company", strlen("Yichang Tianmei International cosmetic ltd company"));
    strncpy(my_lipstick.Country_of_origin, "China", strlen("China"));
    strncpy(my_lipstick.imported_by.company_name, "L'Oreal India Private Limited", strlen("L'Oreal India Private Limited"));
    strncpy(my_lipstick.imported_by.address, "A-Wing,8th F,Marathon Futurex,N.M.Joshi Marg,L.Parel,Mumbai", strlen("A-Wing,8th F,Marathon Futurex,N.M.Joshi Marg,L.Parel,Mumbai"));
    my_lipstick.imported_by.pincode = 400013;
    strncpy(my_lipstick.imported_by.phone, atoi("02224983000"), strlen("02224983000"));
    my_lipstick.net_quantity = 1;
    strncpy(my_lipstick.item_model_number, "K1797700", strlen("K1797700"));
    my_lipstick.item_dimensions.length = 2.4;
    my_lipstick.item_dimensions.width = 2.4;
    my_lipstick.item_dimensions.he = 7.8;
    my_lipstick.item_dimensions.grams = 25;
    my_lipstick.Bestseller_rank.rank1 = 67;
    strncpy(my_lipstick.Bestseller_rank.category1, "Beauty", strlen("Beauty"));
    my_lipstick.Bestseller_rank.rank2 = 1;
    strncpy(my_lipstick.Bestseller_rank.category2, "Lipsticks", strlen("Lipsticks"));
    strncpy(my_lipstick.ASIN, "B00N6YEI6O", strlen("B00NYEI6O"));

    printf("Brand : %s\n", my_lipstick.brand);
    printf("Manufacturer : %s\n", my_lipstick.manufacturer);
    printf("Country Of Origin : %s\n", my_lipstick.Country_of_origin);
    printf("Imported By : %s,%s-%lu, Phone:%s\n", my_lipstick.imported_by.company_name, my_lipstick.imported_by.address, my_lipstick.imported_by.pincode, my_lipstick.imported_by.phone);
    printf("Product Dimensions : %.2f * %.2f * %.2f cm %.2f Grams", my_lipstick.item_dimensions.length, my_lipstick.item_dimensions.width, my_lipstick.item_dimensions.he, my_lipstick.item_dimensions.grams);
    printf("Net Quantity : %d Count\n", my_lipstick.net_quantity);
    printf("Item Model Number : %s\n", my_lipstick.item_model_number);
    printf("Bestseller Rank : #%d in %s,  #%d in %s\n", my_lipstick.Bestseller_rank.rank1, my_lipstick.Bestseller_rank.category1, my_lipstick.Bestseller_rank.rank2, my_lipstick.Bestseller_rank.category2);
    printf("ASIN : %s\n", my_lipstick.ASIN);

    return (0);
}