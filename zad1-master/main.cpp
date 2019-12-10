#include <iostream>
#include <cstdio>
#include <array>
#include <cstring>
#include "File.h"

void toUpper(std::string& text) {
    for (auto& character: text) {
        character = static_cast<char>(toupper(character));
    }
}

int main(int argc, char** argv) {
    std::string text;
    try {
        RAII file("text-file", "r");
        text = file.read();
    } catch (const std::exception& e) {
        std::cerr << e.what();
        return 1;
    }
   
    toUpper(text);
   
    try {
        RAII file("text-file-upper", "w");
        file.write(text);
    } catch (const std::exception& e) {
        std::cerr << e.what();
        return 1;
    }
   
    return 0;
}