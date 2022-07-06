#include <iostream>
using namespace std;
class first_page
{
	public:
		int a,b,c;
		int ans;
		string color , Con;
		void start()
		{
			
			cout << "\n\n\n\n"<< endl;
			cout << "Rent Car"<< endl;
			
			//cout << "2. Buy Car"<< endl;
			
			//cout << "3. Sell your Car"<<endl;
			
			cout << "Enter your Choice:";
			cin >> a;
			if(a==1)
			{
				cout << "Select Your Budget from below list(per day)"<<endl;
				
				cout <<"1.  5000-10000"<<endl;
				cout << "2.  10000 - 25000"<<endl;
				cout << "3.  25000 - 60000"<<endl;
			
				//cout << "500000 - 1000000"<<endl;
				cout << "Select Your Choice";
				cin >> b;
				if(b==1)
				{
					cout << "Available Cars in this Budget"<<endl;
					cout << "1.Baleno"<<endl;
					cout << "2.TATA Harrier"<<endl;
					cout << "3. Creta"<<endl;
					cout << "4. Honda Civic"<<endl;
					cout << endl;
					cout << "Enter Your Choice";
					cin >> ans;
					if(ans==1)
					{
						cout << "New Age Baleno is Available for you"<<endl;
						cout << "Six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Blue"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Blue" || color=="blue")
						{
							cout << "Car : New Age Baleno"<< endl;
							cout << "Color : Blue"<<endl;
							cout << "Rental Cost Per Day : 5000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 5500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Maruti Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : New Age Baleno"<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 5000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 5500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Maruti Showroom"<<endl;
							}
						}
						
						
					}
					else if(ans==2)
					{
						cout << "TATA Harrier is Available for you"<<endl;
						cout << "Six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Red"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Red" || color=="red")
						{
							cout << "Car : TATA Harrier"<< endl;
							cout << "Color : Red"<<endl;
							cout << "Rental Cost Per Day : 6500 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 7000 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest TATA Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : TATA Harrier"<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 6500 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 7000 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest TATA Showroom"<<endl;
							}
						}
						
						
						
						
					}
					else if(ans==3)
					{
						cout << "Creta is Available for you"<<endl;
						
						cout << "Colors avilable :"<<endl;
						cout << "Black"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Black" || color=="black")
						{
							cout << "Car : Hyudai Creta"<< endl;
							cout << "Color : Black"<<endl;
							cout << "Rental Cost Per Day : 8000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 8500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Hyundai Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : Hyundai Creta"<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 8000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 8500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Hyundai Showroom"<<endl;
							}
						}
						
						
						
						
					}
					else if(ans==4)
					{
						
						
						cout << "Honda Civic is Available for you"<<endl;
						cout << "Six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Neon"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Neon" || color=="neon")
						{
							cout << "Car : Honda Civic"<< endl;
							cout << "Color : Neon"<<endl;
							cout << "Rental Cost Per Day : 10000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 10500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Honda Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : Honda Civic"<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 10000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 10500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Honda Showroom"<<endl;
							}
						}
						
						
						
						
						
					}
				}
				
				
				
				
				
				
				
				else if(b==2)
				{
					cout << "Available Cars in this Budget"<<endl;
					cout << "1. Innova"<<endl;
					cout << "2. Ford EcoSport"<<endl;
					cout << "3. Fortuner(Old and Latest Model both)"<<endl;
					cout << "Enter Your Choice:";
					cin >> ans;
					if(ans==1)
					{
						cout << "The all new innova crysta"<<endl;
						cout << "Six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Brown"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Brown" || color=="brown")
						{
							cout << "Car : Innova crysta"<< endl;
							cout << "Color : Brown"<<endl;
							cout << "Rental Cost Per Day : 15000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 15500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Toyota Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : Innova crysta"<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 15000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 15500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Toyota Showroom"<<endl;
							}
						}
						
						
						
					}
					if(ans==2)
					{
						cout << "Ford EcoSport"<<endl;
						cout << "Six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Black"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Black" || color=="black")
						{
							cout << "Car : Ford EcoSport"<< endl;
							cout << "Color : Black"<<endl;
							cout << "Rental Cost Per Day : 10000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 10500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Ford Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : Ford EcoSport"<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 10000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 10500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Ford Showroom"<<endl;
							}
						}
						
					}
					if(ans==3)
					{
						cout << "Fortuner"<<endl;
						cout << "Eight Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Black"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Black" || color=="black")
						{
							cout << "Car : Fortuner "<< endl;
							cout << "Color : Black"<<endl;
							cout << "Rental Cost Per Day : 25000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Toyota Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : Fortuner "<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 20000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Toyota Showroom"<<endl;
							}
						}
						
						
					}
				}
				
				
				
				
				
				
				
				else if(b==3)
				{
					cout << "Available Cars in this Budget"<<endl;
					cout << "1. Tata Nexon"<<endl;
					cout << "2. Tata Nexon EV"<<endl;
					cout<< 	"3. Scorpio"<<endl;
					cin>> ans;
					if(ans==1)
					{
						cout << "Nexon"<<endl;
						cout << "six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Black"<<endl;
						cout << "green"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Black" || color=="black")
						{
							cout << "Car : Nexon "<< endl;
							cout << "Color : Black"<<endl;
							cout << "Rental Cost Per Day : 25000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Tata Showroom"<<endl;
							}
						}
						if(color=="Green" || color=="green")
						{
							cout << "Car : Nexon "<< endl;
							cout << "Color : green"<<endl;
							cout << "Rental Cost Per Day : 20000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Tata Showroom"<<endl;
							}
						}
						
						
					}	
					if(ans==2)
					{
						cout << "Nexon EV"<<endl;
						cout << "six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Blue"<<endl;
						cout << "green"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Blue" || color=="blue")
						{
							cout << "Car : Nexon EV "<< endl;
							cout << "Color : Blue"<<endl;
							cout << "Rental Cost Per Day : 25000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Tata Showroom"<<endl;
							}
						}
						if(color=="Green" || color=="green")
						{
							cout << "Car : Nexon EV "<< endl;
							cout << "Color : green"<<endl;
							cout << "Rental Cost Per Day : 20000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Tata Showroom"<<endl;
							}
						}
						
						
					}
					if(ans==3)
					{
						cout << "Scorpio"<<endl;
						cout << "six Air Bags"<< endl;
						cout << "Colors avilable :"<<endl;
						cout << "Black"<<endl;
						cout << "White"<<endl;
						cout << "Enter Your Choice:";
						cin >> color;
						if(color=="Black" || color=="black")
						{
							cout << "Car : Scorpio "<< endl;
							cout << "Color : Black"<<endl;
							cout << "Rental Cost Per Day : 25000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Mahindra Showroom"<<endl;
							}
						}
						if(color=="White" || color=="white")
						{
							cout << "Car : Scorpio "<< endl;
							cout << "Color : White"<<endl;
							cout << "Rental Cost Per Day : 20000 Rs"<<endl;
							cout << "After Taxes Total Cost Will be : 20500 Rs"<<endl;
							cout << "Confirm Your Order (Yes/No) : ";
							cin >> Con;
							if(Con=="Yes")
							{
								cout << "Your Order is Confirmed "<<endl;
								cout << "Take away this car from the nearest Mahindra Showroom"<<endl;
							}
						}
						
						
					}
				}
				
				
				
				
				
				
			}
		}
			
		
	};
int main()
{
	first_page o1;
	o1.start();
	return 0;
}