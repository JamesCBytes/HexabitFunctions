#include "hexabit.h"
    Hexabit::Hexabit(){
        type = "nada";
        operand1 = 0x0000;
        operand2 = 0x0000;
    }
    Hexabit::Hexabit(string t, uint32_t f,  uint32_t l){
        type = t;
        operand1 = f;
        operand2 = l;
    }
    Hexabit::Hexabit(const Hexabit& rhs){
        type = rhs.type;
        operand1 = rhs.operand1;
        operand2 = rhs.operand2;
    }

    string Hexabit::getType(){
        return type;
    }
    void Hexabit::setType(string t){
        type = t;
    }

    uint32_t Hexabit::getOperand1(){
        return operand1;
    }
    void Hexabit::setOperand1(uint32_t t){
        operand1 = t;
    }

    uint32_t Hexabit::getOperand2(){
        return operand1;
    }
    void Hexabit::setOperand2(uint32_t t){
        operand2 = t;
    }

    void Hexabit::ADD(){
        uint32_t result = operand1 + operand2;
        bool overflow;
        string over;
        cout <<setw(3)<< "0x" << hex << result << endl;
        if (result < operand1 || result < operand2) {
            over = "Yes";
            overflow = true;
        }
        else{
            over = "No";
            overflow = false;
        }
        cout << "Overflow: " << over<< endl;
    }