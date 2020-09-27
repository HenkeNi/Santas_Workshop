//
//  Outfit.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-27.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Outfit_hpp
#define Outfit_hpp

#include <optional>
#include <stdio.h>
#include <string>

namespace santas_workshop {

using optStr_t = std::optional<std::string>; // TODO: put in global ...

class Outfit
{
    
private:
    optStr_t m_hat;
    optStr_t m_sweater;
    optStr_t m_pants;
    
public:
    Outfit(const optStr_t &hat, const optStr_t &sweater, const optStr_t &pants)
        : m_hat{ hat }, m_sweater{ sweater }, m_pants{ pants }
    {
    }
    
    optStr_t getHat() const;
    optStr_t getSweater() const;
    optStr_t getPants() const;
    
    friend std::ostream& operator<< (std::ostream &out, const Outfit &outfit);
};

}

#endif /* Outfit_hpp */
