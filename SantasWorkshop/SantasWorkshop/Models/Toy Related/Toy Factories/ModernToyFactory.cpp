//
//  ModernToyFactory.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-14.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "ModernToyCar.hpp"
#include "ModernToyFactory.hpp"
#include "ModernToySoldier.hpp"

#include "RedColor.hpp"

namespace santas_workshop {


Car* ModernToyFactory::createToyCar() const
{
    RedColor red{};
    return new ModernToyCar("HotWheels", 2, std::make_unique<RedColor>() );
    //return nullptr;
}



Soldier* ModernToyFactory::createToySoldier() const
{
    return new ModernToySoldier("G.I Joe", 3);
    // if not exist throw error??
}





}
