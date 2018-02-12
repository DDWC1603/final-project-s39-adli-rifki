//Akmal Adli bin Ariffin A17DW0074
//Rifki Redha bin Ahmad Rifae  A17DW2273
//Final Project Budget Expenses Question 3

#include<iostream>
#include"allfunctions.h"
using namespace std;

int main()
{
	
	int days,totalSpent;
	float departure  ; 
	float Arrival ;
	float ticketPrice;
	float HotelFare;
	float carRental,idealBudget;
	idealBudget = getIdealBudget(idealBudget);
	days = getdays(days);
	departure = getdepart(departure);
	Arrival = getarriv(Arrival);
	ticketPrice = getTicket(ticketPrice);
    HotelFare = HotelFees(HotelFare);
    carRental =CarRentalFare(carRental);
    
    totalSpent = HotelFare + ticketPrice;
    
	cout<<"Your Ideal Budget: RM "<<idealBudget<<endl
	    <<"Days Travel: "<<days<<endl
        << "Departure Time (24hours): "<<departure<<endl
        <<"Arrival Time (24hours): "<<Arrival<<endl
        <<"Ticket Price:RM "<<ticketPrice<<endl
        <<"Hotel Fare:RM "<<HotelFare<<endl
        <<"Car Rental Fare:RM "<<carRental<<endl;
      //  <<"Total Spent: "
        
        
        
        /*if(totalSpent<=idealBudget)
        {
        	cout<<"Congratulations You Saved "<<idealBudget-totalSpent;
		}*/
  
}
int getdays(int days)
{	
	cout<<"Enter Number of Days: ";
	cin>>days;
	while(days<1)
	{
		cout<<"Invalid. Please Enter Again: ";
		cin>>days;
	}
	return days;
	
}
float getdepart(float departure)
{
	cout<<"Enter Departure Time (24hours): ";
	cin>>departure;
	while ( departure <0 or departure > 23.59)
	{
		cout<<"Invalid. Please enter again: "; 
		cin>>departure; 
	}

	return departure;
}
float getarriv(float Arrival)
{
	cout<<"Enter Arrival Time: ";
	cin>>Arrival;
	while ( Arrival <0 or Arrival > 23.59)
	{
		cout<<"Invalid. Please enter again: "; 
		cin>>Arrival; 
	}
	return Arrival;
	
}
float getTicket(float ticketPrice)
{
	cout<<"Enter Air Fare:RM ";
	cin>>ticketPrice;
	return ticketPrice;
	
	
}
float HotelFees(float HotelFare)
{
	int days;
	cout<<"Enter The Hotel Fare for whole trip: ";
	cin>>HotelFare; 
	return HotelFare;
}
float CarRentalFare(float carRental)
{
	cout<<"Enter Car Rental Fees:RM ";
	cin>>carRental;
	return carRental;
}
float getIdealBudget(float idealBudget)
{
	cout<<"Enter Your Ideal Budget: RM ";
	cin>>idealBudget;
}
































