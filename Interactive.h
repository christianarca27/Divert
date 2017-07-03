//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_INTERACTIVE_H
#define DIVERTPROJECT_INTERACTIVE_H


class Interactive {
public:
    explicit Interactive::Interactive (int x, int y): posX(x),posY(y){}

    virtual void Interaction()=0;

    virtual int getPosX() const;

    virtual void setPosX(int posX);

    virtual int getPosY() const;

    virtual void setPosY(int posY);

protected:
    int posX;
    int posY;

};


#endif //DIVERTPROJECT_INTERACTIVE_H
