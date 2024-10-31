//Connor James
//main that run all the functions
#include "hexabit.h"
bool Spresent(string);
int main(){
    string type;
    string trash;
    bool present, temp = false;
    uint32_t first, second;
    ifstream inputfile("Programming-Project-2.txt");
    if (!inputfile.is_open()) {
        cout << "Error: Unable to open the input file." << endl;
        return 1;
    }   
    do{

        inputfile >> type;
        if(type == "NOT"){
            temp = true;
        }
        if(type == "NOTS"){
            temp = true;
        }
        inputfile >> hex >> first;
        if(temp == false){
        inputfile >> hex >> second;
        }
        present = Spresent(type);
        temp = false;

            Hexabit<uint32_t> hex(type, first, second);
        if(type == "ADD" || type =="ADDS"){
            cout << type << setw(10)<< "0x" << first << setw(5)<<"0x" << second << ":";
            hex.ADD();
        }
        if(type =="AND" || type == "ANDS"){
            cout << type << setw(10)<< "0x" << first << setw(5)<<"0x" << second << ":";
            hex.AND();
        }
        if(type == "ASR" || type =="ASRS"){
            cout << type << setw(10)<< "0x" << first << setw(5) << second << ":";
            hex.ASR();           
        }
        if(type == "LSR" || type == "LSRS"){
            cout << type << setw(10)<< "0x" << first << setw(5) << second << ":";
            hex.LSR();  
        }
        if(type == "LSL" || type == "LSLS"){
            cout << type << setw(10)<< "0x" << first << setw(5) << second << ":";
            hex.LSL();  
        }
        if(type == "NOT" || type == "NOTS"){
            cout << type << setw(10)<< "0x" << first << setw(5)<< ":";
            hex.NOT(); 
        }
        if(type == "ORR" || type == "ORRS"){
            cout << type << setw(10)<< "0x" << first << setw(5) << second << ":";
            hex.ORR();  
        }
        if(type == "SUB" || type == "SUBS"){
            cout << type << setw(10)<< "0x" << first << setw(5) << second << ":";
            hex.SUB();  
        }
        if(type == "XOR" || type == "XORS"){
            cout << type << setw(10)<< "0x" << first << setw(5) << second << ":";
            hex.XOR();  
        }
     }while(!inputfile.eof());
    return 0;
}

bool Spresent(string type){
    if(type.length() == 4 && type[3] == 'S'){
        return true;
    }
    return false;
}