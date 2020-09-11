//
//  Reindeer.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Reindeer_hpp
#define Reindeer_hpp

#include "Creature.hpp"
#include <stdio.h>
#include <string>

namespace santas_workshop {

class Reindeer : public Creature
{
private:
    
public:
    Reindeer(const std::string &name, int age)
        : Creature{ name, age }
    {
    }
};

}

#endif /* Reindeer_hpp */
