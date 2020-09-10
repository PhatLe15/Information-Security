/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype>

int SIZE = 100;

using namespace std;
void characterFrequency(string str[], int size);
void printText(string str[], int size);
void replaceCharacter1(string str[], int size);
void replaceCharacter2(string str[], int size);

int main () {
    
  string ciphertext[SIZE]; 
  int line_number = 0;

  ifstream myfile;
    //myfile.open("ciphertext.txt");
    myfile.open("ciphertext-o.txt");                     //open file
    while(getline(myfile, ciphertext[line_number])){    //import from text file line by line 
        line_number++;
    }
    myfile.close();                                     //close file
  

  cout<<"Frequency of every character:"<<endl;          //print out character frequency
  characterFrequency(ciphertext, line_number); 
  
  cout<<"////////////////////////////////////////////////////////////";
  cout<<endl<<"The ciphertext: "<<endl<<endl;           //original text
  printText(ciphertext, line_number);
  
  cout<<"////////////////////////////////////////////////////////////";
  //perform frequency analysis 
  cout<<endl<<"Perform frequency analysis: "<<endl;
  //replaceCharacter1(cyphertext, line_number);  //function to decipher ciphertext.txt
  replaceCharacter2(ciphertext, line_number);   //function to decipher ciphertext-o
  
  return 0;
}




void characterFrequency(string str[],int size){
    map<char,int> map;   //use STL map to store frequency
    
    for(int j = 0; j < size; j++){                          // line number loop
        for(int i = 0; str[j][i] != '\0'; i++){             //each element in a line loop
            if(isalpha(str[j][i])){                         // count character only
                if(map.find(str[j][i]) == map.end()){       //if not in the map yet 
                    map.insert(make_pair(str[j][i],1));
                }else{                                      //increment the element if found
                    map[str[j][i]]++; 
                }
            }
        }
    }

    //print out the frequency table
    for(auto i = map.begin(); i != map.end(); i++){
        cout << i->first << " " << i->second << endl;        //print out the map
    }
}

//function to print entire text(cipher/plain)
void printText(string str[], int size){
    for(int i = 0; i < size; i++){          // line number loop
        cout << str[i]<<endl;
    }
}

//function to swap out element 
void replaceCharacter1(string str[], int size){   
    for(int j = 0; j < size; j++){                  // line number loop
        for(int i = 0; str[j][i] != '\0'; i++){     //each element in a line loop
            if(str[j][i] == 'a'){
              str[j][i] = 'C';
            }else if(str[j][i] == 'b'){
                str[j][i] = 'F';
            }else if(str[j][i] == 'c'){
             str[j][i] = 'M';
            }else if(str[j][i] == 'd'){
                str[j][i] = 'Y';
            }else if(str[j][i] == 'e'){
                str[j][i] = 'P';
            }else if(str[j][i] == 'f'){
                str[j][i] = 'V';
            }else if(str[j][i] == 'g'){
                str[j][i] = 'B';
            }else if(str[j][i] == 'h'){
                str[j][i] = 'R';
            }else if(str[j][i] == 'i'){
                str[j][i] = 'L';
            }else if(str[j][i] == 'j'){
                str[j][i] = 'Q';
            }else if(str[j][i] == 'k'){
                str[j][i] = 'X';
            }else if(str[j][i] == 'l'){            // key for ciphertext.txt CFMIPVBRLQXWIEJDSGKHNAZOTU
                str[j][i] = 'W';
            }else if(str[j][i] == 'm'){
                str[j][i] = 'I';
            }else if(str[j][i] == 'n'){
                str[j][i] = 'E';
            }else if(str[j][i] == 'o'){
                str[j][i] = 'J';
            }else if(str[j][i] == 'p'){
                str[j][i] = 'D';
            }else if(str[j][i] == 'q'){
                str[j][i] = 'S';
            }else if(str[j][i] == 'r'){
                str[j][i] = 'G';
            }else if(str[j][i] == 's'){
                str[j][i] = 'K';
            }else if(str[j][i] == 't'){
                str[j][i] = 'H';
            }else if(str[j][i] == 'u'){
                str[j][i] = 'N';
            }else if(str[j][i] == 'v'){
              str[j][i] = 'A';
            }else if(str[j][i] == 'w'){
                str[j][i] = 'Z';
            }else if(str[j][i] == 'x'){
                str[j][i] = 'O';
            }else if(str[j][i] == 'y'){
              str[j][i] = 'T';
            }else if(str[j][i] == 'z'){
             str[j][i] = 'U';
            }
        }
    }
    printText(str, size);
}

void replaceCharacter2(string str[], int size){
    for(int j = 0; j < size; j++){                  // line number loop
        for(int i = 0; str[j][i] != '\0'; i++){     //each element in a line loop
            if(str[j][i] == 'a'){
              str[j][i] = 'D';
            }else if(str[j][i] == 'b'){
                str[j][i] = 'W';
            }else if(str[j][i] == 'c'){
             str[j][i] = 'Q';
            }else if(str[j][i] == 'd'){
                str[j][i] = 'J';
            }else if(str[j][i] == 'e'){
                str[j][i] = 'C';
            }else if(str[j][i] == 'f'){
                str[j][i] = 'E';
            }else if(str[j][i] == 'g'){
                str[j][i] = 'V';
            }else if(str[j][i] == 'h'){
                str[j][i] = 'U';
            }else if(str[j][i] == 'i'){
                str[j][i] = 'T';
            }else if(str[j][i] == 'j'){    //Key for ciphertext-o.txt: DWQJCEVUTSPFLRMXAYOZGIBKNH
                str[j][i] = 'S';
            }else if(str[j][i] == 'k'){
                str[j][i] = 'P';
            }else if(str[j][i] == 'l'){
                str[j][i] = 'F';
            }else if(str[j][i] == 'm'){
                str[j][i] = 'L';
            }else if(str[j][i] == 'n'){
                str[j][i] = 'R';
            }else if(str[j][i] == 'o'){
                str[j][i] = 'M';
            }else if(str[j][i] == 'p'){
                str[j][i] = 'X';
            }else if(str[j][i] == 'q'){
                str[j][i] = 'A';
            }else if(str[j][i] == 'r'){
                str[j][i] = 'Y';
            }else if(str[j][i] == 's'){
                str[j][i] = 'O';
            }else if(str[j][i] == 't'){
                str[j][i] = 'Z';
            }else if(str[j][i] == 'u'){
                str[j][i] = 'G';
            }else if(str[j][i] == 'v'){
              str[j][i] = 'I';
            }else if(str[j][i] == 'w'){
                str[j][i] = 'B';
            }else if(str[j][i] == 'x'){
                str[j][i] = 'K';
            }else if(str[j][i] == 'y'){
              str[j][i] = 'N';
            }else if(str[j][i] == 'z'){
             str[j][i] = 'H';
            }
        }
    }
    printText(str, size);
}

