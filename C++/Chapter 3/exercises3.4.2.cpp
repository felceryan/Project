#include <vector>
#include <iostream>

//int main(){
//    std::vector<int> v{1,2,3,4,5,6,7,8,9};
//
//    for(std::vector<int>::iterator e = v.begin(); e < v.end(); ++e){
//        *e *= *e;
//        std::cout << *e << std::endl;
//    }
//
//    return 0;
//}
//1

int main(){
    std::vector<unsigned> gradeCount(11,0);
    unsigned grade;


    while(std::cin >> grade){
        if(grade <= 100){
            std::vector<unsigned>::iterator e = gradeCount.begin() + grade / 10;
            if(e < gradeCount.end()){  
                ++*e;
            }
        }
    }
    for(auto e : gradeCount){
        std::cout << e << " ";
    }

    return 0;
}
//2

// mid = beg + (end - beg) / 2;
// INSTEAD OF
// mid = (beg + end) / 2;
// BECAUSE
// Say you have a string x = "TEST";
// and you did beg + end it would be basically
// x[0] + x[5] and not x[4] because .end() does one past end of vector.
// so calling x[5] is undefined.