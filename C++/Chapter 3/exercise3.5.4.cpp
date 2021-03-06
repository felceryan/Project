// const char ca[] = {'h', 'e', 'l', 'l', 'o'};
// const char *cp = ca; // &ca[0]
// while(*cp){ // 'h'
//  cout << *cp << endl;
//  ++cp;
// }

// This program prints each character in ca until *cp is no longer a char.
//1

// Because you can only subtract pointers to find the mid point between them.
// if you want move up from a pointer just add an integer to it as like an offset.
//2 

//#include <string>
//#include <iostream>
//
//int main(){
//    std::string sVar = "TEST";
//    std::string sVar2 = "TST";
//
//    if (sVar != sVar2){
//        std::cout << "THE STRINGS ARE NOT THE SAME" << std::endl;
//        if(sVar < sVar2){
//            std::cout << "sVar2 is bigger than sVar" << std::endl;
//        }
//        else{
//            std::cout << "sVar2 is smaller than sVar" << std::endl;
//        }
//    }
//    else{
//        std::cout << "The strings are the same." << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//
//int main(){
//    char cArr[] = "TZAEST";
//    char cArr2[] = "TSST";
//
//    if(strcmp(cArr, cArr2) != 0){
//        std::cout << "THE STRINGS ARE NOT THE SAME" << std::endl;
//        if(strcmp(cArr, cArr2) < 0){
//            std::cout << "cArr2 is bigger than cArr" << std::endl;
//        }
//        else{
//            std::cout << "cArr2 is smaller than cArr" << std::endl;
//        }
//    }
//    else{
//        std::cout << "The strings are the same" << std::endl;
//    }
//
//    return 0;
//}
//3

#include <cstring>
#include <iostream>

const char sArr[] = "HELLO";
const char sArr2[] = "RYAN";

int main(){
    
    constexpr size_t totalSize = strlen(sArr) + strlen(" ") + strlen(sArr2) + 1;
    
    char sArr3[totalSize];
    
    strcpy(sArr3, sArr);
    strcat(sArr3," ");
    strcat(sArr3, sArr2);
    
    std::cout << sArr3;
    

    return 0;
}
//4