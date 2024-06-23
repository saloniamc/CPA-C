#include <stdio.h>
#include <stdlib.h>

#define MAX_CHARS 30

struct Item_Dimensions
{
    float length, width, height;
};

struct Display_Resolution
{
    int length, width;
};

struct Projector
{
    unsigned char brand_name[MAX_CHARS];
    unsigned char connectivity_technology[MAX_CHARS];
    struct Display_Resolution d_resolution;
    int max_display_resolution;
    unsigned char display_type[MAX_CHARS];
    struct Item_Dimensions dimensions;
    unsigned char form_factor[MAX_CHARS];
    unsigned char mounting_type[MAX_CHARS];
    float price;
};

int main(void)
{
    struct Projector my_projector;

    strncpy(my_projector.brand_name, "AuKing", strlen("AuKing"));
    strncpy(my_projector.connectivity_technology, "HDMI", strlen("HDMI"));
    strncpy(my_projector.display_type, "LCD", strlen("LCD"));
    strncpy(my_projector.form_factor, "Portable", strlen("Portable"));
    strncpy(my_projector.mounting_type, "Tabletop Mount", strlen("Tabletop Mount"));
    my_projector.price = 7601.80;
    my_projector.d_resolution.length = 1920;
    my_projector.d_resolution.width = 1080;
    my_projector.max_display_resolution = 1080;
    my_projector.dimensions.length = 3.15;
    my_projector.dimensions.width = 6.69;
    my_projector.dimensions.height = 7.68;

    printf("Projector brand Name: %s\n", my_projector.brand_name);
    printf("Connectivity Technology: %s\n", my_projector.connectivity_technology);
    printf("Display Resolution: %d * %d\n", my_projector.d_resolution.length, my_projector.d_resolution.width);
    printf("Display Resolution Maximum: %dP\n", my_projector.max_display_resolution);
    printf("Item Dimensions: %f * %f * %f\n", my_projector.dimensions.length, my_projector.dimensions.height, my_projector.dimensions.width);
    printf("Form Factor: %s\n", my_projector.form_factor);
    printf("Mounting Type: %s\n", my_projector.mounting_type);
    printf("Price: INR%.2f\n", my_projector.price);
    return (0);
}

/*
    PROJECTOR

Brand	AuKing
Connectivity Technology:	HDMI
Display resolution:	1920 x 1080
Display Resolution Maximum:	1080P
Display Type:	LCD
Item Dimensions LxWxH:	3.15 x 6.69 x 7.68 inches
Form Factor:	Portable
Mounting Type:	Tabletop Mount
Price:	INR7,601.80
*/