//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_BUYABLEITEMS_H
#define DIVERTPROJECT_BUYABLEITEMS_H

#include <string>

class BuyableItems {
public:
    explicit BuyableItems(std::string n, int p, int l=1, bool a=true) : name(n), price(p), level(l), availability(a) {};

    virtual const std::string &getName() const;

    virtual void setName(const std::string &name);

    virtual int getLevel() const;

    virtual void setLevel(int level);

    virtual int getPrice() const;

    virtual void setPrice(int price);

    virtual bool isAvailability() const;

    virtual void setAvailability(bool availability);

protected:
    std::string name;
    int level;
    int price;
    bool availability;

};


#endif //DIVERTPROJECT_BUYABLEITEMS_H
