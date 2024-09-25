#ifndef HEXABIT_H
#define HEXABIT_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>
#include <iomanip>
using namespace std;
class Hexabit{
    string type;
    uint32_t operand1, operand2;
    
    public:
    Hexabit();
    Hexabit(string, uint32_t, uint32_t);
    Hexabit(const Hexabit&);

    string getType();
    void setType(string);

    uint32_t getOperand1();
    void setOperand1(uint32_t);

    uint32_t getOperand2();
    void setOperand2(uint32_t);

    void ADD();



};
#endif