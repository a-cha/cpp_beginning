//
// Created by Skipjack Adolph on 3/22/21.
//

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return std::begin(this->c);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return std::end(this->c);
}
