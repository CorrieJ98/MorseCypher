#include <iostream>
#include <map>
#include <cctype>
#include <vector>

using namespace std;

struct morsepair {
    char c;
    string morse = "";
};

const map <morsepair, int> conversion_table = {
    {{'1',".----"}, 0b10000},  {{'2',"..---"}, 0b11000},  {{'3',"...--"}, 0b11100},
    {{'4',"....-"}, 0b11110},  {{'5',"....."}, 0b11111},  {{'6',"-...."}, 0b01111},
    {{'7',"--..."}, 0b00111},  {{'8',"---.."}, 0b00011},  {{'9',"----."}, 0b00001},
    {{'0',"-----"}, 0b00000},

    {{'.',".-.-.-"},0b101010}, {{',',"--..--"},0b001100}, {{'?',"..--.."},0b110011}, {{'=',"-...-"},0b01110},
    {{'!',"-.-.--"},0b010100}, {{';',"-.-.-."},0b010101}, {{':',"---..."},0b000111}, {{'+',".-.-."},0b10101},
    {{'-',"-....-"},0b011110}, {{'/',"-..-."}, 0b01101}
};


// okay so look at the thing above, take that and check obsidian notes. lets make this thing happen <3

int main() {
    return 0;
};

void TestMethodPleaseIgnore() {

    char a = '4';
    char b = ',';

    int ca = a;
    char& cb = b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << ca << std::endl;
    std::cout << cb << std::endl;

}

string TakeUserInput() {
    string sInput = "";
    std::cin >> sInput;
    return sInput;
}


void MakeCharArray(string sInput, char cOut[]) {

    // +1 to account for the null character
    cOut[sInput.length() + 1];
    strcpy(cOut, sInput.c_str());
}


