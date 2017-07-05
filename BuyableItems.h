//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_BUYABLEITEMS_H
#define DIVERTPROJECT_BUYABLEITEMS_H


class BuyableItems {
public:
    BuyableItems(int l, int p, bool a=0): level(l), price(p), availability(a){};

    virtual ~BuyableItems() {};

    virtual int getLevel() const=0;

    virtual void setLevel(int level)=0;

    virtual int getPrice() const=0;

    virtual void setPrice(int price)=0;

    virtual bool isAvailability() const=0;

    virtual void setAvailability(bool availability)=0;

protected:
    int level;
    int price;
    bool availability;

};


#endif //DIVERTPROJECT_BUYABLEITEMS_H
