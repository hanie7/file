#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s = "";
	while(true)
	{
		cout << "Dear participant, Welcome *_^ \n";
		cout << "1.Choose file \n";
		cout << "2.Update file \n";
		cout << "3.Show file \n";
		cout << "Your choise : ";
		int option;
		cin >> option;
		cout << "\n";
		switch(option)
		{
			cout << option << "\n";
			case 1 :
				{
					cout << "Enter file name : ";
					cin >> s;
					s += ".txt";
					ifstream open(s, ios :: in);
					if(!open)
					{
						ofstream write(s, ios :: out);
						write.close();
						open.close();
						cout << "File \"" << s.substr(0, s.size() - 4) << "\" created successfully .. ";
						
					}
					cout << "\n\n";
					
				}break;
				
				case 2 :
					{
						if(s != "")
						{
							ofstream write(s, ios :: app);
							for(int i = 1; i <= 100; i++)
								write << i << "\n";
							write.close();
						}
						cout << "File \"" << s.substr(0, s.size() - 4) << "\" updated successfully .. \n\n";
						
					}break;
				
				case 3:
					{
						cout << "File \"" << s.substr(0, s.size() - 4) << "\" informations : \n";
						ifstream read (s, ios :: in);
						int dig;
						while(read >> dig )
						{
							cout << dig << '\n';
						}
						cout << "\n\n";
					}break;
				
				default : cout << "Wrong option ... \n\n";
		}
	}
}
