//
//  Toy.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Toy.hpp"
#include <iostream>

namespace santas_workshop {

int Toy::s_idGenerator{ 1 };

//std::ostream& Toy::print(std::ostream &out) const
//{
//    out << "Toy";
//    return out;
//}

std::ostream& operator<<(std::ostream &out, const Toy &toy)
{
    return toy.print(out);
}





}
