// Copyright 2021 Khoroshavina Ekaterina
#ifndef INCLUDE_STONE_H_
#define INCLUDE_STONE_H_
#include "../include/object.h"
#include "../include/common.h"

class Stone : public Object {
 public:
    Stone(ObjType newObjType, Cell* cell);
    ~Stone();
    void live();
};

#endif  // INCLUDE_STONE_H_
