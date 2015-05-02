#include<iostream>
#include<fstream>
#include<string>
#include"Player.h"
;


int main()
{
	Player player;

	std::string input;
	std::cout << "Type play, load, or exit." << std::endl;
	std::getline(std::cin, input);
	for (char &c : input)
		c = tolower(c);
	system("cls");


	if (input == "play")
	{
		player = loadPlayer(); // Loads the player from SaveFile.txt
		savePlayer(player); // Saves the player to SaveFile.txt

		// STORY GOES HERE! THIS IS A WORK IN PROGRESS!

		system("pause");
		return 0;
	}

	if (input == "exit")
		return 0;

	if (input != "play" && input != "exit") // If user has given invalid input, ask for input again
	{
		std::cout << "Invalid input." << std::endl;
		system("pause");
		system("cls");
		main();
	}

	return 0;
}