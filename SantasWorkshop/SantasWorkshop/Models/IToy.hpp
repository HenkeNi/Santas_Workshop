//
//  IToy.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-22.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IToy_hpp
#define IToy_hpp

#include <stdio.h>
#include <iostream>

namespace santas_workshop {

class IToy
{
public:
    virtual ~IToy() {}
    //virtual std::ostream& print(std::ostream &out) const = 0;
    
};

}

#endif /* IToy_hpp */
