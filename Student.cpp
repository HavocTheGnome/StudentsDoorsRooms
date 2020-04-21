#include "Student.hpp"
#include <iostream>
#include <string>

School::School()
{
    string top = "top";
    string bottom = "bottom";
    string right = "right";
    string left = "left";
    string Hallway1s = "Hallway 1";
    string Hallway2s = "Hallway 2";
    string Hallway3s = "Hallway 3";
    string Hallway4s = "Hallway 4";
    string Hallway5s = "Hallway 5";
    string Lobbys = "Lobby";
    string OneTwentys = "120";
    string Esportss = "Esports";
    string LLOffices = "LockLair's Office";
    string ServerRooms = "Server Room";
    string OneEighteens = "118";
    string MacLab2s = "Mac Lab 2";
    string MacLab1s = "Mac Lab 1";
    string AdvLab1s = "Adv Lab 1";
    string AdvLab2s = "Adv Lab 2";
    Rooms* Hallway1 = new Rooms(Hallway1s);
    Rooms* Hallway2 = new Rooms(Hallway2s);
    Rooms* Hallway3 = new Rooms(Hallway3s);
    Rooms* Hallway4 = new Rooms(Hallway4s);
    Rooms* Hallway5 = new Rooms(Hallway5s);
    Rooms* Lobby = new Rooms(Lobbys);
    Rooms* OneTwenty = new Rooms(OneTwentys);
    Rooms* Esports = new Rooms(Esportss);
    Rooms* LLOffice = new Rooms(LLOffices);
    Rooms* ServerRoom = new Rooms(ServerRooms);
    Rooms* OneEighteen = new Rooms(OneEighteens);
    Rooms* MacLab2 = new Rooms(MacLab2s);
    Rooms* MacLab1 = new Rooms(MacLab1s);
    Rooms* AdvLab1 = new Rooms(AdvLab1s);
    Rooms* AdvLab2 = new Rooms(AdvLab2s);
    this->Campus = new Map(Hallway1);
    this->Campus->leftConnect(Hallway2);
    this->Campus->Move(left);
    this->Campus->topConnect(Hallway3);
    this->Campus->botConnect(Hallway4);
    this->Campus->Move(top);
    this->Campus->leftConnect(OneEighteen);
    this->Campus->rightConnect(AdvLab1);
    this->Campus->topConnect(MacLab1);
    this->Campus->Move(top);
    this->Campus->leftConnect(MacLab2);
    this->Campus->Move(left);
    this->Campus->botConnect(OneEighteen);
    this->Campus->Move(bottom);
    this->Campus->Move(right);
    this->Campus->Move(right);
    this->Campus->topConnect(AdvLab2);
    this->Campus->Move(left);
    this->Campus->Move(bottom);
    this->Campus->Move(bottom);
    this->Campus->botConnect(Hallway5);
    this->Campus->Move(bottom);
    this->Campus->botConnect(OneTwenty);
    this->Campus->leftConnect(Lobby);
    this->Campus->Move(left);
    this->Campus->topConnect(ServerRoom);
    this->Campus->botConnect(Esports);
    this->Campus->leftConnect(LLOffice);
    this->Campus->Move(right);
    this->Campus->Move(top);
    this->Campus->Move(top);
    this->Campus->Move(right);
}
void School::Student(string name)
{

}