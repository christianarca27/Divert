//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_INTERACTIVE_H
#define DIVERTPROJECT_INTERACTIVE_H


class Interactive {
public:
    void Interaction();

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

protected:
    int posX;
    int posY;

};


#endif //DIVERTPROJECT_INTERACTIVE_H
