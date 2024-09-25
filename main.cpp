//Connor James
//main that run all the functions
#include "hexabit.h"
int main(){
    string type;
    string trash;
    uint32_t first, second;
    ifstream inputfile("Programming-Project-1.txt");
    if (!inputfile.is_open()) {
        cout << "Error: Unable to open the input file." << endl;
        return 1;
    }   
    do{

        inputfile >> type >> hex >> first >> hex >> second;
       // cout << type << endl <<first << endl << second << endl;

        Hexabit hex(type, first, second);
        if(type == "ADD"){
            cout << type << setw(10)<< "0x" << first << setw(2)<< "+" <<setw(3)<<"0x" << second << ":";
            hex.ADD();
        }
     }while(!inputfile.eof());
    return 0;
}