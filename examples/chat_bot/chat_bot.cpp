#include <common.h>
#include <iostream>

// using namespace std;

int main(int argc, char** argv) {

    std::cout << "hello, gpt LL" << std::endl;

    gpt_params params;

    if (!gpt_params_parse(argc, argv, params)) {
        return 1;
    }

    return 1;
}
