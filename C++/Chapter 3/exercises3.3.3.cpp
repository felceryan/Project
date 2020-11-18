#include <iostream>
#include <vector>
#include <string>
#include <cctype>

//int main(){
//    std::vector<int> v1;
//    std::vector<int> v2(10);
//    std::vector<int> v3(10,42);
//    std::vector<int> v4{10};
//    std::vector<int> v5{10,42};
//    std::vector<std::string> v6{10};
//    std::vector<std::string> v7{10,"hi"};
//
//    std::cout << "v1 has " << v1.size() << " elements:" << std::endl;
//    for(decltype(v1.size()) e = 0; e < v1.size(); ++e){
//        std::cout << "v1[" << e << "] " << "= " << v1[e] << std::endl;
//    }
//
//    std::cout << "v2 has " << v2.size() << " elements:" << std::endl;
//    for(decltype(v1.size()) e = 0; e < v1.size(); ++e){
//        std::cout << "v2[" << e << "] " << "= " << v2[e] << std::endl;
//    }
//
//    std::cout << "v3 has " << v3.size() << " elements:" << std::endl;
//    for(decltype(v3.size()) e = 0; e < v3.size(); ++e){
//        std::cout << "v3[" << e << "] " << "= " << v3[e] << std::endl;
//    }
//
//    std::cout << "v4 has " << v4.size() << " elements:" << std::endl;
//    for(decltype(v4.size()) e = 0; e < v4.size(); ++e){
//        std::cout << "v4[" << e << "] " << "= " << v4[e] << std::endl;
//    }
//
//    std::cout << "v5 has " << v5.size() << " elements:" << std::endl;
//    for(decltype(v5.size()) e = 0; e < v5.size(); ++e){
//        std::cout << "v5[" << e << "] " << "= " << v5[e] << std::endl;
//    }
//
//    std::cout << "v6 has " << v6.size() << " elements:" << std::endl;
//    for(decltype(v6.size()) e = 0; e < v6.size(); ++e){
//        std::cout << "v6[" << e << "] " << "= " << v6[e] << std::endl;
//    }
//
//    std::cout << "v7 has " << v7.size() << " elements:" << std::endl;
//    for(decltype(v7.size()) e = 0; e < v7.size(); ++e){
//        std::cout << "v7[" << e << "] " << "= " << v7[e] << std::endl;
//    }
// 
//
//    return 0;
//}
//1

//int main(){
//    std::vector<std::string> stringVec;
//    std::string stringInput;
//    unsigned cnt = 0;
//
//    while(std::cin >> stringInput){
//        stringVec.push_back(stringInput);
//    }
//
//    for(auto &e : stringVec){
//        for(auto &c : e){
//            c = toupper(c);
//        }
//    }
//
//    for(decltype(stringVec.size()) e = 0; e < stringVec.size(); ++e){
//	    ++cnt;
//	    if(cnt < 9){
//		    std::cout << stringVec[e] << " ";
//	    }
//	    else{
//            std::cout << std::endl;
//            std::cout << stringVec[e] << " ";
//		    cnt = 0;
//	    }
//    }
//
//    return 0;
//}
//2

// std::vector<int> ivec;
// ivec[0] = 42;
// INVALID
// ivec is an empty vector, doing ivec[0] wont add an element to the vector "ivec" either.
//3

// std::vector<int> v1{42,42,42,42,42,42,42,42,42,42};
// std::vector<int> v2(10,42);
// std::vector<int> v3 = v2;
// v2 is the preferred way as v1's way is tedious.
//4

//int main(){
//    std::vector<int> intVec;
//    int inputValue;
//
//    while(std::cin >> inputValue){
//        intVec.push_back(inputValue);
//    }
//
//    for(decltype(intVec.size()) e = 0; e < intVec.size() - 1; ++e){
//        std::cout << "intVec[" << e << "] + intVec[" << e + 1 << "] = "
//        << intVec[e] + intVec[e+1] << std::endl;
//    }
//
//    return 0;
//}

//int main(){
//    std::vector<int> intVec;
//    int inputValue;
//
//    while(std::cin >> inputValue){
//        intVec.push_back(inputValue);
//    }
//
//    for(decltype(intVec.size()) e = 0; e < intVec.size() - 1; ++e){
//        if(e == 0){
//            std::cout << "intVec[" << e << "] + intVec[" << e + 1 << "] = "
//            << intVec[e] + intVec[e+1] << std::endl;
//        }
//        else{
//            ++e;
//            std::cout << "intVec[" << e << "] + intVec[" << e + 1 << "] = "
//            << intVec[e] + intVec[e+1] << std::endl;
//        }
//    }
//
//    return 0;
//}
// Maybe what they actually asking for.

//int main(){
//    std::vector<int> intVec;
//    int inputValue;
//    unsigned countModifer = 0;
//
//    while(std::cin >> inputValue){
//        intVec.push_back(inputValue);
//    }
//
//    for(decltype(intVec.size()) e = 0; e < intVec.size() - 1; ++e){
//        if(intVec.size() - countModifer > e){
//            ++countModifer;
//            if(intVec.size() - countModifer != e){
//                std::cout << "intVec[" << e << "] + intVec[" << intVec.size() - countModifer << "] = "
//                << intVec[e] + intVec[intVec.size() - countModifer] << std::endl;
//            }
//        }  
//    }
//
//    return 0;
//}
//5