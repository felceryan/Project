// const char ca[] = {'h', 'e', 'l', 'l', 'o'};
// const char *cp = ca; // &ca[0]
// while(*cp){ // 'h'
//  cout << *cp << endl;
//  ++cp;
// }

// This program prints each character in ca until *cp is no longer a char.
//1

// because unless the pointers are pointing to the same object,
// adding unrelated pointers is dumb.
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

int main(){
    char sArr[] = "HELLO";
    char sArr2[] = " RYAN";
    
    char sArr3[6];
    
    strcpy(sArr3, sArr);
    strcat(sArr3, sArr2);
    
    std::cout << sArr3;
    

    return 0;
}
//4