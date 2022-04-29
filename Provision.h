#pragma once
#include "Libr.h"


class provision
{
public:
	
	string GetName() const { return name; }
	void SetName(string name) { this->name = name; }

	float GetData1() const { return Data; }
	void SetData1(float Data) { this->Data = Data; }


	float GetPrice() const { return price; }
	void SetPrice(float price) { this->price = price; }

	int GetID() const { return ID; }

	string GetName_of_master()const { return name_of_master; }
	void SetName_of_master(string name_of_master) { this->name_of_master = name_of_master; }

	int GetID_master() const { return ID_master; }


	
	virtual void pack() = 0;

protected:
	
	string name;
	float Data1;
	float price;
	int ID;
	static int id;

	string name_of_master;
	float Data;
	float price_of_master;
	int ID_master;
	static int id_master;
};