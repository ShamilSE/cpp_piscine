template <typename T>
Array<T>::Array(): _n(0) {
	_data = new T[_n];
}

template <typename T>
Array<T>::Array(size_t n): _n(n) {
	_data = new T[_n];
	for (size_t i = 0; i < _n; i++)
		_data[i] = 0;
	// Array<T>::iter(Array<T>::nullify);
}

template <typename T>
Array<T>::Array(const Array<T>& other) {*this = other;}

template <typename T>
Array<T> &Array<T>::operator=(const Array & other) {
	_n = other._n;
	if (this != &other) {
		delete _data;
		_data = new T[_n];
		for (size_t i = 0; i < _n; i++)
			_data[i] = other._data[i];
	}
	return *this;
}

template <typename T>
const char* Array<T>::IndexOutOfRange::what() const throw() {
	return "index out of range";
}

template <typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= _n)
		throw IndexOutOfRange();
	return _data[index];
}

template <typename T>
Array<T>::~Array() {delete _data;}

template <typename T>
void	Array<T>::nullify(T el) {el = 0;}

template <typename T>
void	Array<T>::iter(void(a)(T&)) {
	for (size_t i = 0; i < _n; i++)
		a(_data[i]);
}


template <typename T>
size_t	Array<T>::size() const {return _n;}
template <typename T>
T*		Array<T>::getData() const {return _data;}