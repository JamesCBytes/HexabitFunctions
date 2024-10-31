#ifndef HEXABIT_H
#define HEXABIT_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>
#include <iomanip>
using namespace std;
template <typename ItemType>
class Hexabit{
    string type;
    ItemType operand1, operand2;
    
    public:
    Hexabit<ItemType>();
    Hexabit<ItemType>(string, ItemType, ItemType);
    Hexabit<ItemType>(const Hexabit&);

    string getType();
    void setType(string);

    ItemType getOperand1();
    void setOperand1(ItemType);

    ItemType getOperand2();
    void setOperand2(ItemType);

    void ADD();
    void ADDS();

    void AND();
    void ANDS();

    void ASR();
    void ASRS(); 

    void LSR();
    void LSRS(); 

    void LSL();
    void LSLS(); 

    void NOT();    
    void NOTS(); 

    void ORR();  
    void ORRS();

    void SUB();  
    void SUBS(); 

    void XOR();
    void XORS(); 





};
#include "hexabit.cpp"
#endif