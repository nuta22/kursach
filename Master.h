#pragma once
#include "Libr.h"
#include "Provision.h"


class master :public provision
{

public:
	master();
	master(string name_of_master, float Data, float price_of_master, int ID_master);
	master(const master& ob);
	~master();

	master& operator = (const master& ob);
	bool operator == (const master& ob);
	friend bool operator < (const master& ob, const master& ob2);
	friend bool operator > (const master& ob, const master& ob2);
	friend ostream& operator << (ostream& out,const master& ob);
	friend istream& operator >> (istream& in, master& ob);

	friend void add(vector<master>& vect_add);
	friend void print_vector(const vector<master>& vect_print);
	friend void update(vector<master>& update);
	friend void del(vector<master>& vect_del);

	void pack() {
		cout << "Íàïèòîê çàïàêîâàí! Óðà!\n";
	}
};