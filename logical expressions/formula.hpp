#ifndef FORMULA
#define FORMULA 1

#include <iostream>
#include <string>

#define LOGIC_VAL int
#define TRUE_VAL 1
#define FALSE_VAL 0
#define UNDEFINED -1

class Formula{
private:
    LOGIC_VAL val;
    
public:
    Formula(LOGIC_VAL value);
    
    LOGIC_VAL and_val(const Formula& f) const;
    LOGIC_VAL or_val(const Formula& f) const;
    LOGIC_VAL imp_val(const Formula& f) const;
    LOGIC_VAL eq_val(const Formula& f) const;
    LOGIC_VAL neg_val() const;
    
    LOGIC_VAL value() const;
    std::string str() const;
};

#endif
