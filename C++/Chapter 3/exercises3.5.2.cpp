// constexpr size_t array_size = 10;
// int ia[array_size];
// for (size_t ix = 1; ix <= array_size; ++ix){
// ia[ix] = ix;   
// }
// when ix = 10 it will try to subscript ia with ia[10] however thats wrong because it is out of bounds
// to fix just do ix < array_size; 
// easy
//1

#include <iostream>
#include <vector>

//int main(){
//    int iArray[10];
//    for(auto e = 0; e < 10; ++e){
//        iArray[e] = e + 1;
//        std::cout << iArray[e] << std::endl;
//    }
//
//    return 0;
//}
//2 

//int main(){
//    int iArray[10];
//    for(auto e = 0; e < 10; ++e){
//        iArray[e] = e + 1;
//    }
//    int iArray2[10];
//    
//    for(int i = 0; i < 10; ++i){
//        iArray2[i] = iArray[i];
//        std::cout << iArray2[i] << std::endl;
//    }
//
//    return 0;
//}

int main(){
    std::vector<int> iVec;

    for(int i = 0; i < 10; ++i){
        iVec.push_back(i + 1);
        std::cout << *iVec.begin() + i << std::endl;
    }

    return 0;
}
//3

// PAGE 166
// If you hadn't initialised scores array to 0
// then all the objects in the array would be undefined so doing ++grade[score/10]
// would just be dumb.
//4