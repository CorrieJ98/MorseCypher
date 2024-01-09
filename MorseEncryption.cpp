#include <iostream>
#include <map>

using namespace std;

const map <char, string> ascii_to_morse = {
    {'A',".-"},     {'B',"-..."},   {'C',"-.-."},   {'D',"-.."},
    {'E',"."},      {'F',"..-."},   {'G',"--."},    {'H',"...."},
    {'I',".."},     {'J',".---"},   {'K',"-.-"},    {'L',".-.."},
    {'M',"--"},     {'N',"-."},     {'O',"---"},    {'P',".--."},
    {'Q',"--.-"},   {'R',".-."},    {'S',"..."},    {'T',"-"},
    {'U',"..-"},    {'V',"...-"},   {'W',".--"},    {'X',"-..-"},
    {'Y',"-.--"},   {'Z',"--.."},

    {'1',".----"},  {'2',"..---"},  {'3',"...--"},
    {'4',"....-"},  {'5',"....."},  {'6',"-...."},
    {'7',"--..."},  {'8',"---.."},  {'9',"----."},
    {'0',"-----"},

    {'.',".-.-.-"}, {',',"--..--"}, {'?',"..--.."}, {'=',"-...-"},
    {'!',"-.-.--"}, {';',"-.-.-."}, {':',"---..."}, {'+',".-.-."},
    {'-',"-....-"}, {'/',"-..-."}
};

std::string sUserInput = "";

void InputStringToCharArr(string sInput) {
    // Initialize character array 
    char* c_InputStringToChar_a = new char[sInput.length() + 1];

    // Ensure null at start
    c_InputStringToChar_a[sInput.length()] = NULL;

    for (auto c : sInput) {
        c_InputStringToChar_a[c] = sInput[c];

        std::cout << c_InputStringToChar_a[c] + ", ";
    }
}

int main()
{
    std::cout << "Enter a string:\n";
    std::cin >> sUserInput;

    InputStringToCharArr(sUserInput);

    return 0;
}

