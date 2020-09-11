//
//  Creature.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Creature.hpp"

namespace santas_workshop {

// Operator overloading for output operator (similair toString() in java)
// note can't be made virtual (to circumnavigate this it calls another method)
std::ostream& operator<<(std::ostream &out, const Creature &creature)
{
    creature.printObject(out);
    return out;
}

    
}
