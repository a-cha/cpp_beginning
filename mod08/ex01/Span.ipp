
template<class InputIterator>
void Span::addNumber(InputIterator first, InputIterator last) {
	list.insert(list.end(), first, last);
	list.unique();
}
