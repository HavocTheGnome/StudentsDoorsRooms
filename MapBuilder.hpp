#include "Rooms.hpp"
#include <iostream>
#include <string>

using namespace std;
class Map
{
    private:
        Rooms* currRoom;
    public:
        Map(string roomName);
        Map(Rooms* roomName);
        void rightConnect(Rooms* newRoom);
        void leftConnect(Rooms* newRoom);
        void botConnect(Rooms* newRoom);
        void topConnect(Rooms* newRoom);
        string Move(string direction);
        string MoveLoud(string direction);
};