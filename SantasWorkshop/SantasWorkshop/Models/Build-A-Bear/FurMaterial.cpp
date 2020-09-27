//
//  FurMaterial.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-27.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "FurMaterial.hpp"

namespace santas_workshop {

std::ostream& operator<< (std::ostream &out, const FurMaterial &fur)
{
    out << "Fur:\n\tType: " << fur.m_furType << "\n\tColor: " << fur.m_furColor;
    return out;
}

}
