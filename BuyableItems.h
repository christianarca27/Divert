//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_BUYABLEITEMS_H
#define DIVERTPROJECT_BUYABLEITEMS_H


class BuyableItems {
public:
    explicit BuyableItems(int l=1, int p, bool aviable=TRUE):level(l), price(p), aviability(aviable){};
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
