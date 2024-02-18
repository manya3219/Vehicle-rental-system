#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include <chrono>

using namespace std;
float trent=0;
int tcar=0;
char first_name[20];
char last_name[20];
long int contact;
int days;

class car
{
	public:


		int n;
		char ch;

		static int cfigo,critz,cbrio,cfortuner,cscorpio,cinnova,cindigo,cethios,cverna;

		void cust_details()
		{
			if(trent==0)
			{	 cout<<"\t-------------------------------------------------------------------------------------""\n";
				 cout<<"\tPlease provide cumstomer details\n\n";
				 cout<<"\tEnter first name : ";
				 cin>>first_name;
				 cout<<"\n";
				 cout<<"\tEnter last name : ";
				 cin>>last_name;
				 cout<<"\n";
				 cout<<"\tEnter contact no. : ";
				 cin>>contact;
				 cout<<"\t-------------------------------------------------------------------------------------""\n";
				 cout<<"\n";
			}
		}

};
int car::cfigo=1;
int car::critz=2;
int car::cbrio=3;
int car::cfortuner=3;
int car::cscorpio=2;
int car::cinnova=4;
int car::cindigo=2;
int car::cethios=1;
int car::cverna=3;

class hatchback:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(60)<<"\t------------------------------------------------------------------------------------"<<"\n";

			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<"FORD FIGO";
			std::cout<<left<<std::setw(33)<<"RITZ";
			std::cout<<left<<std::setw(23)<<"BRIO";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MODEL NO";
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MILEAGE";
			std::cout<<left<<std::setw(20)<<"12";
			std::cout<<left<<std::setw(20)<<"11";
			std::cout<<left<<std::setw(20)<<"14";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COLOR";
			std::cout<<left<<std::setw(20)<<"Red";
			std::cout<<left<<std::setw(20)<<"Blue";
			std::cout<<left<<std::setw(20)<<"Violet";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COST";
			std::cout<<left<<std::setw(20)<<"1000/day";
			std::cout<<left<<std::setw(20)<<"1500/day";
			std::cout<<left<<std::setw(20)<<"1800/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t-------------------------------------------------------------------------------------\n";

		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t--------------------------DETAILS OF HATCHBACK CARS--------------------------\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n\n\n";

			for(int i=1;i<=cfigo;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|""FORD FIGO""\n\n";
			}
			for(int i=1;i<=critz;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|""RITZ""\n\n";
			}
			for(int i=1;i<=cbrio;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|""BRIO""\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";

			cout<<"\n";
		}
		void buy_car()
		{

			cout<<"\tDo you want to rent a ""Hatchback"" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				cout<<"\tEnter \n\t1.To rent Ford Figo\n\t2.To rent Ritz \n\t3.To rent Brio \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cfigo==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=1;
							cout<<"\t"  "Total amount = "<<1000*days<<endl<<endl;
							trent+=1000*days;
							cfigo--;
						}
						break;
					case 2: if(critz==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=2;
							cout<<"\t""Total amount = "<<1500*days<<endl<<endl;
							trent+=1500*days;
							critz--;
						}
						break;
					case 3: if(cbrio==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=3;
							cout<<"\t""Total amount = "<<1800*days<<endl<<endl;
							trent+=1800*days;
							cbrio--;
						}
						break;
					default: cout<<"\t""Enter a valid input ""\n";
						 break;
				}
			}
		}

};

class SUV:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(20)<<"\t" "-------------------------------------------------------------------------------------";
			cout<<"\n";
			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<"FORTUNER";
			std::cout<<left<<std::setw(33)<<"INNOVA";
			std::cout<<left<<std::setw(23)<<"SCORPIO";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MODEL NO";
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MILEAGE";
			std::cout<<left<<std::setw(20)<<"17";
			std::cout<<left<<std::setw(20)<<"15";
			std::cout<<left<<std::setw(20)<<"13";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COLOR";
			std::cout<<left<<std::setw(20)<<"Red";
			std::cout<<left<<std::setw(20)<<"Blue";
			std::cout<<left<<std::setw(20)<<"Violet";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COST";
			std::cout<<left<<std::setw(20)<<"4800/day";
			std::cout<<left<<std::setw(20)<<"4500/day";
			std::cout<<left<<std::setw(20)<<"4000/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t""-------------------------------------------------------------------------------------""\n";
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t""--------------------------------DETAILS OF SUV CARS--------------------------""\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n\n\n";

			for(int i=1;i<=cfortuner;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|""FORTUNER""\n\n";
			}
			for(int i=1;i<=cinnova;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|" "INNOVA""\n\n";
			}
			for(int i=1;i<=cscorpio;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|" "SCORPIO""\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";

			cout<<"\n";
		}
		void buy_car()
		{
			cout<<"\tDo you want to rent a " "SUV"" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
				cout<<"\tEnter \n\t1.To rent Fortuner\n\t2.To rent Innova \n\t3.To rent Scorpio \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cfortuner==0)
						{
							cout<<"\t" "Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=7;
							cout<<"\t" "Total amount = "<<4800*days<<endl<<endl;;
							trent+=4800*days;
							cfortuner--;
							 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
						}
						break;
					case 2: if(cinnova==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=8;
							cout<<"\t" "Total amount = "<<4500*days<<endl<<endl;
							trent+=4500*days;
							cinnova--;
							 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
						}
						break;
					case 3: if(cscorpio==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=9;
							cout<<"\t""Total amount = "<<4000*days<<endl<<endl;
							trent+=4000*days;
							cscorpio--;
							 cout<<"\t""-------------------------------------------------------------------------------------""\n";
						}
						break;
					default: cout<<"\t""Enter a valid input ""\n";
						 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
						break;
				}
			}
		}
};
class Sedan:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(20)<<"\t" "-------------------------------------------------------------------------------------";
			cout<<"\n";

			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<"INDIGO";
			std::cout<<left<<std::setw(33)<<"ETHIOS";
			std::cout<<left<<std::setw(23)<<"VERNA";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MODEL NO";
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MILEAGE";
			std::cout<<left<<std::setw(20)<<"15";
			std::cout<<left<<std::setw(20)<<"12";
			std::cout<<left<<std::setw(20)<<"11";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COLOR";
			std::cout<<left<<std::setw(20)<<"White";
			std::cout<<left<<std::setw(20)<<"Silver";
			std::cout<<left<<std::setw(20)<<"Black";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COST";
			std::cout<<left<<std::setw(20)<<"3000/day";
			std::cout<<left<<std::setw(20)<<"3500/day";
			std::cout<<left<<std::setw(20)<<"3800/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t""-------------------------------------------------------------------------------------""\n";
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t""--------------------------------DETAILS OF SEDAN CARS------------------------------""\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n\n\n";

			for(int i=1;i<=cindigo;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|""INDIGO""\n\n";
			}
			for(int i=1;i<=cethios;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|" "ETHIOS""\n\n";
			}
			for(int i=1;i<=cverna;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|" "VERNA""\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";

			cout<<"\n";
		}
		void buy_car()
		{

			cout<<"\tDo you wanna rent a ""Sedan"" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				 cout<<"\t""-------------------------------------------------------------------------------------""\n";
				cout<<"\tEnter \n\t1.To rent Indigo\n\t2.To rent Ethios \n\t3.To rent Verna \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cindigo==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=4;
							cout<<"\t""Total amount = "<<3000*days<<endl<<endl;
							trent+=3000*days;
							cindigo--;
							 cout<<"\t""-------------------------------------------------------------------------------------""\n";
						}
						break;
					case 2: if(cethios==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=5;
							cout<<"\t" "Total amount = "<<3500*days<<endl<<endl;
							trent+=3500*days;
							cethios--;
							 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
						}
						break;
					case 3: if(cverna==0)
						{
							cout<<"\t""Sorry no cars available in this category, Pick another car""\n";
						}
						else
						{	tcar=6;
							cout<<"\t" "Total amount = "<<3800*days<<endl<<endl;
							trent+=3800*days;
							cverna--;
							 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
						}
						break;
					default: cout<<"\t""Enter a valid input ""\n";
					 	cout<<"\t" "-------------------------------------------------------------------------------------""\n";
						break;
				}
			}
		}
};

class rent:virtual public hatchback,virtual public Sedan,virtual public SUV
{
	public:
		int op;
		void display()
		{
			 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
			cout<<"\t" "Please enter the kind of car u wamt ""\n";
			cout<<"\t1.Hatchback \n\t2.Sedan \n\t3.SUV\n\t";
			cin>>op;
			 cout<<"\t" "-------------------------------------------------------------------------------------""\n";
			switch(op)
			{
				case 1: hatchback::display();
					hatchback::get_data();
					hatchback::buy_car();
					break;
				case 2: Sedan::display();
					Sedan::get_data();
					Sedan::buy_car();
					break;
				case 3: SUV::display();
					SUV::get_data();
					SUV::buy_car();
					break;
			}
		}

};
int main()
{
	char ch;
	rent r;

	cout<<"\t" "-------------------------------WELCOME TO DriveOut RENTALS-----------------------------""\n";
	r.display();
    auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    // Convert the time to a struct tm (time information structure)
    std::tm* currentDate = std::localtime(&currentTime);

    // Extract the date components from the struct tm
    int year = currentDate->tm_year + 1900; // Year is represented as years since 1900
    int month = currentDate->tm_mon + 1;    // Month is represented as zero-based (0 to 11)
    int day = currentDate->tm_mday;         // Day of the month (1 to 31)


	ofstream file;
	file.open("Customer_details.txt");
	file<<"\n\n\t****************************** DriveOut Rentals ******************************\n";
	file<<"\t                                  RECEIPT                                    \n\n";
    file<< "\t Rent Date: " << year << "-" << month << "-" << day << "\n";

	file<<"\t CUSTOMER DETAILS: \n\n";
	file<<"\t CUSTOMER NAME : "<<first_name<<"  "<<last_name<<endl<<endl;
	file<<"\t CONTACT : "<<contact<<endl<<endl;
	file<<"\t__________________________________________________________________________________\n\n";
	file<<left<<setw(20)<<"\t TYPE OF CAR ";
	file<<left<<setw(20)<<" DAYS ";
	file<<left<<setw(20)<<" COST ";
	file<<left<<setw(17)<<" TOTAL  \n";
	file<<"__________________________________________________________________________________\n\n\t";

	for(;;)
	{

		do
		{
			cout<<"\n";

			if(tcar==1)
			{
				file<<left<<setw(20)<<" FORD FIGO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1000";
				file<<left<<setw(20)<<1000*days<<"\n\t";
			}

			if(tcar==2)
			{
				file<<left<<setw(20)<<" RITZ :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1500";
				file<<left<<setw(20)<<1500*days<<"\n\t";
			}

			if(tcar==3)
			{
				file<<left<<setw(20)<<" BRIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1800";
				file<<left<<setw(20)<<1800*days<<"\n\t";
			}
			if(tcar==4)
			{
				file<<left<<setw(20)<<" INDIGO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3000";
				file<<left<<setw(20)<<3000*days<<"\n\t";
			}
			if(tcar==5)
			{
				file<<left<<setw(20)<<" ETHIOS :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3500";
				file<<left<<setw(20)<<3500*days<<"\n\t";
			}
			if(tcar==6)
			{
				file<<left<<setw(20)<<" VERNA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3800";
				file<<left<<setw(20)<<3800*days<<"\n\t";
			}
			if(tcar==7)
			{
				file<<left<<setw(20)<<" FORTUNER :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4800";
				file<<left<<setw(20)<<4800*days<<"\n\t";
			}
			if(tcar==8)
			{
				file<<left<<setw(20)<<" INNOVA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4500";
				file<<left<<setw(20)<<4500*days<<"\n\t";
			}
			if(tcar==9)
			{
				file<<left<<setw(20)<<" SCORPIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4000";
				file<<left<<setw(20)<<4000*days<<"\n\t";
			}

			cout<<"\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='n'||ch=='N')
				break;

			r.display();
		}while(ch=='y'||ch=='Y');
		file.close();
    std::string destinationFileName = "AllRecord.txt";


    std::ofstream destinationFile(destinationFileName, std::ios::app);



			string linesread;
			    ifstream infile ("Customer_details.txt");
			    if (infile.is_open())
			    {
				while ( getline (infile, linesread) )
				{
				    cout << linesread << endl;
				    destinationFile << linesread << std::endl;
				}
				infile.close();

               destinationFile.close();
			    }
			    else cout << "File cannot be read";


			cout<<"\t" "Thank You for visiting""\n";
			cout<<"\t""TOTAL RENT : "<<trent<<endl;
			exit(0);
	}
	return 0;
}
