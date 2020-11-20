// PAGE 173
// p1 += p2 - p1; 
// What this does is say you have:
// int iArr[] = {1,2,3,4,5};
// int *p1 = iArr + 2 // &iArr[2]
// int *p2 = end(iArr) - 1 // &iArr[4]
// p2 - p1 = &iArr[2]
// p1 += &iArr[2] // &iArr[4]
// *p1 = 5
// to make this illegal would be to if p2 was equal to &iArr[5] and p1 was equal to &iArr[0]
// doing so means p2 - p1 = iArr[5]
// p1 += iArr[5] = iArr[10] *OUT OF BOUNDS MASSIVELY*
//1 

//#include <iostream>
//
//int main(){
//    int iArr[] = {1,2,3,4,5,6,7,8,9};
//    
//    for(int *pArr = std::begin(iArr); pArr < std::end(iArr); ++pArr){
//        *pArr = 0;
//        std::cout << *pArr << std::endl;
//    }
//   
//    return 0;
//}
//2

//#include <iostream>
//
//int main(){
//    int iArray[] = {1,2,3,4,5,6,7,8,9};
//    int iArray2[] = {1,2,3,4,5,6,7,8,9};
//    int x = 0;
//
//    for(int *e = std::begin(iArray), *e2 = std::begin(iArray2); e != std::end(iArray) && e2 != std::end(iArray2) && x != -1; ++e, ++e2){
//        if(*e != *e2){
//            x = -1;
//            std::cout << "ARRAY NOT SAME" << std::endl;
//        }
//        else{
//            ++x;
//        }
//    }
//    if(x > 0){
//        std::cout << "ARRAY SAME" << std::endl;
//    }
//
//    return 0;
//}
//

#include <iostream>
#include <vector>

int main(){
    std::vector<int> iVec{1,2,3,4,5,6,7,8,9};
    std::vector<int> iVec2{1,2,3,4,5,6,7,8,9};
    int x = 0;

    for(auto e = iVec.begin(), e2 = iVec2.begin(); e != iVec.end() && e2 != iVec2.end() && x != -1; ++e, ++e2){
        if(*e != *e2){
            x = -1;
            std::cout << "ARRAY NOT SAME" << std::endl;
        }
        else{
            ++x;
        }
    }
    if(x > 0){
        std::cout << "ARRAY SAME" << std::endl;
    }

    return 0;
}
//3