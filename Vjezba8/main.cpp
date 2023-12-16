#include "Enemy.hpp"
#include "Boss.hpp"
#include "Monster.hpp"
#include<vector>
#include<string>

int main() {
	std::vector<Enemy*> neprijatelji;
	//std::string monsterName = "Zmaj";
	//std::string bossName = "Gladijator";

	try {
		neprijatelji.push_back(new Boss("Gladijator", 100, 50, "koplje"));
		neprijatelji.push_back(new Monster("Zmaj", 500, 120, "vatra"));

		for (Enemy* neprijatelj : neprijatelji) {
			neprijatelj->attack();
			neprijatelj->displayInfo();
		}

		for (Enemy* neprijatelj : neprijatelji) {
			delete(neprijatelj);
		}
	}

	catch(std::invalid_argument& e){
		std::cout << e.what() << std::endl;
		return -1;
	}
}