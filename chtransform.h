#pragma once
#include <string>

class chTransform {

public:
    std::vector<char> Str2CharArray(std::string& sInput) {


        unsigned long length = sizeof sInput;
        char *c = new char[length + 1];         // heap allocation

        strcpy_s(c, length, sInput.c_str());

        std::vector<char> cArr;
        for (int i = 0; i < length; i++) {
            cArr.insert(cArr.end(), c[i]);
        }

        delete[] c;                             // deletion

        return cArr;
    }
};
