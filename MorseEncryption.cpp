#include <iostream>
#include <map>
#include <cctype>

using namespace std;

struct morsepair {
    char c;
    string morse = "";
};

//const map <morsepair, int> conversion_table = {
//    {{'1',".----"}, 0b10000},  {{'2',"..---"}, 0b11000},  {{'3',"...--"}, 0b11100},
//    {{'4',"....-"}, 0b11110},  {{'5',"....."}, 0b11111},  {{'6',"-...."}, 0b01111},
//    {{'7',"--..."}, 0b00111},  {{'8',"---.."}, 0b00011},  {{'9',"----."}, 0b00001},
//    {{'0',"-----"}, 0b00000},
//
//    {{'.',".-.-.-"},0b101010}, {{',',"--..--"},0b001100}, {{'?',"..--.."},0b110011}, {{'=',"-...-"},0b01110},
//    {{'!',"-.-.--"},0b010100}, {{';',"-.-.-."},0b010101}, {{':',"---..."},0b000111}, {{'+',".-.-."},0b10101},
//    {{'-',"-....-"},0b011110}, {{'/',"-..-."}, 0b01101}
//};

const map <morsepair, int> conversion_table = {
    {{'1',".----"}, 16},  {{'2',"..---"}, 24},  {{'3',"...--"}, 28},
    {{'4',"....-"}, 30},  {{'5',"....."}, 31},  {{'6',"-...."}, 15},
    {{'7',"--..."}, 7},  {{'8',"---.."}, 3},  {{'9',"----."}, 1},
    {{'0',"-----"}, 0},

    {{'.',".-.-.-"},42}, {{',',"--..--"},12}, {{'?',"..--.."},51}, {{'=',"-...-"},14},
    {{'!',"-.-.--"},20}, {{';',"-.-.-."},21}, {{':',"---..."},7}, {{'+',".-.-."},21},
    {{'-',"-....-"},30}, {{'/',"-..-."}, 13}
};


// Severity	Code	Description	Project	File	Line	Suppression State
// Error	C2676	binary '<': 'const _Ty' does not define this operator or a conversion to a type acceptable to the predefined operator MorseEncryption	C : \Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\xstddef	142


int main() {
    return 0;
};

void MakeCharArray(string sInput, char cOut[]) {

    // +1 to account for the null character
    cOut[sInput.length() + 1];
    strcpy(cOut, sInput.c_str());
}


