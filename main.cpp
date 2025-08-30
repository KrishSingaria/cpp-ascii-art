#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Check if the user provided an image path
    if (argc < 2) {
        std::cout << "Error: Please provide an image file.\n";
        std::cout << "Usage: ./ascii <path_to_image> or ascii.exe <path_to_image>\n";
        return EXIT_FAILURE; // Exit
    }
    const char* filename = argv[1];
    // A simple 10-level ramp
    std::string asciiRamp = " .:-=+*#%@";
    
    int width, height, channels,maxIdx = asciiRamp.length() - 1;
    auto image = stbi_load(filename,&width,&height,&channels,0);
    if(image == NULL){
        std::cout<<"Image is not found, or cannot be loaded.\n";
        return EXIT_FAILURE;
    }
    std::cout << "width: "<<width<<" height: "<<height<< std::endl;
    
    for(int y = 0; y < height; y+=2){
        for(int x = 0; x < width; x+=2){
            int index = (y * width + x) * channels;
            int r = image[index], g = image[index + 1], b = image[index + 2];
            
            float brigthness = (r+g+b)/3.0;
            int map_to_index = (brigthness/255.0)*maxIdx;
            std::cout << asciiRamp[map_to_index];
        }
        std::cout<<"\n";
    }
    // free the image 
    stbi_image_free(image);

    return EXIT_SUCCESS;
}
