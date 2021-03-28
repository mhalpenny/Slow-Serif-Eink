// Example usage for GxEPD_PP library by Clone.

#include "GxEPD_PP.h"

// Initialize objects from the lib
GxEPD_PP gxEPD_PP;

void setup() {
    // Call functions on initialized library objects that require hardware
    gxEPD_PP.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    gxEPD_PP.process();
}
