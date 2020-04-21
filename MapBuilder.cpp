#include "MapBuilder.hpp"
#include <iostream>
#include <string>

Map::Map(string roomName)
{
    this->currRoom = new Rooms(roomName);
}
Map::Map(Rooms* roomName)
{
    this->currRoom = roomName;
}
void Map::rightConnect(Rooms* newRoom)
{
    newRoom->setLeftRoom(currRoom);
    this->currRoom->setRightRoom(newRoom);
    
}
void Map::leftConnect(Rooms* newRoom)
{
    newRoom->setRightRoom(currRoom);
    this->currRoom->setLeftRoom(newRoom);
       
}
void Map::botConnect(Rooms* newRoom)
{
    newRoom->setTopRoom(currRoom);
    this->currRoom->setBotRoom(newRoom);
    
}
void Map::topConnect(Rooms* newRoom)
{
    newRoom->setBotRoom(currRoom);
    this->currRoom->setTopRoom(newRoom);
    
}
string Map::Move(string direction)
{
    if(direction == "right")
    {
        this->currRoom = this->currRoom->getRightRoom();
         
    }
    else if(direction == "left")
    {
        this->currRoom = this->currRoom->getLeftRoom();
        
    }
    else if(direction == "top")
    {
        this->currRoom = this->currRoom->getTopRoom();
            
    }
    else if(direction == "bottom")
    {
        this->currRoom = this->currRoom->getBotRoom();
        
    }
    else
    {
        cout << "not a direction, must be 'right', 'left', 'top', or 'bottom'." << "\n";
        return "";
    }
    //cout << "Current Room = ";
    //cout << this->currRoom->getRoomName() << "\n";
    //cout << "West Wall = ";
    //if(this->currRoom->getRightRoom() != 0)
    //{
    //    cout << this->currRoom->getRightRoom()->getRoomName();
    //    cout << " Door" << "\n";
    //}
    //else
    //{
    //    cout << "No Door" << "\n";
    //}
    //cout << "East Wall = ";
    //if(this->currRoom->getLeftRoom() != 0)
    //{
    //    cout << this->currRoom->getLeftRoom()->getRoomName();
    //    cout << " Door" << "\n";
    //}
    //else
    //{
    //    cout << "No Door" << "\n";
    //}
    //cout << "North Wall = ";
    //if(this->currRoom->getTopRoom() != 0)
    //{
    //    cout << this->currRoom->getTopRoom()->getRoomName();
    //    cout << " Door" << "\n";
    //}
    //else
    //{
    //    cout << "No Door" << "\n";
    //}
    //cout << "South Wall = ";
    //if(this->currRoom->getBotRoom() != 0)
    //{
    //    cout << this->currRoom->getBotRoom()->getRoomName();
    //    cout << " Door" << "\n";
    //}
    //else
    //{
    //    cout << "No Door" << "\n";
    //}
    //
    return this->currRoom->getRoomName();
}
string Map::MoveLoud(string direction)
{
    if(direction == "East")
    {
        this->currRoom = this->currRoom->getRightRoom(); 
    }
    else if(direction == "West")
    {
        this->currRoom = this->currRoom->getLeftRoom();
    }
    else if(direction == "North")
    {
        this->currRoom = this->currRoom->getTopRoom();    
    }
    else if(direction == "South")
    {
        this->currRoom = this->currRoom->getBotRoom();
    }
    else
    {
        cout << "not a direction, must be 'right', 'left', 'top', or 'bottom'." << "\n";
        return "";
    }
    cout << "Current Room = ";
    cout << this->currRoom->getRoomName() << "\n";
    cout << "West Wall = ";
    if(this->currRoom->getRightRoom() != 0)
    {
        cout << this->currRoom->getRightRoom()->getRoomName();
        cout << " Door" << "\n";
    }
    else
    {
        cout << "No Door" << "\n";
    }
    cout << "East Wall = ";
    if(this->currRoom->getLeftRoom() != 0)
    {
        cout << this->currRoom->getLeftRoom()->getRoomName();
        cout << " Door" << "\n";
    }
    else
    {
        cout << "No Door" << "\n";
    }
    cout << "North Wall = ";
    if(this->currRoom->getTopRoom() != 0)
    {
        cout << this->currRoom->getTopRoom()->getRoomName();
        cout << " Door" << "\n";
    }
    else
    {
        cout << "No Door" << "\n";
    }
    cout << "South Wall = ";
    if(this->currRoom->getBotRoom() != 0)
    {
        cout << this->currRoom->getBotRoom()->getRoomName();
        cout << " Door" << "\n";
    }
    else
    {
        cout << "No Door" << "\n";
    }
    
    return this->currRoom->getRoomName();
}