// txt_size() returns an int no arguments.

// unsigned buf_size = 1024;

// int ia[buf_size];
// ILLEGAL
// buf_size must be a constexpr

// int ia[4 * 7 - 14];
// LEGAL // ia[14]

// int ia[txt_size()];
// ILLEGAL
// txt_size() must return a constexpr

// char st[11] = "fundamental";
// ILLEGAL 
// string literals have a null character at the end meaning this array needs a size of 12
//1

// string aa[10]; // 10 objects all with an empty string
// int ia[10] // 10 objects all with value of 0
// int main(){
//      string sa2[10]; // 10 objects all with an empty string
//      int ia2[10]; // Undefined
// }
//2

// The drawback of using an array compared to a vector is that with an array
// you must initalise the array size and objects can't be added or removed from an array
// Where as with vector you can do .push_back().
//3