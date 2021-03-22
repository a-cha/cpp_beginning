
template<class InputIterator>
void Span::addNumber(InputIterator first, InputIterator last) {
	if (getSize() + (last - first) > maxLen)
		throw ArrayIsFull();
	list.insert(list.end(), first, last);
}
