#include "hexabit.h"
template <typename ItemType>
Hexabit<ItemType>::Hexabit(){
    type = "nada";
    operand1 = 0x0000;
    operand2 = 0x0000;
}

template <typename ItemType>
Hexabit<ItemType>::Hexabit(string t, ItemType f,  ItemType l){
    type = t;
    operand1 = f;
    operand2 = l;
}

template <typename ItemType>
Hexabit<ItemType>::Hexabit(const Hexabit& rhs){
    type = rhs.type;
    operand1 = rhs.operand1;
    operand2 = rhs.operand2;
}

template <typename ItemType>
string Hexabit<ItemType>::getType(){
    return type;
}

template <typename ItemType>
void Hexabit<ItemType>::setType(string t){
    type = t;
}

template <typename ItemType>
ItemType Hexabit<ItemType>::getOperand1(){
    return operand1;
}

template <typename ItemType>
void Hexabit<ItemType>::setOperand1(ItemType t){
    operand1 = t;
}

template <typename ItemType>
ItemType Hexabit<ItemType>::getOperand2(){
    return operand1;
}

template <typename ItemType>
void Hexabit<ItemType>::setOperand2(ItemType t){
    operand2 = t;
}

template <typename ItemType>
void Hexabit<ItemType>::ADD(){
    ItemType result = operand1 + operand2;
    bool overflow;
    string over;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
    if(result == 0){
        int Z = 1;
    }
    // if (result < operand1 || result < operand2) {
    //     over = "Yes";
    //     overflow = true;
    // }
    // else{
    //     over = "No";
    //     overflow = false;
    // }
    // cout << "Overflow: " << over<< endl;
}

// template <typename ItemType>
// void Hexabit::ADDS(){

// }

template <typename ItemType>
void Hexabit<ItemType>::AND(){
    ItemType result = operand1 & operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
}

// template <typename ItemType>   
// void Hexabit::ANDS(){

// }
    
template <typename ItemType>
void Hexabit<ItemType>::ASR(){
    ItemType result = operand1 >> operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
}

// template <typename ItemType> 
// void Hexabit::ASRS(){

// }

template <typename ItemType>  
void Hexabit<ItemType>::LSR(){
    ItemType result = static_cast<uint32_t>(operand1) >> operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
}    

// template <typename ItemType>
// void Hexabit::LSRS(){

// }

template <typename ItemType>  
void Hexabit<ItemType>::LSL(){
    ItemType result = operand1 << operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
}

// template <typename ItemType>
// void Hexabit::LSLS(){

// }   

template <typename ItemType>   
void Hexabit<ItemType>::NOT(){
    ItemType result = ~operand1;
     cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
}

// template <typename ItemType> 
// void Hexabit::NOTS(){

// }  

template <typename ItemType>
void Hexabit<ItemType>::ORR(){
    ItemType result = operand1 | operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
} 

// template <typename ItemType>
// void Hexabit::ORRS(){

// } 

template <typename ItemType>
void Hexabit<ItemType>::SUB(){
    ItemType result = operand1 - operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
} 

// template <typename ItemType>
// void Hexabit::SUBS(){

// }  

template <typename ItemType>
void Hexabit<ItemType>::XOR(){
    ItemType result = operand1 ^ operand2;
    cout <<setw(3)<< "0x" << hex << uppercase << result << endl;
}  

// template <typename ItemType>
// void Hexabit::XORS(){

// }    


