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

private:
    int faces;
    static int Rolls;
};


#endif //DIVERTPROJECT_DICE_H
