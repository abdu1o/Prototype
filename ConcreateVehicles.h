#pragma once

class Vehicle
{
protected:
	string _title;
	string _type;
	int _year;

public:
	virtual Vehicle* clone() = 0;

	void SetDetails(string title, string type, int year)
	{
		this->_title = title;
		this->_type = type;
		this->_year = year;
	}

	void Print() const
	{
		cout << "Title: " << _title << endl;
		cout << "Type: " << _type << endl;
		cout << "Year: " << _year << endl;
	}
};

class Car : public Vehicle
{
public:

	Vehicle* clone() override
	{
		Car* car = new Car();
		car->SetDetails(_title, _type, _year);
		return car;
	}
};

class Motorcycle : public Vehicle
{
public:

	Vehicle* clone() override
	{
		Motorcycle* mototrcycle = new Motorcycle();
		mototrcycle->SetDetails(_title, _type, _year);
		return mototrcycle;
	}
};

class Bus : public Vehicle
{
public:

	Vehicle* clone() override
	{
		Bus* bus = new Bus();
		bus->SetDetails(_title, _type, _year);
		return bus;
	}
};