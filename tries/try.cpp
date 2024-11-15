#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main() {
    int width, height, bpp;

    uint8_t* rgb_image = stbi_load("pexels-lastly-772803.jpg", &width, &height, &bpp, 3);

    stbi_image_free(rgb_image);

    return 0;
}