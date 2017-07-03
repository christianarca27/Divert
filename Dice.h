//
// Created by User on 02/07/2017.
//

#ifndef DIVERTPROJECT_DICE_H
#define DIVERTPROJECT_DICE_H


class Dice {
public:
    explicit Dice(int f=6);
    int roll(int r);

    static void initRandom();

    static int getRolls();

    static void setRolls(int rolls);

    int getFaces() const;

    void setFaces(int faces);

private:
    static int rolls;
    int faces;
};


#endif //DIVERTPROJECT_DICE_H
