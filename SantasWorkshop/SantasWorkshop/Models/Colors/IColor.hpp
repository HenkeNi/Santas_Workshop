//
//  IColor.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-17.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IColor_hpp
#define IColor_hpp

#include <stdio.h>
#include <string>

namespace santas_workshop {

class IColor
{
public:
    virtual ~IColor() {}
    virtual const std::string& color() = 0;
};

}

#endif /* IColor_hpp */
