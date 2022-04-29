#include"Master.h"

master::master() {
	Data = 00.00;
	name_of_master = "0";
	price_of_master = 0;
	ID_master = 0;
}

master::master(string name_of_drink, float Data, float price_of_master, int ID_master) {
	
	this->Data = Data;
	this->name_of_master = name_of_master;
	this->price_of_master = price_of_master;
	this->ID_master = ID_master;
}

master::master(const  master& ob) {
	this->name_of_master = ob.name_of_master;
	this->Data = ob.Data;
	this->price_of_master = ob.price_of_master;
	this->ID_master = ob.ID_master;
}

master::~master()
{ }


master& master::operator = (const  master& ob) {
	this->Data = ob.Data;
	this->name_of_master = name_of_master;

	return *this;
}

bool  master::operator == (const master& ob) {
	if (this->Data == ob.Data && this->name_of_master == ob.name_of_master && this->price_of_master == price_of_master)
		return true;
	else
		return false;
}

bool operator > (const master& ob, const master& ob2) {
	if (ob.Data > ob2.Data)
		return true;
	else
		return false;
}

ostream& operator << (ostream& out, const  master& ob) {
	out << ob.name_of_master << "\t\t" << ob.price_of_master << "\t\t\t" << ob.Data << "\t\t" << "\t\t" << ob.ID_master;
	return out;
}

istream& operator >> (istream& in, master& ob) {
	in >> ob.name_of_master >> ob.price_of_master >> ob.Data >> ob.ID_master;
	return in;
}