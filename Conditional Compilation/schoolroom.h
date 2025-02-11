#ifndef SCHOOLROOM_H_
#define SCHOOLROOM_H_

#include "person.h"

struct SchoolRoom {
    int roomNumber;
    struct Person peopleInRoom[50];
};

#endif
