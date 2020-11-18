// std::vector<std::vector<int>> ivec;
// Legal
// Basically creates a vector called ivec of int vectors.

// std::vector<std::string> svec = ivec
// Not Legal
// Both must have same type, string vectors and vector of int vectors dont match.

// std::vector<string> svec(10, "null");
// Legal
// It is a string vector called svec with 10 elements all with the value of "null"
//1

// std::vector<int> v1;
// v1 is empty.

// std::vector<int> v2(10);
// v2 has 10 elements all with the value of 0
// 0 because int default initalises as 0.

// std::vector<int> v3(10, 42);
// v3 has 10 elements all wwith the value of 42.

// std::vector<int> v4{10};
// v4 has one element with the value of 10.

// std::vector<int> v5{10, 42};
// v5 has 2 elements with the values of 10 42.

// std::vector<std::string> v6{10}
// v6 has 10 elements all with empty strings.
// empty because string default initialises as empty.
// there are 10 elements when its a string because the vector cant use 10 as its not a string
// so it instead uses it to build the vector.

// std::vector<std::string> v7{10, "hi"};
// v7 has 10 elements all with the string "hi".

