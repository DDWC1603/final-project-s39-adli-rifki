//Akmal Adli bin Ariffin A17DW0074
//Rifki Redha bin Ahmad Rifae  A17DW2273
//Final Project Budget Expenses Question 3

#include<iostream>
#include<limits>
#include<string>

#include"allfunctions.h"
using namespace std;

int main()
{
			char loop;
		do{
			
			int days;
		
			float departure , Arrival , ticketPrice, HotelFare, carRental,idealBudget, totalSpent, totalSpent1, TaxiFare;
			idealBudget = getIdealBudget(idealBudget);
			days = getdays(days);
			departure = getdepart(departure);
			Arrival = getarriv(Arrival);
			ticketPrice = getTicket(ticketPrice);
		    HotelFare = HotelFees(HotelFare);
		    carRental =CarRentalFare(carRental);
		    TaxiFare = TaxiFees(TaxiFare);
		    
		    totalSpent = HotelFare + ticketPrice + carRental + TaxiFare;
		    totalSpent1 = idealBudget - totalSpent;
		    
	  cout<<endl<<"\t\t\t\t |  Your Ideal Budget: RM "<<idealBudget<<endl
			    <<"\t\t\t\t |  Days Travel: "<<days<<endl
		        <<"\t\t\t\t |  Departure Time (24hours): "<<departure<<endl
		        <<"\t\t\t\t |  Arrival Time (24hours): "<<Arrival<<endl
		        <<"\t\t\t\t |  Ticket Price:RM "<<ticketPrice<<endl
		        <<"\t\t\t\t |  Hotel Fare: RM "<<HotelFare<<endl
		        <<"\t\t\t\t |  Car Rental Fare: RM "<<carRental<<endl
		        <<"\t\t\t\t |  Taxi Fare: RM"<<endl
		        <<"\t\t\t\t |  Total Spent: RM "<<totalSpent<<endl;
		         
		        
		           if(totalSpent<=idealBudget)
		        {
		        	cout<<"\t\t\t\t Congratulations You Saved RM"<<totalSpent1<<" less than your ideal budget"<<endl;
		        	
				} 
				else if(totalSpent>idealBudget)
				{
					cout<<"\t\t\t\t Too bad you wasted RM"<<totalSpent1<< " from your ideal budget"<<endl;
					
				}
		
		    cout<<"\t\t\t\t Do you wish to continue on this travel budget expenses program? Y-Yes, N-No: ";
		        	cin>>loop;
		        	cout<<endl;
		   	}while( loop =='y' or loop == 'Y' );
		   	
		   	if (loop == 'N' or loop == 'n');
		     	{
		   		cout<<"\t\t\t\t THANK YOU HAVE A GREAT DAY"<<endl;
			    }
			
			   
		   
		
	}
	





int getdays(int days)
{	

		cout<<"\t\t\t\t Enter Number of Days: ";
		
		while (!(cin >> days) or (days<1) ) 
		{ 
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		cout<<"\t\t\t\t Invalid, Please Enter again: RM ";

		}
		
		return days;
	
}

float getdepart(float departure)
{
	cout<<"\t\t\t\t Enter Departure Time (24hours): ";

	while ( !(cin>>departure) or departure <0 or departure > 23.59)
	{   cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"\t\t\t\t Invalid. Please enter again: "; 
	}

	return departure;
}
float getarriv(float Arrival)
{
	cout<<"\t\t\t\t Enter Arrival Time: ";

	while (!(cin>>Arrival)  or Arrival <0 or Arrival > 23.59)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"\t\t\t\t Invalid. Please enter again:   ";

	}
	return Arrival;
	
}
float getTicket(float ticketPrice)
{
	cout<<"\t\t\t\t Enter Air Fare:RM ";

	while(!(cin>>ticketPrice) or (ticketPrice<0))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"\t\t\t\t Invalid, Please Enter Again: RM ";
	}
	return ticketPrice;
	
	
}
float HotelFees(float HotelFare)
{
	
	cout<<"\t\t\t\t Enter The Hotel Fare for whole trip: RM ";

	while(!(cin>>HotelFare) or (HotelFare <1))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"\t\t\t\t Invalid, Please Enter Again: RM ";
	}
	
	return HotelFare;
}
float CarRentalFare(float carRental)
{
	cout<<"\t\t\t\t Enter Car Rental Fees:RM ";
	while(!(cin>>carRental) or (carRental<1))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"Invalid, Please Enter Again: RM ";
	}
	return carRental;
}
float getIdealBudget(float idealBudget)
{
	
	cout<<"\t\t\t\t Enter Your Ideal Budget: RM ";

	while(!(cin>>idealBudget) or (idealBudget<1))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"\t\t\t\t Invalid, Plese Enter Again: RM ";
	}
	return idealBudget;
}
float TaxiFees(float TaxiFare)
{
	cout<<"\t\t\t\t Enter Taxi Fare: RM ";
	while(!(cin>>TaxiFare) or (TaxiFare<1))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"\t\t\t\t Invalid, Please Enter Again: RM ";
	}
	
	return TaxiFare;
	
}

















