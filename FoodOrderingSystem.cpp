#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <windows.h>
using namespace std;
string name;
class one
{
	public:
		void menu1();
};
void one::menu1()
{

	system("cls");
	system("color 	F0");
	cout << "\n\n\n\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO HNGRY HUB \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
	cout << "\n\n\t\t\t\t\t\t\t           =====Satisfy your snack attack=====" << endl;
	cout << "\n\n\n\t===========================\t\t\t==========================\t\t\t\t===========================" << endl;
	cout << "\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t\t[16] EXIT" << endl;
	cout << "\n\t=======================================================================================================================================" << endl;
}
class two : public one
{
protected:
	int quantity, ch, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, total = 0;
	string y, ye;

public:
	void menu2()
	{
		ofstream write;
		write.open("order.text");
		if (!write)
		{
			cout << "file can not open" << endl;
			exit(-1);
		}
		cout << "\n\n\n\t\t\t\t\t\t\tEnter your name : ";
		cin >> name;
		cout << "\n\t\t\t\t\t\t\tHello! " << name << " , Hope you are doing well :) " << endl;

	a:
	b:
	c:
		cout << "\n\n\tENTER YOUR ORDER (one order at a time): ";
		cin >> ch;
		cout << "\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
		cin >> ye;
		if (ye == "y" || ye == "Y")
		{
			goto b;
		}
		else
		{
			switch (ch)
			{
			case 1:
				cout << "\n\n\tHOW MANY  VEGGIE SUPREME YOU WANT :";
				cin >> quantity;
				a = 480;
				total = total + a * quantity;
				write << "YOU ORDER  Veggie Supreme : 480";
				write << " \n";
				write << "NUMBER OF VEGGI SUPREME IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Veggie Supreme " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 2:
				cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
				cin >> quantity;
				b = 440;
				total = total + b * quantity;
				write << "YOU ORDER  Exotica Pizza : 440";
				write << " \n";
				write << "NUMBER OF EXOTICA PIZZA IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Exotica Pizza " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 3:
				cout << "\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
				cin >> quantity;
				c = 580;
				total = total + c * quantity;
				write << "YOU ORDER  Chicken Sizzler : 580";
				write << " \n";
				write << "NUMBER OF Chicken Sizzler IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Chicken Sizzler " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 4:
				cout << "\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
				cin >> quantity;
				d = 520;
				total = total + d * quantity;
				write << "YOU ORDER  Chrispy Chicken : 520";
				write << " \n";
				write << "NUMBER OF Chrispy Chicken IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Chrispy Chicken " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 5:
				cout << "\n\n\tHOW MANY SPAGHETTI YOU WANT:";
				cin >> quantity;
				e = 350;
				total = total + e * quantity;
				write << "YOU ORDER  Spaghetti : 350";
				write << " \n";
				write << "NUMBER OF Spaghetti IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Spaghetti " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 6:
				cout << "\n\n\tHOW MANY COUNTRY FEAST YOU WANT:";
				cin >> quantity;
				f = 400;
				total = total + f * quantity;
				write << "YOU ORDER Country Feast : 400";
				write << "\n ";
				write << "NUMBER OF COUNTRY FEAST IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Country Feast " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 7:
				cout << "\n\n\tHOW MANY TETRAZZINI YOU WANT:";
				cin >> quantity;
				g = 420;
				total = total + g * quantity;
				write << "YOU ORDER Tetrazzini : 420";
				write << "\n ";
				write << "NUMBER OF Tetrazzini IS : " <<quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Tetrazzini " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 8:
				cout << "\n\n\tHOW MANY DOUBLE CHEESE PIZZA YOU WANT :";
				cin >> quantity;
				h = 540;
				total = total + h * quantity;
				write << "YOU ORDER Double Cheese Pizza : 540";
				write << " \n";
				write << "NUMBER OF DOUBLE CHEESE PIZZA IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Double Cheese Pizza " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 9:
				cout << "\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
				cin >> quantity;
				i = 548;
				total = total + i * quantity;
				write << "YOU ORDER Makizushi : 548";
				write << " \n";
				write << "NUMBER OF Makizushi IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Makizushi " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;
				

			case 10:
				cout << "\n\n\tHOW MANY HAM BURGER YOU WANT :";
				cin >>quantity;
				j = 390;
				total = total + j * quantity;
				write << "YOU ORDER Ham Burger : 390";
				write << " \n";
				write << "NUMBER OF Ham Burger IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Ham Burger " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 11:
				cout << "\n\n\tHOW MANY MARGHERITA PIZZA YOU WANT :";
				cin >> quantity;
				k = 525;
				total = total + k * quantity;
				write << "YOU ORDER Margherita : 525";
				write << " \n";
				write << "NUMBER OF MARGHERITA PIZZA IS : " <<quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER   Margherita Pizza " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 12:
				cout << "\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
				cin >>quantity;
				l = 425;
				total = total + l * quantity;
				write << "YOU ORDER Fish 'n' Chips : 425";
				write << " \n";
				write << "NUMBER OF Fish 'n' Chips IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Fish 'n' Chips " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 13:
				cout << "\n\n\tHOW MANY FAJITAS YOU WANT :";
				cin >>quantity;
				m = 335;
				total = total + m * quantity;
				write << "YOU ORDER  Fajitas  : 335";
				write << " \n";
				write << "NUMBER OF Fajitas IS : " <<quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Fajitas " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 14:
				cout << "\n\n\tHOW MANY TEMPURA YOU WANT :";
				cin >>quantity;
				n = 324;
				total = total + n * quantity;
				write << "YOU ORDER Tempura : 324";
				write << " \n";
				write << "NUMBER OF Tempura IS : " <<quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Tempura " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 15:
				cout << "\n\n\tHOW MANY HOT DOG YOU WANT :";
				cin >>quantity;
				o = 360;
				total = total + o * quantity;
				write<< "YOU ORDER  Hot Dog : 360";
				write << "\n ";
				write << "NUMBER OF Hot Dog IS : " << quantity;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Hot Dog " << endl<< "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 16:
				cout << "\n\t\t\t\t\t Brought To You By Saum_Ishi_Parth\n\n\n\n";
				exit(1);
				break;

			default:
				cout << "\n\n\t\t\t\t\t\t\tYOU ENTERED WRONG ORDER KEY !!!!! " << endl;
				goto c;
				break;
			}
			cout << "\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
			cin >> y;
			if (y == "yes" || y == "YES"|| y=="y")
			{
				goto a;
			}
			else
			{
				cout << "\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
				for (int a = 1; a < 8; a++) 
				{
					Sleep(200);
					cout << "...";
				}
				cout << "\n\t\t\t\t\t\t\t";
				system("PAUSE");
			}
		}
		system("cls");
		system("color 2");
		cout<<"\n\n\n\n\n\n";
		cout << "\n\t\t\t\t\t\t\t ------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t\t|                  Hungry Hub                    |" << endl;
		cout << "\t\t\t\t\t\t\t ------------------------------------------------" << endl;
		cout << endl;
		cout<<endl;
		cout << "\t\t\t\t\t\t\t  Tel  : 03-339-31206     Fax   : 013-363-4357" << endl;
		cout << "\t\t\t\t\t\t\t  Till : R3451            Order : M35042627" << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t  Cashier :  TOM" << endl;
		cout << "\t\t\t\t\t\t\t  Shift   :  SHIFT-1" << endl;
		cout << endl;
		cout << "\n\t\t\t\t\t\t\t ------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t\t| Description      Qty     Method      Amount     |" << endl;
		cout << "\t\t\t\t\t\t\t ------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t\t  Food   " << "   	    " <<quantity<< " 	   "<< "cash"<< "      " << total << "	   " << endl;
		cout<<endl;
		cout << "\t\t\t\t\t\t\t  Total "<< "                              " << total<< endl;
		cout << "\t\t\t\t\t\t\t  Cash "<< "                               " << total << endl;
		cout << "\t\t\t\t\t\t\t  Balance "<< "                               0" << endl;
		cout << "\t\t\t\t\t\t\t ------------------------------------------------" << endl;
		write.close();
		
	}
	void show1()
	{
		menu1();
		menu2();
	}
};
class three : public one, public two
{
public:
	void total()
	{
		system("color 80");
		int choice;
		cout<<"\n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t\t|************************************|" << endl;
		cout << "\t\t\t\t\t\t\t|        Welcome to Account Page     |" << endl;
		cout << "\t\t\t\t\t\t\t|************************************|" << endl;

		cout << "\n\n\t\t\t\t\t\t\t1.LOGIN" << endl;
		cout << "\t\t\t\t\t\t\t2.REGISTER" << endl;
		cout << "\n\t\t\t\t\t\t\tEnter your choice :";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			login();
			break;
		case 2:
			registr();
			break;
		default:
			cout << "\n\t\t\t\t\t\t\tYou've made a mistake , give it a try again\n\n\n"<< endl;
			total();
		}
	}

	void login()
	{
		int count;
		string user, pass, u, p;
		system("cls");
		cout << "\n\t\t\t\t\t\t\t ================================================" << endl;
		cout << "\t\t\t\t\t\t\t|                        LOGIN                   |" << endl;
		cout << "\t\t\t\t\t\t\t ================================================" << endl;
		cout << "\n\n\t\t\t\t\t\t\tPlease enter the following details" << endl;
		cout << "\t\t\t\t\t\t\tUSERNAME :";
		cin >> user;
		cout << "\t\t\t\t\t\t\tPASSWORD :";
		cin >> pass;

		ifstream input("database.txt");
		while (input >> u >> p)
		{
			if (u == user && p == pass)

			{
				count = 1;
				system("cls");
			}
		}
		input.close();
		if (count == 1)
		{
			cout << "\n\t\t\t\t\t\t\tHello  " << user << ":) \n\t\t\t\t\t\t\tLOGIN SUCCESS\n\t\t\t\t\t\t\tWe're glad that you're here.\n\t\t\t\t\t\t\tThanks for logging in !\n";
			system("pause");
			show1();
		}
		else
		{
			cout << "\n\t\t\t\t\t\t\tLOGIN ERROR\n\t\t\t\t\t\t\tPlease check your username and password\n";
			total();
		}
	}

	void registr()
	{

		string reguser, regpass, ru, rp;
		system("cls");
		cout << "\n\t\t\t\t\t\t\t ================================================" << endl;
		cout << "\t\t\t\t\t\t\t|                      REGISTER                  |" << endl;
		cout << "\t\t\t\t\t\t\t ================================================" << endl;
		cout << "\n\n\t\t\t\t\t\t\tEnter the username :";
		cin >> reguser;
		cout << "\n\t\t\t\t\t\t\tEnter the password :";
		cin >> regpass;

		ofstream reg("database.txt", ios::app);
		reg << reguser << ' ' << regpass << endl;
		system("cls");
		cout << "\n\t\t\t\t\t\t\tRegistration in process";
		for (int a = 1; a < 8; a++)
		{
			Sleep(150);
			cout << "...";
		}
		cout << "\n\t\t\t\t\t\t\tRegistration Successful\n";
		system("pause");

		login();
	}
};
int main()
{
	system("cls");
	three ob;
	ob.total();
	getch();
	system("cls");
	system("color 	F1");
	
	cout << "\n\n\n\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RATE US \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	char get;
	cout << "\n\n\n\t\t\t\t\t\t Would you like to rate our Food Ordering System (y/n) ?"<< " ";
	cin >> get;
	if (get == 'Y' || get == 'y')
	{
		int n;
		string suggest[100];
		int i = 1;
		cout << "\n\t\t\t\t\t\t Enter rating of our Food Ordering System";
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t";
		cin >> n;
		cout << "\n\t\t\t\t\t\t\t\tRating given is  = " << n << " stars" << endl;
		cout << "\n\n\t\t\t\t\t\t\t";
		while (i <= n)
		{
			cout << "\t "
					" "
				 << "|"
				 << "*"
				 << "|";
			i++;
		}
		if (n <= 3)
		{
			cout << "\n\n\n\t\t\t\t\t\t Whoops, we're sorry! Looks like you caught us on a bad day" << endl;
			cout << "\n\t\t\t\t\t\t Would you like to give some suggestion to improve our system  (y/n)? "<< " ";
			cin >> get;
			cout << "\n\n\n";
			if (get == 'Y' || get == 'y')
			{
				cout << "\n\t\t\t\t\t\t\t ================================================" <<endl;
				cout << "\t\t\t\t\t\t\t|                    Feedback Box                |" << endl;
				cout << "\t\t\t\t\t\t\t ================================================" << endl;
				cout << "\n\t\t\t\t\t\t";
				cin >> suggest[50];
				cout << "\n\n\n\t\t\t\t\t\t Thank you for giving  your valuable time in writing the review \n\n\n";
			}
			else
			{
				cout << "\n\n\n\t\t\t\t\t\t We respect your valuable time :)" << endl<< exit;
			}
		}
		else if (n == 4)
		{
			cout << "\n\n\n\t\t\t\t\t\t Thanks so much for your feedback! We are glad to hear you enjoyed your Food" << endl;
			cout << "\n\t\t\t\t\t\t Would you like to give use Feedback  (y/n)? "<< " ";
			cin >> get;
			cout << "\n\n";
			if (get == 'Y' || get == 'y')
			{
				cout << "\n\t\t\t\t\t\t\t ================================================" << endl;
				cout << "\t\t\t\t\t\t\t|                    Feedback Box                |" << endl;
				cout << "\t\t\t\t\t\t\t ================================================" << endl;
				cout << "\n\t\t\t\t\t\t";
				cin >> suggest[50];
				cout << "\n\n\n\t\t\t\t\t\t Thank you for giving  your valuable time in writing the review \n\n";
			}
			else
			{
				cout << "\n\t\t\t\t\t\t We respect your valuable time :)" << endl<< exit;
			}
		}
		else
		{
			cout << "\n\n\n\t\t\t\t\t\t Thank you so much for taking the time to leave us a " << n << "star rating - it's highly appreciated! " << endl;
			cout << "\n\t\t\t\t\t\t Would you like to give use Feedback  (y/n) ? "<< " ";
			cin >> get;
			cout << "\n\n\n";
			if (get == 'Y' || get == 'y')
			{
				cout << "\n\t\t\t\t\t\t\t ================================================" <<endl;
				cout << "\t\t\t\t\t\t\t|                    Feedback Box                |" << endl;
				cout << "\t\t\t\t\t\t\t ================================================" << endl;
				cout << "\n\t\t\t\t\t\t";
				cout << " ";
				cin >> suggest[50];
				cout << "\n\n\n\t\t\t\t\t\t Thank you for giving  your valuable time in writing the review \n";
			}
			else
			{
				cout << "\n\n\n\t\t\t\t\t\t We respect your valuable time :)" << endl<< exit;
			}
		}
	}
	else
	{
		cout << "\n\t\t\t\t\t\t\t We respect your valuable time :)" << endl;
	}
	cout << "\n\t\t\t\t\t\t\t ----------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t| We hope to see you again soon and bring a friend!  |" << endl;
	cout << "\t\t\t\t\t\t\t ---------------------------------------------------" << endl;
	cout << endl<< endl<< endl;
}