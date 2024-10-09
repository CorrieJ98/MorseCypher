#pragma once
#include <iostream>
#include <map>
#include <vector>

static class cmap {
public:

    int get_cmap_morse(char m_input);
    int get_cmap_char(int m_input);

protected:
    const std::map<char, int> conversion_table = {

        // Takes given character from string and converts it into binary using its morse-code translation
        // 1 = dot  0 = dash

        // Literal morse translation
        {'1', 0b10000},  {'2', 0b11000},  {'3', 0b11100},
        {'4', 0b11110},  {'5', 0b11111},  {'6', 0b01111},
        {'7', 0b00111},  {'8', 0b00011},  {'9', 0b00001},
        {'0', 0b00000},

        {'A', 0b10},     {'B', 0b0111},   {'C', 0b0101},   {'D', 0b011},
        {'E', 0b1},      {'F', 0b1101},   {'G', 0b001},    {'H', 0b1111},
        {'I', 0b11},     {'J', 0b1000},   {'K', 0b010},    {'L', 0b1011},
        {'M', 0b00},     {'N', 0b01},     {'O', 0b000},    {'P', 0b1001},
        {'Q', 0b0010},   {'R', 0b101},    {'S', 0b111},    {'T', 0b0},
        {'U', 0b110},    {'V', 0b1110},   {'W', 0b100},    {'X', 0b0110},
        {'Y', 0b0100},   {'Z', 0b0011},

        {'.', 0b101010}, {',', 0b001100}, {'?', 0b110011}, {'=', 0b01110},
        {'!', 0b010100}, {';', 0b010101}, {':', 0b000111}, {'+', 0b10101},
        {'-', 0b011110}, {'/', 0b01101},


        // Summed from components
        {'\n', 0b00001110},   {' ', 0b00011000},    {'\0', 0b0000000}
    };
};