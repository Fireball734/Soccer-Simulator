//Initial Program - Fireball's Soccer Simulator Version 0.0.0

#include <iostream>
#include <random>

const std::string TEAM_1 = "USA";

const std::string TEAM_2 = "CAN";

const int ELO_1 = 1762;

const int ELO_2 = 1706;

const int LOWER_BOUND = 0;

const std::string INTRO = "Welcome to Fireball's Soccer Simulator Version 0.0.0";

const std::string HOME_TEAM_WIN = "USA Wins!";

const std::string AWAY_TEAM_WIN = "Canada Wins!";

const std::string DRAW = "It's a Draw.";

int main()
{
	int upperBound = ELO_1 + ELO_2;

	std::random_device resultMaker;

	std::mt19937 gen(resultMaker());

	std::uniform_int_distribution<> dis(LOWER_BOUND, upperBound);

	std::cout << INTRO << std::endl << std::endl;


	int result = dis(gen);


	if (result == ELO_1)
	{
		std::cout << DRAW;
	}
	else
	{
		std::cout << (result > ELO_1 ? HOME_TEAM_WIN : AWAY_TEAM_WIN);
	}
}