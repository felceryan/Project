#include <iostream>

std::string global_str; // empty
int global_int; // 0

int main(){
    // std::cin >> int input_value;
    // Not legal 
    // I think because it isn't defined until after cin
    // meaning it doesn't count as declared 
    int input_value;
    std::cin >> input_value; // fixed
    
    // int i = {3.14}
    // Not legal
    // Because when converting 3.14 to an int it will lose data
    // specifically .14 and {} initialisation doesn't like that
    int i = 3.14; // One way of fixing

    // double salary = wage = 9999.99;
    // Not legal because wage isn't declared before salary
    double wage = 9999.99, salary = wage; // fixed

    int i = 3.14; // Legal but would be 3
    //1

    int local_int; // undefined
    std::string local_str; // empty or undefined
    //2

    return 0;
}