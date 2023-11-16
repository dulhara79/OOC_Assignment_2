#pragma once
#include"User.h"
#include"Job.h"
#include<string>
#include<iostream>
#define SIZE 1
using namespace std;

class Job_seeker : public User
{
private:
	string resume;
	Job* job[SIZE];
public:
	Job_seeker();
	Job_seeker(string jbs_uid, string jbs_uname, string jbs_uemail, string jbs_upw, string jbs_uaddrs);
	void AddJob_seeker(string jbs_resume, Job* job1);
	//void addUserDetails(string jbs_uid, string jbs_uname, string jbs_uemail, string jbs_upw, string jbs_uaddrs);
	void searchJobs();
	void displayJobSeeker();
	void displayUserDetails();
	~Job_seeker();
};

