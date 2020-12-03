#pragma once
#include <string>
class SoccerPlayer {
private:
	std::string name;
	std::string surname;
	unsigned int assists;
	unsigned int goals;
public:
	SoccerPlayer();
	SoccerPlayer(std::string, std::string, unsigned int, unsigned int);
	void setName(std::string);
	void setSurame(std::string);
	void setGoals(unsigned int);
	void setAssists(unsigned int);
	std::string getName();
	std::string getSurame();
	unsigned int getGoals();
	unsigned int getGoals();
	void print();
	void addGoals(unsigned int);
	void addAssists(unsigned int);
};