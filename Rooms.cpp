#include "Rooms.hpp"
#include <iostream>
#include <string>

using namespace std;

Rooms::Rooms(string payload)
{
    this->currName = payload;
}
string Rooms::getRoomName()
{
    return this->currName;
}
Rooms* Rooms::getTopRoom()
{
    return this->topRoom;
}
Rooms* Rooms::getBotRoom()
{
    return this->botRoom;
}
Rooms* Rooms::getRightRoom()
{
    return this->rightRoom;
}
Rooms* Rooms::getLeftRoom()
{
    return this->leftRoom;
}
void Rooms::setTopRoom(Rooms* payload)
{
    this->topRoom = payload;
}
void Rooms::setBotRoom(Rooms* payload)
{
    this->botRoom = payload;
}
void Rooms::setLeftRoom(Rooms* payload)
{
    this->leftRoom = payload;
}
void Rooms::setRightRoom(Rooms* payload)
{
    this->rightRoom = payload;
}