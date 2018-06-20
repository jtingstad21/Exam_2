#include "Runner.h"


Runner::Runner()
{
	firstName = "John";
	lastName = "Doe";
	pace = 360;
}

Runner::Runner(string first, string last, int p)
{
	firstName = first;
	lastName = last;
	pace = p;
}

string Runner::getFirstName()
{
	return firstName;
}

string Runner::getLastName()
{
	return lastName;
}

int Runner::getPace()
{
	return pace;
}

Runner::Runner(const Runner& r)
{
	firstName = r.firstName;
	lastName = r.lastName;
	pace = r.pace;
}

//void Runner::fillVector(vector<Runner>& v)
//{
//	ifstream reg;
//	reg.open("registrants.txt");
//
//	if (reg.fail())
//		cout << "Can't open file " << endl;
//
//	string fName, lName;
//	int pace;
//	while (reg >> fName >> lName >> pace)
//	{
//		for (int i = 0; i < v.size(); i++)
//		{
//			Runner r1(fName, lName, pace);
//			v.push_back(r1);
//		}
//	}
//}



void Runner::inputRunnerList(vector<Runner>& v)
{
	ifstream list;
	list.open("registrants.txt");

	if (list.fail())
		cout << "Can't open file" << endl;

	string fName;
	string lName;
	int p;

	ofstream white("White.txt");
	ofstream yellow("Yellow.txt");
	ofstream red("Red.txt");
	ofstream blue("Blue.txt");
	ofstream orange("Orange.txt");
	ofstream lilac("Lilac.txt");
	ofstream green("Green.txt");

	while (list >> fName >> lName >> p)
	{
		cout << fName << "\t" << lName << "\t" << p << endl;
		Runner r(fName, lName, p);

		v.push_back(r);

		int runnerPace = p;

		if (runnerPace > 0 && runnerPace <= 360)
		{
			white.clear();
			white.seekp(0, ios::end);
			white << fName << "\t" << lName << "\t" << p << endl;
		}
		else if (runnerPace > 360 && runnerPace <= 420)
		{
			yellow.clear();
			yellow.seekp(0, ios::end);
			yellow << fName << "\t" << lName << "\t" << p << endl;
		}
		else if (runnerPace > 420 && runnerPace <= 480)
		{
			green.clear();
			green.seekp(0, ios::end);
			green << fName << "\t" << lName << "\t" << p << endl;
		}
		else if (runnerPace > 480 && runnerPace <= 540)
		{
			orange.clear();
			orange.seekp(0, ios::end);
			orange << fName << "\t" << lName << "\t" << p << endl;
		}
		else if (runnerPace > 540 && runnerPace <= 600)
		{
			blue.clear();
			blue.seekp(0, ios::end);
			blue << fName << "\t" << lName << "\t" << p << endl;
		}
		else if (runnerPace > 600 && runnerPace <= 640)
		{
			lilac.clear();
			lilac.seekp(0, ios::end);
			lilac << fName << "\t" << lName << "\t" << p << endl;
		}
		else if (runnerPace > 640 && runnerPace <= 1200)
		{
			red.clear();
			red.seekp(0, ios::end);
			red << fName << "\t" << lName << "\t" << p << endl;
		}
		else
		{
			cout << "Invalid pace" << endl;
		}
	}
	white.close();
	yellow.close();
	orange.close();
	green.close();
	blue.close();
	red.close();
	lilac.close();
	
}






