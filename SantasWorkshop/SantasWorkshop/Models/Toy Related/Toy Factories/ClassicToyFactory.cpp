//
//  ClassicToyFactory.cpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-14.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "ClassicToyFactory.hpp"

#include "ClassicToyCar.hpp"
#include "ClassicToySoldier.hpp"
#include "BlueColor.hpp"

namespace santas_workshop {


Car* ClassicToyFactory::createToyCar() const
{
    return new ClassicToyCar("Wooden Car", 1, std::make_unique<BlueColor>() );
}



Soldier* ClassicToyFactory::createToySoldier() const
{
    return new ClassicToySoldier("Tin Soldier", 3);
    // if not exist throw error??
}





}
