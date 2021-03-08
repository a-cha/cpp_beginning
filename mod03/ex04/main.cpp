#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include "print.hpp"

int main()
{
	std::cout << BOLD "Parent Clap creating...\n" STD;
	ClapTrap parent;
	std::cout << BOLD "Frag creating...\n" STD;
	FragTrap robo("Bringer of death");
	std::cout << BOLD "Scav creating...\n" STD;
	ScavTrap robo1("Cutie");
	std::cout << BOLD "Ninja creating...\n" STD;
	NinjaTrap ninja("Samurai");
	std::cout << BOLD "Super creating...\n" STD;
	SuperTrap super("Awesome");
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
	robo1.takeDamage(70);
	robo1.beRepaired(30);
	std::cout << BOLD "That's enough for me... It's time ot meet Ninja!\n" STD;
	ninja.ninjaShoebox(parent);
	ninja.ninjaShoebox(robo);
	ninja.ninjaShoebox(robo1);
	ninja.ninjaShoebox(ninja);
	std::cout << BOLD "Yes, he is not so dangerous.\n" STD;
	super.ninjaShoebox(robo);
	super.vaulthunter_dot_exe(target);
	std::cout << BOLD "In contrast to his (semi)child.\n" STD;

	return 0;
}
