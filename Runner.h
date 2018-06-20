#pragma once
#ifndef RUNNER_H
#define RUNNER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Runner
{
private:
	string firstName;
	string lastName;
	int pace;
	vector<Runner> runnerList;
	ifstream list;

public:
	Runner();
	Runner(string first, string last, int p);

	string getFirstName();
	string getLastName();
	int getPace();
	Runner(const Runner&);
	void inputRunnerList(vector<Runner>& v);
};

#endif