#include <iostream>
#include <string>

using namespace std;
class Rooms
{
    private:
        string currName;
        Rooms* topRoom;
        Rooms* botRoom;
        Rooms* rightRoom;
        Rooms* leftRoom;
    public:
        Rooms(string payload);
        string getRoomName();
        Rooms* getTopRoom();
        Rooms* getBotRoom();
        Rooms* getRightRoom();
        Rooms* getLeftRoom();
        void setTopRoom(Rooms* payload);
        void setBotRoom(Rooms* payload);
        void setLeftRoom(Rooms* payload);
        void setRightRoom(Rooms* payload);
};