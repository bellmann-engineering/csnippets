#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream textfile;
	textfile.open("meinetextdatei.txt", ios::out);
	if(!textfile)
		cerr << "Datei konnte nicht angelegt werden" << endl;
	else
	{
		textfile << "Erste Zeile" << endl << "Zweite Zeile" << endl;
		textfile.close();
	}
	
	string line;
	ifstream readtextfile("meinetextdatei.txt");
	if(readtextfile.is_open())
	{
		while(getline(readtextfile, line))
		{
			cout << line << endl;			
		}
		readtextfile.close();
	}
	else
	{
		cerr << "Datei konnte nicht geöffnet werden" << endl;
	}
	
	return 0;
}