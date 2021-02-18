#include "FragTrap.hpp"
#include "print.hpp"

int main()
{
	FragTrap robo("Bringer of death");
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
	std::cout << BOLD "Ohh... That was good\n" << STD;
	return 0;
}
