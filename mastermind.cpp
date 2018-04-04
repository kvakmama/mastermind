#include <iostream>
using namespace std;

void game_loop()
{
	string colors;
	string race_colors = "1234";
	string check = "";

	int i;
	int j;
	for (i=0; i<2; i++ )
	{
		cout << "kerem a szineket" << endl;
		cin >> colors; 

	
		for (j = 0; j < colors.size(); j++)
		{	
			if (colors[j] == race_colors[j])
			{
				check = check + "g";
			}
			else
			{
				check = check + "b";
			}
		
		}
		cout << check << endl;
		check = "";
	}
}

int main()
{
	game_loop();
}
