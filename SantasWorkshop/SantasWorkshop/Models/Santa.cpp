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

void Santa::printObject(std::ostream &out) const
{
    out << m_name << " is " << m_age << " years old!\n";
}



std::ostream& operator<<(std::ostream &out, const Santa &santa)
{
    santa.printObject(out);
    return out;
}

}
