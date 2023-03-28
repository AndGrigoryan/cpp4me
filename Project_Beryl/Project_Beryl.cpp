#include <iostream>
#include <algorithm>
using namespace std;

struct IntArray
{
	IntArray() : size_(0), data_(nullptr)
	{
		cout << "Default constructor: " << this << endl;
	}
	
	IntArray(int size) : size_(size), data_(new int[size_])
	{
		for (size_t i = 0; i < size_; i++)
		{
			this->data_[i] = i + 1;
		}
		cout << "Constructor: " << this << endl;
	}

	~IntArray()
	{
		delete[] data_;
		cout << "Destructor: " << this << endl;
	}

	IntArray(IntArray const& other) : size_(other.size_), data_(new int[size_])
	{
		for (size_t i = 0; i < size_; i++)
		{
			this->data_[i] = other.data_[i];
		}

		cout << "Copy constructor: " << this << endl;
	}

	IntArray& operator =(IntArray const& other)
	{
		if(this != &other){
			if(&other != this)
			{
				IntArray(other).swap(*this);
			}
			return *this;
		}

		cout << "Operator: " << this << endl;

		return *this;
	}

	void swap(IntArray& other)
	{
		std::swap(this->size_, other.size_);
		std::swap(this->data_, other.data_);
	}

	int& operator [](int index)
	{
		return this->data_[index];
	}

	size_t  size() const
	{
		return size_;
	}

private:
	size_t size_;
	int* data_;
};

int main() 
{
	IntArray a1(14);

	for (size_t i = 0; i < a1.size(); i++)
	{
		cout << a1[i] << " ";
	}
	cout << endl;
	
    return 0; 
} 