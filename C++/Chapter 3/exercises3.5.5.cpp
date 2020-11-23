#include <iostream>
#include <vector>

int main(){
    int iArr[] = {1,2,3,4,5,6,7,8,9,0};
    std::vector<int> iVec(std::begin(iArr), std::end(iArr));
    int iArr2[10];

    for(int *i = std::begin(iArr2), e = 0; i < std::end(iArr2); ++i, ++e){
        *i = iVec[e];
    }

    return 0;
}
//1 && 2