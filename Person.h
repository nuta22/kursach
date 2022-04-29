#pragma once
#include "Libr.h"


class person
{
private:
	string full_name_of_the_payer;
	string room;
	string type_of_master;

public:
	
	person();
	person(string full_name_of_payer, string room, string type_of_master);
	person(const person& ob);
	~person();
	
	string GetRoom() const { return room; }
	string GetType_of_master()const { return type_of_master; }
	string GetFull_name_of_payer()const { return full_name_of_the_payer; }

	void SetRoom(string addres) { this->room = addres; }
	void SetType_of_master(string type_of_master) { this->type_of_master = type_of_master; }
	void SetFull_name_of_payer(string full_name_of_payer) { this->full_name_of_the_payer = full_name_of_payer; 
	}
};