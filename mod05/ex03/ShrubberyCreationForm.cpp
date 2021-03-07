//
// Created by Антон Чапарин on 06.03.2021.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
 * This define created for CLion's CMake
 * Change the lines below while using program in terminal by Makefile
*/
//#define CURRENT_DIR "/Users/antoncaparin/21/cpp_module/mod05/ex02/"
#define CURRENT_DIR ""

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
		AForm("ShrubberyCreationForm", 145, 137),
		target(target)
{ }

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::ofstream file(CURRENT_DIR + target + "_shrubbery");
	if (!file)
		throw ShrubberyCreationForm::ErrorCreateFileException();
	file << "`  `` ```  `  `  `    `  `` ``  `  .`.::.`  `  `  `  `` ``  `" << std::endl;
	file << "`  `  `  `    `` `` ``  `..`.````-:+sssys++o.``  `  `  `  `  `" << std::endl;
	file << "`  `      `  `  `  ``..`::-:-:oyshhssyssyyhhddyo/yy-.`  `  `      `  `" << std::endl;
	file << "`  `  ``  `  ` `.:/+syh+/o+oyydNddmddddhddhhhddmmho/-`  `  `  `   `  `" << std::endl;
	file << "`   `  `  ` .-:+os+sy/ssyyyhddhdhy+ohyhhs+y+sydmh+so.``  `  `  `  `" << std::endl;
	file << "` `  ``  ``:yhys+///+:+yyyddmdddddhddhmmdhdmmmhsydy/`  `  `  `` ``  `" << std::endl;
	file << "          ./yhhyysyhddy/:+yhhoshdydddddmmmmmdmmmhs/:." << std::endl;
	file << "`  `  `:sdhdhysoyddhyhmmdddhhdNNNNNmmNmdydNNdhyshhyo.-::`  `  `  `" << std::endl;
	file << "`  `` ``/dmmNNdsssosymddddhdmmmmNdNNmhss/shyyyhmdydhhhhdys-`` `` ``  `" << std::endl;
	file << "`  ` .ohdNNmhhmmddmNmhhhmmmNNNdMNhhmdhos:/hdmyhdyddhhhss+` `  `  `" << std::endl;
	file << "`  `.-o/+hydddmmmmss:o++sosysyyNy:yhdmmmmhhyhddos:+hdmmmmo.`  `  `" << std::endl;
	file << "`  ``/hhhyhyddhyyhymmyo: `` `` odh.`:hhysyohs.--+hh-.oydNNNd. `` ``  `" << std::endl;
	file << "`  `.-:ohso/:../+/o+-://+-  `-my.oysoy:-odhs://hhyo....:y:``  `  `" << std::endl;
	file << "`  ```.-:/```` .``... ` `///--dmo`:o/-.+yh/+:..:o++--`  `  `  `  `" << std::endl;
	file << "`  `` `` ``  `  `  `  `  `  ``.:dm`` `` .-//.```  `  `` `  `` `` ``  `" << std::endl;
	file << "`  `  `  `  `  `  ``    `  `  ` hh  `  `  `` `  ``  `  `  `  `  `  `" << std::endl;
	file << "`     `      `           `      `dy      `       `      `       `     `" << std::endl;
	file << "`  `  ``  `  `  `  `   `  `  `  :ms``  `  `  `  `  `  `  `  `  `` ``  `" << std::endl;
	file << "`  `  `  `  `  `` ``    ``  `  `ods  `  `  `  `` `` ``  `  `  `  `  `" << std::endl;
	file << "`  `      `  `  `  `  `  `  `  ody`   `  `  `  `  `  `  `  `      `  `" << std::endl;
	file << "`  `  ``  `  `  `  `  `  `  ` .ddm+`  `  `  `  `  `  `  `  `      `  `" << std::endl;
	file << "`  `  `  `  `  `` ``  ``  ` `smmdh-`  `  `  `` `` ``  `  `  `  `  `" << std::endl;
	file << "`  `  ``  `  `  ``  `  ````/NNmmmmyo.  `  `  `  `  `  `  `  ``  `  `" << std::endl;
	file << "`  `  ``  `  `  `  `  `  ``            `  `  `  `  `  `  `  `  `  `  `" << std::endl;
	file.close();
}

AForm *ShrubberyCreationForm::newForm(const std::string & t) const
{
	return new ShrubberyCreationForm(t);
}

const char *ShrubberyCreationForm::ErrorCreateFileException::what() const throw()
{
	return "Unable create file for ShrubberyCreationForm execute";
}
