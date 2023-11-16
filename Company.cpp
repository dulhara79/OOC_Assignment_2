#include "Company.h"

Company::Company()
{
}

Company::Company(string cmp_uid, string cmp_uname, string cmp_uemail, string cmp_upw, string cmp_uaddrs)
	: User(cmp_uid, cmp_uname, cmp_uemail, cmp_upw, cmp_uaddrs)
{
}

void Company::postJob(string cmp_name, string cmp_indus, Payment* paym1)
{
	companyName = cmp_name;
	industry = cmp_indus;
	pay[0] = paym1;
}

void Company::displayPayments()
{
	for (int i = 0; i < SIZE; i++) {
		pay[i]->displayPayment();
	}
}

void Company::viewApplicant()
{
}

void Company::hireApplicant()
{
}

void Company::displayCompany()
{
	User::displayUser();
	cout << "Company Name: " << companyName << endl << "Industry: " << industry << endl;
}

Company::~Company()
{
	cout << "Company deleted" << endl;
}