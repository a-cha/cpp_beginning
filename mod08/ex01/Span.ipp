
template<class InputIterator>
void Span::addNumber(InputIterator first, InputIterator last) {
	std::list<int> tmp;

	tmp.insert(tmp.begin(), first, last);
	tmp.sort();
	tmp.unique();
	if (tmp.size() + getSize() > maxLen)
		throw ArrayIsFull();
	list.insert(list.end(), tmp.begin(), tmp.end());
}
