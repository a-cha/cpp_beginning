#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "print.hpp"

int main()
{
	FragTrap robo("Bringer of death");
	ScavTrap robo1("Cutie");
	std::string target("Sucker");

	std::cout << BOLD "It's time to battle of the century!\n" << STD;
	robo.meleeAttack(target);
	robo.rangedAttack(target);
	robo.vaulthunter_dot_exe(target);
	robo.takeDamage(50);
	robo.vaulthunter_dot_exe(target);
	robo.takeDamage(70);
	robo.beRepaired(60);
	robo.vaulthunter_dot_exe(target);
	robo.vaulthunter_dot_exe(target);
	robo.vaulthunter_dot_exe(target);
	std::cout << BOLD "Ohh... That was good\n"
	"Now you have to move forward to the door and face with the next opponent\n" << STD;
	robo1.meleeAttack(target);
	robo1.rangedAttack(target);
	robo1.challengeNewcomer(target);
	robo1.takeDamage(50);
	robo1.challengeNewcomer(target);
	robo1.takeDamage(70);
	robo1.beRepaired(30);
	robo1.challengeNewcomer(target);
	std::cout << BOLD "That's enough for me... Bye =)\n";
	return 0;
}
