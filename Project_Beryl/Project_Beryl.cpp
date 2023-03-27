#include <iostream>

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
		this->size_ = other.size_;
		this->data_ = new int[size_];
		for (size_t i = 0; i < size_; i++)
		{
			this->data_[i] = other.data_[i];
		}
	}

	void print()
	{
		for (size_t i = 0; i < size_; i++)
		{
			cout << this->data_[i] << " ";
		}
		cout << endl;
	}

private:
	int size_;
	int* data_;
};

int main() 
{
	IntArray a1(20);
	a1.print();

	IntArray a2;
	a2 = a1;
	a2.print();

    return 0; 
} 