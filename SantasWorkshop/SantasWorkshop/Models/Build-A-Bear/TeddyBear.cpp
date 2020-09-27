//
//  TeddyBear.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-21.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "TeddyBear.hpp"
#include <iostream>
#include <string>

namespace santas_workshop {


TeddyBear& TeddyBear::setProductName(const std::string &name)
{
    m_productName = name;
    return *this;
}

TeddyBear& TeddyBear::setBodyShape(const std::string &shape)
{
    m_bodyShape = shape;
    return *this;
}

TeddyBear& TeddyBear::setFurMaterial(std::unique_ptr<FurMaterial> fur)
{
    m_furMaterial = std::move(fur);
    return *this;
}

TeddyBear& TeddyBear::setFurMaterial(const std::string &type, const std::string &color)
{
    m_furMaterial = std::make_unique<FurMaterial>(type, color);
    return *this;
}

TeddyBear& TeddyBear::setOutfit(std::unique_ptr<Outfit> outfit)
{
    m_outfit = std::move(outfit);
    return *this;
}

TeddyBear& TeddyBear::setOutfit(const optStr_t &hat, const optStr_t &sweater, const optStr_t &pants)
{
    m_outfit = std::make_unique<Outfit>(hat, sweater, pants);
    return *this;
}


std::ostream& operator<< (std::ostream &out, const TeddyBear &b)
{
    out << b.m_productName << " details!\n- Body shape:\n\t" << b.m_bodyShape << "\n- " << *b.m_furMaterial << "\n";
    
    if (b.m_outfit)
        out << "- " << *b.m_outfit.value();
    
    return out;
}

//std::ostream& TeddyBear::print(std::ostream &out) const
//{
//    out << m_teddyName << " is a " << m_name;
//    return out;
//}




}
