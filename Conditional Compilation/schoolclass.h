#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_

#include "person.h"

struct SchoolClass {
    struct Person students[26];
    char classLetter;
    int classNumber;
    struct Person classTeacher;
};

#endif
