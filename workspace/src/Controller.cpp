#include "../include/Controller.h"

Controller::Controller(){
    motor_revision=0;
    deviation=0;
}

Controller::~Controller(){}


int8 Controller::run(float _deviation){
    deviation=_deviation;
    calc();
    return motor_revision;
}

int8 Controller::calc(){
    return SYS_OK;
}
