#include"User.h"
#include "Applicant.h"
using namespace std;

Applicant::Applicant()
{
}

Applicant::Applicant(string applic_uid, string applic_uname, string applic_uemail, string applic_upw, string applic_uaddrs, string applic_id)
	:User(applic_uid, applic_uname, applic_uemail, applic_upw, applic_uaddrs)
{
	ApplicationID = applic_id;
}

void Applicant::viewApplicationDetail()
{
	cout << "Application ID: " << ApplicationID << endl;
	User::displayUser();
}

void Applicant::viewApplicationSatus()
{
}

void Applicant::applyForJobs()
{
}

Applicant::~Applicant()
{
	cout << "Application deleted" << endl;
}
