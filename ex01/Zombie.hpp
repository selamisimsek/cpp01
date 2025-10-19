#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie{
	private:
		std::string zombieName;

	public:
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
};

#endif