//
//  FurMaterial.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-27.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef FurMaterial_hpp
#define FurMaterial_hpp

#include <iostream>
#include <stdio.h>
#include <string>

namespace santas_workshop {

class FurMaterial
{
private:
    std::string m_furType;
    std::string m_furColor;
    
public:
    FurMaterial(const std::string &type, const std::string &color)
        : m_furType{ type }, m_furColor{ color }
    {
    }
    
    const std::string& getFurType() const { return m_furType; }
    const std::string& getFurColor() const { return m_furColor; }
    
    friend std::ostream& operator<< (std::ostream &out, const FurMaterial &fur);
    
};

}

#endif /* FurMaterial_hpp */
