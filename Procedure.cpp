#include "Procedure.h"


procedure::procedure() {
	name = "0";
	Data = 00.00;
	price = 0;
	ID = 0;
}

procedure::procedure(string name, float Data, float price, int ID) {
	
	this->name = name;
	this->Data = Data;
	this->price = price;
	

	this->ID = id;
	id++;
}

procedure::procedure(const procedure& ob) {
	this->ID = ob.ID;
	this->Data = ob.Data;
	this->name = ob.name;
	this->price = ob.price;
}

procedure::~procedure()
{ }



procedure& procedure::operator=(const procedure& ob) {
	this->ID = ob.ID;
	this->Data = ob.Data;
	this->name = ob.name;
	this->price = ob.price;

	return *this;
}

bool procedure::operator == (const procedure& ob) {
	if (this->Data == ob.Data  && this->name == ob.name && this->price == ob.price)
		return true;
	else
		return false;
}

bool operator < (const procedure& ob, const procedure& ob2) {
	if (ob.price < ob2.price)
		return true;
	else
		return false;
}

bool operator > (const procedure& ob, const procedure& ob2) {
	if (ob.Data > ob2.Data)
		return true;
	else
		return false;
}

ostream& operator << (ostream& out, const procedure& ob) {
	out << ob.name << "\t\t  " << ob.price << "\t\t\t" << ob.Data << "\t\t" << "\t\t" << ob.ID;
	return out;
}

istream& operator >> (istream& in, procedure& ob) {
	in >> ob.name >> ob.price >> ob.Data >> ob.ID;
	return in;
}