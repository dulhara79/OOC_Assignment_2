#include"Applicant.h"
#include"Application.h"
#include"Admin.h"
#include"Company.h"
#include"Job_seeker.h"
#include"User.h"
#include"Job.h"
#include <iostream>
using namespace std;

int main()
{
    //user data
    User* user1 = new User("U001", "Test", "user@gmail.com", "user1", "test_Data");
    user1->sendFeedback("F001", "Feedback cont");
    user1->displayUser();
    user1->DisplayUserFeedback();
    delete user1;
    cout << endl << endl;

    //job data
    Job* job1;
    job1 = new Job("J001", "Demo title", "Test ddescription", "Test loc", "2025/10/32", "P001", 100.00, "2025/10/32", "success");
    job1->DisplayJobDetails();
    delete job1;
    cout << endl << endl;

    //Job seeker data
    Job_seeker* jobSeeker1 = new Job_seeker();
    Job* jobs1 = new Job ("J002", "Demo title", "Test ddescription", "Test loc", "2025/10/32", "P002", 100.00, "2025/10/32", "success");
    jobSeeker1->AddJob_seeker("Test resume", jobs1);
    jobSeeker1->displayJobSeeker();
    delete jobSeeker1;
    jobs1->DisplayJobDetails();
    cout << endl << endl;  

 /*   //company data (error)
    Company* company1 = new Company("U005", "Test5", "user5@gmail.com", "user5", "test_Data5");
    Payment* paym1 = new Payment("P002", 200.00, "2025/10/33", "success");
    company1->postJob("Test company", "Test industry", paym1);
    company1->displayCompany();
    paym1->displayPayment();
    delete company1;
    cout << endl << endl; */

    //admin data
    Admin* admin1 = new Admin("U003", "Test", "user@gmail.com", "user1", "test_Data", "A001");
    cout << "Details of manager: " << endl;
    admin1->displayAdminDetail();
    cout << endl << endl; 

    //Jobseeker User data
    Job_seeker* jobSeeker2 = new Job_seeker("U004", "Test", "user@gmail.com", "user4", "test_Data");
    //jobSeeker2->addUserDetails("U004", "Test", "user@gmail.com", "user4", "test_Data");
    cout << "Display jobseeker details: " << endl;
    jobSeeker2->displayUserDetails();
    cout << endl << endl; 

/*    //Company data with user (extra code)
    Company* company2 = new Company("U005", "Test5", "user5@gmail.com", "user5", "test_Data5");
    cout << "Details of company user: " << endl;
    company2->displayCompany();
    cout << endl << endl; */

    //application details
    Application* apply1 = new Application();
    apply1->setApplicationDetails("2032/13/33", "A001");
    cout << "Application details: " << endl;
    apply1->getApplicationDetails();
    cout << endl << endl; 

    //applicant details
    Applicant* applicant1 = new Applicant("U006", "Test6", "user6@gmail.com", "user6", "test_Data6", "AP001");
    cout << "Detais of applicant: " << endl;
    applicant1->viewApplicationDetail();
    cout << endl << endl; 

    return 0;
}