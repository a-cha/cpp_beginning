
template<class Generator>
void Span::addNumber(size_t amounth, Generator randNum) {
	if (getSize() + amounth > maxLen)
		throw ArrayIsFull();

	std::list<int>::iterator end = --list.end();
	list.insert(list.end(), amounth, 0);
	std::generate(++end, list.end(), randNum);
}
