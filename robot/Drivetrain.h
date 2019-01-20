#ifndef Drivetrain_h
#define Drivetrain_h

#include <pt.h>
#include "Controller.h"

class Drivetrain{
    public:
        Drivetrain(int analog[4], int digital[4]);
        void drive(float lSpeed, float rSpeed);
        int thread(struct pt* pt);
        void periodic();
    private:
      Controller* fl;
      Controller* fr;
      Controller* br;
      Controller* bl;
};

#endif
