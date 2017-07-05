//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_BUYABLEITEMS_H
#define DIVERTPROJECT_BUYABLEITEMS_H


class BuyableItems {
public:
    explicit BuyableItems(int p, int l=1, bool a=true) : level(l), price(p), availability(a) {};
    virtual ~BuyableItems() {};

    virtual int getLevel() const;

    virtual void setLevel(int level);

    virtual int getPrice() const;

    virtual void setPrice(int price);

    virtual bool isAvailability() const;

    virtual void setAvailability(bool availability);

protected:
    int level;
    int price;
    bool availability;

};


#endif //DIVERTPROJECT_BUYABLEITEMS_H
