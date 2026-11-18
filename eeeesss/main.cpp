#include "../src/NomaiText.h"
#include "DemoSupport.h"

#include <iostream>

int main() {
    NomaiText text("demo");

    for (int i = 1; i <= 7; ++i) {
        DemoTrace().clear();
        text.Interact();

        std::cout << "Interaccio " << i << ": ";

        if (DemoTrace().empty()) {
            std::cout
                << "sense Display/Translate "
                << "(canvi de linia o text acabat)\n";
        }
        else {
            std::cout << DemoTrace().back() << '\n';
        }
    }
}