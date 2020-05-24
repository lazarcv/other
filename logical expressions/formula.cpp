#include <iostream>
#include <string>
#include "formula.hpp"

Formula::Formula(LOGIC_VAL value):val(value){}

LOGIC_VAL Formula::and_val(const Formula& f) const{
    if(val==TRUE_VAL && f.val==TRUE_VAL)
        return TRUE_VAL;
    else if(val==FALSE_VAL || f.val==FALSE_VAL)
        return FALSE_VAL;
    else return UNDEFINED;
}

LOGIC_VAL Formula::or_val(const Formula& f) const{
    if(val==TRUE_VAL || f.val==TRUE_VAL)
        return TRUE_VAL;
    else if(val==UNDEFINED || f.val==UNDEFINED)
        return UNDEFINED;
    else return FALSE_VAL;
}

LOGIC_VAL Formula::imp_val(const Formula& f) const{
    if(val==false)
        return TRUE_VAL;
    else if(f.val==TRUE_VAL)
        return TRUE_VAL;
    else if(val==UNDEFINED || f.val==UNDEFINED)
        return UNDEFINED;
    else return FALSE_VAL;
}

LOGIC_VAL Formula::eq_val(const Formula& f) const{
    if(val==f.val)
        return TRUE_VAL;
    else if(val==UNDEFINED || f.val==UNDEFINED)
        return UNDEFINED;
    else return FALSE_VAL;
}

LOGIC_VAL Formula::neg_val() const{
    if(val==TRUE_VAL)
        return FALSE_VAL;
    else if(val==UNDEFINED)
        return UNDEFINED;
    else return TRUE_VAL;
}
    
LOGIC_VAL Formula::value() const{
    return val;
}

std::string Formula::str() const{
    if(val==TRUE_VAL)
        return "True";
    else if(val==UNDEFINED)
        return "Undef";
    else return "False";
}
