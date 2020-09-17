//
//  Santa.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Santa.hpp"
#include "Creature.hpp"

#include <iostream>

namespace santas_workshop {

std::ostream& Santa::print(std::ostream &out) const
{
    out << m_name << " is " << m_age << " years old!\n";
    return out;
}


//std::ostream& operator<<(std::ostream &out, const Santa &santa)
//{
//    return santa.print(out);
//}

}
