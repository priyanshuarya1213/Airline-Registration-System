#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
	public:
	
	    Management()
	    {
	        mainMenu();
		}
};


class Details
{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information()
		{
			cout<<"\n Enter the customer ID : ";
			cin>>cId;
			cout<<"\n Enter the Name : ";
			cin>>name;
			cout<<"\n Enter the age : ";
			cin>>age;
			cout<<"\n Enter address : ";
			cin>>add;
			cout<<"\n Enter Gender : ";
			cin>>gender;
			cout<<"Your Details are saved with us\n"<<endl;
		}
};


int Details::cId;
string Details::name;
string Details::gender;


class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[] = {"Dubai", "Canada", "UK", "USA","Australia", "London"};
			
			for(int a =0; a<6; a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
			}
			
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight : ";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"__________Welcome to Dubai Emirates__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. Dub - 498"<<endl;
						cout<<"\t08-01-2022 8:00AM 10hr Rs. 14000"<<endl;
						
						cout<<"2. Dub - 415"<<endl;
						cout<<"\t09-01-2022 11:00AM 8hr Rs. 16000"<<endl;
						
						cout<<"3. Dub - 464"<<endl;
						cout<<"\t11-01-2022 3:00PM 12hr Rs. 12000"<<endl;
						
						cout<<"\nSelect the flight you want to book : ";
						
						cin>>choice1;
						
						if(choice1==1)
						{
							charges = 14000;
							cout<<"\nYou have Successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 16000;
							cout<<"\nYou have Successfully booked the flight DUB - 415"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 12000;
							cout<<"\nYou have Successfully booked the flight DUB - 464"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go  back to the main menu"<<endl;
						cin>>back;
						if(back==1)
			    			{
			    				mainMenu();
							}
							else
							{
								mainMenu();
							}
					}
					
					
				case 2:
					{
						cout<<"__________Welcome to Canada Airlines__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. CAN - 208"<<endl;
						cout<<"\t08-01-2022 4:00AM 20hr Rs. 24000"<<endl;
						
						cout<<"2. CAN - 255"<<endl;
						cout<<"\t09-01-2022 10:00AM 18hr Rs. 26000"<<endl;
						
						cout<<"3. CAN - 286"<<endl;
						cout<<"\t11-01-2022 1:00PM 22hr Rs. 22000"<<endl;
						
						cout<<"\nSelect the flight you want to book : ";
						
						cin>>choice1;
						
						if(choice1==1)
						{
							charges = 24000;
							cout<<"\nYou have Successfully booked the flight CAN - 208"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 26000;
							cout<<"\nYou have Successfully booked the flight  CAN - 255"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 22000;
							cout<<"\nYou have Successfully booked the flight  CAN - 286"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go  back to the main menu"<<endl;
						cin>>back;
						if(back==1)
			    			{
			    				mainMenu();
							}
							else
							{
								mainMenu();
							}
					}
					
					
				case 3:
					{
						cout<<"__________Welcome to UK AirWays__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. UK - 318"<<endl;
						cout<<"\t08-01-2022 2:00AM 14hr Rs. 15000"<<endl;
						
						cout<<"2. UK - 335"<<endl;
						cout<<"\t09-01-2022 1:00PM 13hr Rs. 16000"<<endl;
						
						cin>>choice1;
						
						if(choice1==1)
						{
							charges = 15000;
							cout<<"\nYou have Successfully booked the flight UK - 318"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 16000;
							cout<<"\nYou have Successfully booked the flight  UK - 335"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go  back to the main menu"<<endl;
						cin>>back;
						if(back==1)
			    			{
			    				mainMenu();
							}
							else
							{
								mainMenu();
							}
					}
					
					case 4:
						{
							cout<<"__________Welcome to USA Airways__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. US - 518"<<endl;
						cout<<"\t010-01-2022 4:00AM 22hr Rs. 48000"<<endl;
						
						cout<<"2. US - 555"<<endl;
						cout<<"\t14-01-2022 10:00AM 24hr Rs. 42000"<<endl;
						
						cout<<"3. US - 576"<<endl;
						cout<<"\t16-01-2022 1:00PM 25hr Rs. 44000"<<endl;
						
						cout<<"\nSelect the flight you want to book : ";
						
						cin>>choice1;
						
						if(choice1==1)
						{
							charges = 48000;
							cout<<"\nYou have Successfully booked the flight US - 518"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 42000;
							cout<<"\nYou have Successfully booked the flight  US - 555"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 44000;
							cout<<"\nYou have Successfully booked the flight  US - 576"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go  back to the main menu"<<endl;
						cin>>back;
						if(back==1)
			    			{
			    				mainMenu();
							}
							else
							{
								mainMenu();
							}
					}
					
					case 5:
						{
							cout<<"__________Welcome to Australian Airlines__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. AUS - 612"<<endl;
						cout<<"\t12-01-2022 10:00AM 18hr Rs. 25000"<<endl;
						
						cout<<"\nSelect the flight you want to book : ";
						
						cin>>choice1;
						
						if(choice1==1)
						{
							charges = 25000;
							cout<<"\nYou have Successfully booked the flight AUS- 612"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go  back to the main menu"<<endl;
						cin>>back;
						if(back==1)
			    			{
			    				mainMenu();
							}
							else
							{
								mainMenu();
							}
					}
					
				case 6:
					{
						cout<<"__________Welcome to London Airways__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. LON - 734"<<endl;
						cout<<"\t08-01-2022 6:00AM 14hr Rs. 20000"<<endl;
						
						cout<<"2. LON - 704"<<endl;
						cout<<"\t10-01-2022 12:00AM 13hr Rs. 22000"<<endl;
						
						cout<<"3. LON - 756"<<endl;
						cout<<"\t12-01-2022 4:00PM 12hr Rs. 24000"<<endl;
						
						cout<<"\nSelect the flight you want to book : ";
						
						cin>>choice1;
						
						if(choice1==1)
						{
							charges = 20000;
							cout<<"\nYou have Successfully booked the flight LON - 734"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 22000;
							cout<<"\nYou have Successfully booked the flight  LON - 704"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges = 24000;
							cout<<"\nYou have Successfully booked the flight LON - 756"<<endl;
							cout<<"You can go back to menu  and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go  back to the main menu"<<endl;
						cin>>back;
						if(back==1)
			    		   {
			    				mainMenu();
							}
							else
							{
								mainMenu();
						    }
					}
					
					default :
					    {
							cout<<"Invalid Input, Shifting you to the main menu!\n"<<endl;
							mainMenu();
							break;
						}	
			}
		}
};


float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
	public:
		
		void Bill()
		{
			string destination = " ";
			ofstream outf("records.txt");
			{
				outf<<"__________XYZ Airlines____________"<<endl;
				outf<<"__________Ticket__________________"<<endl;
				outf<<"____________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				else if(registration::choice==6)
				{
					destination="London";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight Cost : \t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		
		void displayBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};


void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t            XYZ Airlines      \n"<<endl;
	cout<<"\t______________Main Menu____________________"<<endl;
	
	cout<<"\t____________________________________________"<<endl;
	cout<<"\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the customer Details      \t"<<endl;
	cout<<"\t|\t Press 2 for flight Regisration           \t"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges           \t"<<endl;
	cout<<"\t|\t Press 4 to Exit                          \t"<<endl;
	
	cout<<"\t\t\t\t\t\t|"<<endl;
	cout<<"\t_____________________________________________"<<endl;
	
	
	cout<<"Enter the Choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		case 1:
			{
				cout<<"____________Customers__________\n"<<endl;
				d.information();
				cout<<"Press any key to go back to the Main Menu ";
				cin>>back;
				
				if(back == 1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
			
		    case 2:
			    {
				    cout<<"___________Book a flight using this System__________\n"<<endl;
			     	r.flights();
			    	break;
					
			    }
			    
			    case 3:
			    	{
			    		cout<<"_____Get Your Ticket_____\n";
			    		t.Bill();
			    		
			    		cout<<"Your ticket is printed, you can collected it \n"<<endl;
			    		cout<<"Press 1 to display your ticket ";
			    		
			    		cin>>back;
			    		
			    		if(back == 1)
			    		{
			    			t.displayBill();
			    			cout<<"Press any key to go back to main menu:";
			    			cin>>back;
			    			if(back==1)
			    			{
			    				mainMenu();
							}
							else
							{
								mainMenu();
							}
						}
						else
						{
							mainMenu();
						}
			    		break;
					}
					
					case 4:
						{
							cout<<"\n\n\t____________Thank You___________"<<endl;
							break;
						}
						default :
							{
								cout<<"Invalid Input, Please Try Again!\n"<<endl;
								mainMenu();
								break;
							}
	}
}


int main()
{
	Management Mobj;
	return 0;
}
