#include "src/test.cpp"
#include <string>
#include <immintrin.h>

using namespace std;

int main(int argc,char** argv)
{
    if(argc < 1)
        return 1;
    std::string s(argv[1]);

    __m256 x = _mm256_set_ps(1.0, 1.0,1.0, 1.0,1.0, 1.0,1.0, 1.0);


    cmn_test(std::stoi(s));
    return 0;
}