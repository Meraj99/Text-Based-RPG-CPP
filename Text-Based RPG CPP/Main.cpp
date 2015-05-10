#include <iostream>
#include <fstream>
#include <string>
#include "Player.h"
#include "Enemy.h"
#include "Story.h"
#include "Battle.h"
#include "CLS.h"
;


int main()
{
	bool invalidInput;
	do
	{
		Player player;

		std::string input;
		std::cout << "Type play, load, or exit." << std::endl;
		getline(std::cin, input);
		for (char &c : input)
			c = tolower(c);
		cls();


		if (input == "play")
		{
			savePlayer(player);

			story(player);

			// STORY GOES HERE! THIS IS A WORK IN PROGRESS!
			std::cout << "Press enter to continue..." << std::endl;
			getchar();
			return 0;
		}
		else if (input == "load")
		{
			player = loadPlayer(); // Loads the player from SaveFile.txt
			savePlayer(player); // Saves the player to SaveFile.txt

			story(player);

			return 0;
		}
		else if (input == "exit")
			return 0;
		else // If user has given invalid input, ask for input again
		{
			std::cout << "Invalid input." << std::endl;
			invalidInput = true;
			std::cout << "Press enter to continue..." << std::endl;
			getchar();
			cls();
		}
	} while (invalidInput);

	return 0;
}