#include <vector>
#include <iostream>
#include <string>
#include <cctype>

//int main(){
//    std::vector<int> v{1,2,3,4,5,6,7,8,9};
//
//    for(auto i = v.begin(); i != v.end(); ++i){
//        *i *= *i;
//        std::cout << *i << std::endl;
//    }
//
//    return 0;
//}
//1

//int main(){
//    std::vector<std::string> text{"hi","my","name","is","ryan."};
//
//    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it){
//        for(auto &letter : *it){
//            letter = toupper(letter);
//        }
//        std::cout << *it << " ";
//    }
//
//
//    return 0;
//}
//2

int main(){
    std::vector<int> iVec(10);
    
    unsigned cnt = 0;
    for(auto &e : iVec){
        cnt += 1;
        e += cnt;
    }
    for(auto iterator = iVec.begin(); iterator != iVec.end(); ++iterator){
        *iterator += *iterator;
        std::cout << *iterator << std::endl;
    }

    return 0;
}
//3