#include <iostream>
#include <vector>
#include <string>

#include "chtransform.h"
#include "cmap.h"

int main(int argc, char* argv[]) {
    chTransform cht;   
    std::string hw = "hello world";
    cht.Str2CharArray(hw);

    return 0;
};

