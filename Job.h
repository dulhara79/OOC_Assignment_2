#pragma once
#include"Application.h"
#include"Payment.h"
#include<string>
#include<iostream>
#define SIZE 1
using namespace std;

class Job
{
private:
	string jobID;
	string title;
	string description;
	string location;
	string postDate;
	Payment* payment[SIZE];
public:
	Job();
	Job(string j_id, string j_title, string j_des, string j_loc, string j_date, string j_pid, float j_pamount, string j_pdate, string j_pstatus);
	void editJob();
	void deleteJob();
	void DisplayJobDetails();
	void applicationDetails();
	~Job();
};

