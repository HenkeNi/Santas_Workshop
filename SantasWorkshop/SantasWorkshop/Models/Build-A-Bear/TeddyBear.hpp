//
//  TeddyBear.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-21.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef TeddyBear_hpp
#define TeddyBear_hpp

#include "FurMaterial.hpp"
#include "IToy.hpp"
#include "Outfit.hpp"
#include <optional>
#include <stdio.h>
#include <string>

namespace santas_workshop {


class TeddyBear : public IToy
{
private:
    std::string m_productName;
    std::string m_bodyShape;
    std::unique_ptr<FurMaterial> m_furMaterial;
    std::optional<std::unique_ptr<Outfit>> m_outfit;
    

public:
    TeddyBear()
    {
    }
    
    ~TeddyBear()
    {
    }
    
    TeddyBear& setProductName(const std::string &name);
    TeddyBear& setBodyShape(const std::string &shape);
    TeddyBear& setFurMaterial(std::unique_ptr<FurMaterial> fur);
    TeddyBear& setFurMaterial(const std::string &type, const std::string &color);
    TeddyBear& setOutfit(std::unique_ptr<Outfit> outfit);
    TeddyBear& setOutfit(const optStr_t &hat, const optStr_t &sweater, const optStr_t &pants);
    
    friend std::ostream& operator<<(std::ostream &out, const TeddyBear &b);
    
};


}

#endif /* TeddyBear_hpp */
