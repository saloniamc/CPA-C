#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SMALL_CHARS 10
#define MAX_MEDIUM_CHARS 15
#define MAX_LARGE_CHARS 30

struct Item_Dimensions
{
    float length, width, height;
};

struct Material_Type_Free
{
    unsigned char type1[MAX_SMALL_CHARS];
    unsigned char type2[MAX_SMALL_CHARS];
};

struct Imported_By
{
    unsigned char company_name[MAX_LARGE_CHARS];
    unsigned char address[MAX_LARGE_CHARS];
    unsigned long pincode;
    unsigned char mobile_no[MAX_MEDIUM_CHARS];
};

struct Product_Dimensions
{
    float length, width, height;
};

struct Sunscreen
{
    unsigned char brand[MAX_MEDIUM_CHARS];
    unsigned char scent[MAX_MEDIUM_CHARS];
    unsigned char product_benefits[MAX_LARGE_CHARS];
    int sunprotection;
    float item_weight;
    int no_of_items;
    float net_quantity;
    unsigned char skin_type[MAX_SMALL_CHARS];
    unsigned char active_ingredients[MAX_MEDIUM_CHARS];
    struct Item_Dimensions item_dimensions;
    int item_volume;
    unsigned char skin_tone[MAX_SMALL_CHARS];
    unsigned char water_resistance[MAX_MEDIUM_CHARS];
    unsigned char country[MAX_MEDIUM_CHARS];
    unsigned char item_form[MAX_SMALL_CHARS];
    struct Material_Type_Free material_free;
    unsigned char age_range[MAX_SMALL_CHARS];
    unsigned char manufacturer[MAX_LARGE_CHARS];
    struct Imported_By imported_by;
    unsigned char item_model_number[MAX_LARGE_CHARS];
    struct Product_Dimensions product_dimensions;
    unsigned char ASIN[MAX_MEDIUM_CHARS];
};

int main(void)
{
    struct Sunscreen my_sunscreen;
    memset(my_sunscreen.product_benefits, 0, 30);
    memset(my_sunscreen.age_range, 0, 10);

    strncpy(my_sunscreen.brand, "NEUTROGENA", strlen("NEUTROGENA"));
    strncpy(my_sunscreen.scent, "Unscented", strlen("Unscented"));
    strncpy(my_sunscreen.product_benefits, "Protects skin from sunrays", strlen("Protects skin from sunrays"));
    my_sunscreen.sunprotection = 50;
    my_sunscreen.item_weight = 80.08;
    my_sunscreen.no_of_items = 1;
    my_sunscreen.net_quantity = 88.0;
    strncpy(my_sunscreen.skin_type, "All", strlen("All"));
    strncpy(my_sunscreen.active_ingredients, "Helioplex", strlen("Helioplex"));
    my_sunscreen.item_dimensions.length = 15;
    my_sunscreen.item_dimensions.width = 6.1;
    my_sunscreen.item_dimensions.height = 3.3;
    my_sunscreen.item_volume = 88;
    strncpy(my_sunscreen.skin_tone, "All", strlen("All"));
    strncpy(my_sunscreen.water_resistance, "Waterproof", strlen("Waterproof"));
    strncpy(my_sunscreen.country, "Korea", strlen("Korea"));
    strncpy(my_sunscreen.item_form, "Oil", strlen("Oil"));
    strncpy(my_sunscreen.material_free.type1, "Oil free", strlen("Oil free"));
    strncpy(my_sunscreen.material_free.type2, "PABA free", strlen("PABA free"));
    strncpy(my_sunscreen.age_range, "Adult", strlen("Adult"));
    strncpy(my_sunscreen.manufacturer, "Johnson & Johnson KOREA LTD", strlen("Johnson and Johnson KOREA LTD"));
    strncpy(my_sunscreen.imported_by.company_name, "Johnson & Johnson Pvt Ltd", strlen("Johnson & Johnson Pvt Ltd"));
    strncpy(my_sunscreen.imported_by.address, "L B S Marg Mulund West, Mumbai", strlen("L B S Marg Mulund West, Mumbai"));
    my_sunscreen.imported_by.pincode = 400080;
    strncpy(my_sunscreen.item_model_number, "2731581002_New ASIN", strlen("2731581002_New ASIN"));
    my_sunscreen.product_dimensions.length = 14.99;
    my_sunscreen.product_dimensions.width = 6.1;
    my_sunscreen.product_dimensions.height = 3.3;
    strncpy(my_sunscreen.ASIN, "B082PFY9S7", strlen("B082PFY9S7"));

    // printing
    printf("\nBrand : %s\n", my_sunscreen.brand);
    printf("Scent : %s\n", my_sunscreen.scent);
    printf("Product benefits : %s\n", my_sunscreen.product_benefits);
    printf("Sun Protection : %d SPF\n", my_sunscreen.sunprotection);
    printf("Item Weight : %.2f Grams\n", my_sunscreen.item_weight);
    printf("Number Of Items : %d\n", my_sunscreen.no_of_items);
    printf("Net Qunatity : %.2f millilitre\n", my_sunscreen.net_quantity);
    printf("Skin Type : %s\n", my_sunscreen.skin_type);
    printf("Active Ingredients : %s\n", my_sunscreen.active_ingredients);
    printf("Item Dimensions : %.2f * %.2f * %.2f Centimeters\n", my_sunscreen.item_dimensions.length, my_sunscreen.item_dimensions.width, my_sunscreen.item_dimensions.height);
    printf("Item Volume : %d\n", my_sunscreen.item_volume);
    printf("Skin tone : %s\n", my_sunscreen.skin_tone);
    printf("Water Resistance Level : %s\n", my_sunscreen.water_resistance);
    printf("Country : %s\n", my_sunscreen.country);
    printf("Item Form : %s\n", my_sunscreen.item_form);
    printf("Material Type Free : %s, %s\n", my_sunscreen.material_free.type1, my_sunscreen.material_free.type2);
    printf("Age Range : %s\n", my_sunscreen.age_range);
    printf("Manufacturer : %s\n", my_sunscreen.manufacturer);
    printf("Imported By : %s,%s %lu, %s\n", my_sunscreen.imported_by.company_name, my_sunscreen.imported_by.address, my_sunscreen.imported_by.pincode, my_sunscreen.imported_by.mobile_no);
    printf("Product Dimensions : %.2f * %.2f * %.2f cm\n", my_sunscreen.product_dimensions.length, my_sunscreen.product_dimensions.width, my_sunscreen.product_dimensions.height);
    printf("ASIN : %s\n", my_sunscreen.ASIN);

    return (0);
}