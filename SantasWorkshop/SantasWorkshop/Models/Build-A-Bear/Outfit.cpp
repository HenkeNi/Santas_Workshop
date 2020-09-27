//
//  Outfit.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-27.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Outfit.hpp"
#include <iostream>

namespace santas_workshop {


optStr_t Outfit::getHat() const
{
    if (m_hat)
        return m_hat;
    
    return {};
}

optStr_t Outfit::getSweater() const
{
    if (m_sweater)
        return m_sweater;
    
    return {};
}

optStr_t Outfit::getPants() const
{
    if (m_pants)
        return m_pants;
    
    return {};
}

std::ostream& operator<< (std::ostream &out, const Outfit &outfit)
{
    out << "Outfit:\n";
    
    if (outfit.m_hat)
        out << "\that: " << outfit.m_hat.value() << '\n';
    
    if (outfit.m_sweater)
        out << "\tsweater: " << outfit.m_sweater.value() << '\n';
    
    if (outfit.m_pants)
        out << "\tpants: " << outfit.m_pants.value();
    
    return out;
}


}
