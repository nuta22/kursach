#include "Person.h"

person::person() {
	full_name_of_the_payer = "0";
	room = "0";
	type_of_master = "0";
}

person::person(string full_name_of_the_payer, string room, string type_of_master) {
	
	this->full_name_of_the_payer = full_name_of_the_payer;
	this->room = room;
	this->type_of_master = type_of_master;
}

person::person(const person& ob) {
	this->full_name_of_the_payer = ob.full_name_of_the_payer;
	this->room = ob.room;
	this->type_of_master = type_of_master;
}

person::~person()
{ }