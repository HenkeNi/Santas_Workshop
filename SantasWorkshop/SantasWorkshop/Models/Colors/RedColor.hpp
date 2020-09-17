//
//  RedColor.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-17.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef RedColor_hpp
#define RedColor_hpp

#include "IColor.hpp"
#include <stdio.h>
#include <string>

namespace santas_workshop {

class RedColor : public IColor
{
private:
    const std::string m_color{ "of Red Color" };
    
public:
    virtual const std::string& color() override;
};

}

#endif /* RedColor_hpp */
