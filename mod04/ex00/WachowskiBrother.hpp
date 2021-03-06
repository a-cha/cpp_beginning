//
// Created by Антон Чапарин on 04.03.2021.
//

	#ifndef EX00_WACHOWSKI_BROTHER_HPP
	#define EX00_WACHOWSKI_BROTHER_HPP

#include "Victim.hpp"

class WachowskiBrother : public Victim
{
public:
	explicit WachowskiBrother(const std::string& name);
	~WachowskiBrother();

	void getPolymorphed() const;
};


	#endif //EX00_WACHOWSKI_BROTHER_HPP
