#include"Job_seeker.h"
#include"User.h"
using namespace std;

Job_seeker::Job_seeker()
{
}

Job_seeker::Job_seeker(string jbs_uid, string jbs_uname, string jbs_uemail, string jbs_upw, string jbs_uaddrs)
	:User(jbs_uid, jbs_uname, jbs_uemail, jbs_upw, jbs_uaddrs)
{
}

void Job_seeker::AddJob_seeker(string jbs_resume, Job* job1)
{
	resume = jbs_resume;
	job[0] = job1;
}

void Job_seeker::searchJobs()
{
}

void Job_seeker::displayJobSeeker()
{
	cout << "Resume: " << resume << endl;
	for (int i = 0; i < SIZE; i++) {
		job[i]->DisplayJobDetails();
	}
}

void Job_seeker::displayUserDetails()
{
	/*cout << "User ID :" << userID << endl << "Name: " << name << endl << "Email: " << email << endl
		<< "Password: " << password << endl << "Address: " << endl;*/
	User::displayUser();
}

Job_seeker::~Job_seeker()
{
	cout << "Job seeker deleted" << endl;
}
