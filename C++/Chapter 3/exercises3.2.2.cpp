#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

//int main(){
//    string stringLine;
//    while(cin >> stringLine){
//        if(stringLine.size() == 1){
//            cout << stringLine << endl;
//        }
//    }
//
//    return 0;
//}
//1

// String operators handled with cin compared to getline() is
// that cin will not include any whitespace characters (space, newline...)
// so if your input was " stinky test" it will be stored as "stinky".
// Whereas using the getline() function will read " stinky test" entirely
// up until a newline character is inputted.
//2

//int main(){
//    string stringOne, stringTwo;
//
//    cin >> stringOne >> stringTwo;
//
//    if(stringOne.size() == stringTwo.size()){
//        cout << "Your strings have the same size" << endl;
//    }
//    else{
//        if(stringOne.size() > stringTwo.size()){
//            cout << "stringOne: " << stringOne.size() << " \"" << stringOne << "\"" << " | was bigger.";
//        }
//        else{
//            cout << "stringTwo: " << stringTwo.size() << " \"" << stringTwo << "\"" << " | was bigger.";
//        }
//    }
//
//    return 0;
//}
//3

int main(){
    string totalString, inputString;
    while(cin >> inputString){
        totalString += " " + inputString;
    }
    cout << totalString << endl;
    return 0;
}
//4