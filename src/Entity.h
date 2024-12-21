#pragma once
#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Entity
{

protected:
    int id;
public:
    Entity(int id);
    int getId() const;
    virtual void printInfo() const;

    
};

#endif // !1