#include "camera.h"
#include "memory_card.h"

#include <iostream>

Camera makeCamera() {
    Camera c{new MemoryCard};
    return c;
}

int main() {
    Camera c = makeCamera(); 
    c.take_picture();
    int images = 1400;
	
	    while (images--) 	{
        try {
            c.take_picture();
        } 
        catch (MemoryCard::CardFull) {
            std::cout << "Memory card is full! Replacing..." << std::endl;
            c.replace(new MemoryCard);
        }
    }
}