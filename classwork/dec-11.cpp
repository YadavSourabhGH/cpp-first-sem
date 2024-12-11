#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// // put data in file 
// int main(){
//     ofstream fout("sourabh.txt");
//     string text;
//     cout<<"Enter Some Text: ";
//     getline(cin,text);
//     fout<<text;
//     fout.close();
//     return 0;
// }


// get data from file 
// int main(){
//     ifstream fin("sourabh.txt");
//     string text;
//     getline(fin,text);
//     cout<<text<<endl;
//     fin.close();
//     return 0;
// }


// // print file line by line 

// int main() {
//     ifstream file("sourabh.txt");
//     string line; 
//     while (getline(file, line)) { 
//         cout << line << endl;
//     }

//     file.close();
//     return 0;
// }



// check if file is avaiable or not 
// int main() {
//     string filename = "example.txt"; 
//     ifstream file(filename);

//     if (!file) { 
//         cout << "Error: File '" << filename << "' does not exist or could not be opened." << endl;
//         return 0;
//     }

//     file.close();
//     return 0;
// }


// int main() {
//     fstream file("demo3.txt",ios::out);
//     if(!file){
//         cout<<"Error in creating file!!!"<<endl;
//         return 0;
//     }
//     file<<"line 4"<<endl;
//     file<<"line 5"<<endl;
//     file<<"line 6"<<endl;
//     file.close();
//     return 0;

// }



// int main() {
//     string text;
//     fstream file("demo3.txt",ios::in);
//     if(!file){
//         cout<<"Error in creating file!!!"<<endl;
//         return 0;
//     }
//     while(!file.eof()){
//     getline(file,text);
//     cout<<text<<endl;
//     }
//     file.close();
//     return 0;

// }



// int main(){
//     string text;
//     fstream file("demo3.txt",ios::app);
//     if(!file){
//         cout<<"Error in creating file!!!"<<endl;
//         return 0;
//     }

//     for(int i = 1; i<=10;i++){
//         file<<"line "<<i<<endl;
//     }
   
//     file.close();
//     return 0;

// }





// int main(){
//     string text;
//     fstream file("demo3.txt",ios::in | ios::app | ios::out);
//     if(!file){
//         cout<<"Error in creating file!!!"<<endl;
//         return 0;
//     }

//     for(int i = 1; i<=10;i++){
//         file<<"line "<<i<<endl;
//     }
//     file.seekg(0, ios::beg);
//     while(!file.eof()){
//     getline(file,text);
//     cout<<text<<endl;
//     }
   
//     file.close();
//     return 0;

// }



// int main(){
//     string filename="demo4.txt";
//     fstream file(filename , ios::in | ios::out);
//     if(!file.is_open()){
//         cout<<"Error in creating file!!!"<<endl;
//         return 0;
//     }
//     file<<"This is a demo4 file";
//     ifstream readFile(filename);
//     string line;
// cout<<"File Content: "<<endl;
//     file.seekg(0, ios::beg);
// while (getline(readFile, line)){
//     cout<<line<<endl;
// }
// readFile.close();
//     return 0;

// }