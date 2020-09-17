//
//  ClassicToyFactory.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-14.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef ClassicToyFactory_hpp
#define ClassicToyFactory_hpp

#include "Car.hpp"
#include "IToyFactory.hpp"
#include "Soldier.hpp"
#include <stdio.h>


namespace santas_workshop {

class ClassicToyFactory : public IToyFactory
{
public:
    virtual Car* createToyCar() const override;
    virtual Soldier* createToySoldier() const override;
};

}


#endif /* ClassicToyFactory_hpp */
