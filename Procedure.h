#pragma once
#include "Libr.h"
#include "Provision.h"

class procedure :public provision
{


public:
	procedure();
	procedure(string name, float Data, float price, int ID);
	procedure(const procedure& ob);
	~procedure();

	procedure& operator = (const procedure& ob);
	bool operator == (const procedure& ob);
	friend bool operator < (const procedure& ob, const procedure& ob2);
	friend bool operator > (const procedure& ob, const procedure& ob2);
	friend ostream& operator << (ostream& out, const procedure& ob);
	friend istream& operator >> (istream& in, procedure& ob);

	friend void add(vector<procedure>& vect_add);
	friend void print_vector(const vector<procedure>& vect_print);
	friend void update(vector<procedure>& vect_update);
	friend void del(vector<procedure>& vect_del);

	void pack() {
		cout << "Íÿì-íÿì çàïàêîâàíî! Óðà-Óðà!\n";
	}

};