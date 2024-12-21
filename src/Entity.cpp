#include "D:\pois\Project9\Project9\Entity.h"


Entity::Entity(int id) : id(id) {}
int Entity::getId() const { return id; } 

void Entity::printInfo() const {
    cout << "Entity ID: " << id << endl;
} 