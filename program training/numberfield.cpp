#include "numberfield.h"
#include <cmath>
//height weight(nope) age

double NumberField::AccessVal(){
    return m_val;
}

bool NumberField::AccurateCompare(double x, double range){
    if(fabs(x - m_val) <= range) return true;
    return false;
}
