#include <iostream>
#include <string>
using namespace std;


// // W.A.P. for String Using at Least 5 Operations of String Class in C++
// int main() {
//     string str = "Hello, C++!";
//     cout << "Length of the string: " << str.length() << endl;

//     string upperStr = str;
//     transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
//     cout << "Uppercase string: " << upperStr << endl;

//     str.replace(7, 3, "World"); 
//     cout << "Replaced string: " << str << endl;

//     size_t found = str.find("World");
//     if (found != string::npos) {
//         cout << "'World' found at position: " << found << endl;
//     } else {
//         cout << "'World' not found in the string." << endl;
//     }

//     string substring = str.substr(7, 5); 
//     cout << "Substring: " << substring << endl;

//     return 0;
// }





// // 6 x 6 matrix
// int main() {
//     int matrix[6][6] = {
//         {10, 20, 30, 40, 50, 60},
//         {70, 80, 90, 100, 110, 120},
//         {130, 140, 150, 160, 170, 180},
//         {190, 200, 210, 220, 230, 240},
//         {250, 260, 270, 280, 290, 300},
//         {310, 320, 330, 340, 350, 360}
//     };

//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             cout << matrix[i][j]<<" , ";
//         }
//         cout << endl;
//     }

//     return 0;
// }