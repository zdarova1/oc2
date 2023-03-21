#include "cmn_merge_sort.hpp"
#include <chrono>
#include <iostream>

//const int size = 100; 
void cmn_test(int size){
    std::vector<float> v(size);
   
    srand((unsigned) time(0));
    VectorGen(v);

    auto begin = std::chrono::high_resolution_clock::now();
    cmnMergeSort(v, 0, size);
    auto end = std::chrono::high_resolution_clock::now();
    auto measured_time= std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    
    std::cout << "Measured time: " << measured_time.count()/(1000.0f) << " s\n";
}
