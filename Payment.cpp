#include "Payment.h"
#include<iostream>
#include<string>
using namespace std;

Payment::Payment()
{
}

Payment::Payment(string p_id, float p_amount, string p_date, string p_status)
{
	PaymentID = p_id;
	Amount = p_amount;
	paymentDate = p_date;
	paymentStatus = p_status;
}

void Payment::processPayment()
{
}

void Payment::ViewPaymentHistory()
{
}

void Payment::displayPayment()
{
	cout << "Payment ID: " << PaymentID << endl << "Amount: " << Amount << endl << "Payment Date: " << paymentDate << endl 
		<< "Payment status: " << paymentStatus << endl;
}

Payment::~Payment()
{
	cout << "Payment deleted: " << PaymentID << endl;
}
