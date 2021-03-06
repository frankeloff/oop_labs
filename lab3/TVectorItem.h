#ifndef TVECTORITEM_H
#define TVECTORITEM_H
#include <iostream>
#include "rhombus.h"
#include <memory>

class TVectorItem
{
public:
    TVectorItem(std::shared_ptr<Rhombus>& rhomb);
    friend std::ostream& operator<<(std::ostream& os, TVectorItem& obj);
    ~TVectorItem();
    std::shared_ptr<Rhombus> rhomb;
    std::shared_ptr<TVectorItem> next;
};

#endif //TVECTORITEM_H