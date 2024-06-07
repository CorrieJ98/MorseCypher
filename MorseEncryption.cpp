#include <iostream>
#include <map>
#include <cctype>

using namespace std;

//const map <int, string, int> conversion_table = {
//    {'1',".----", 0b10000},  {'2',"..---", 0b11000},  {'3',"...--", 0b11100},
//    {'4',"....-", 0b11110},  {'5',".....", 0b11111},  {'6',"-....",0b01111},
//    {'7',"--...", 0b00111},  {'8',"---..", 0b00011},  {'9',"----.",0b00001},
//    {'0',"-----", 0b00000},
//
//    {'.',".-.-.-"}, {',',"--..--"}, {'?',"..--.."}, {'=',"-...-"},
//    {'!',"-.-.--"}, {';',"-.-.-."}, {':',"---..."}, {'+',".-.-."},
//    {'-',"-....-"}, {'/',"-..-."}
//};


// okay so look at the thing above, take that and check obsidian notes. lets make this thing happen <3

int main() {
    char a = '4';
    char b = ',';
    
    int ca = a;
    char& cb = b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << ca << std::endl;
    std::cout << cb << std::endl;

    return 0;
};