#include <iostream>
#include <cstddef>
#include <cstring>

using namespace std;

struct String {

    String(const char* str = "");
    String(size_t n, char c);
    ~String();

    void append(String& other);

    size_t size;
    char* str;
};

String::String(const char* str)
{
    this->size = strlen(str);

    this->str = new char[size + 1];

    for (size_t i = 0; i < this->size + 1; i++)
    {
        this->str[i] = str[i];
    }

    this->str[size] = '\0';

    cout << "Constructor: " << this << endl;
}

String::String(size_t n, char c)
{
    this->size = n;
    str = new char[size + 1];

    for (size_t i = 0; i < n; ++i)
    {
        str[i] = c;
    }
    str[size] = '\0';

}

String::~String()
{
    cout << this->str << endl;
    delete str;

    cout << "Destructor:  " << this << endl;
}

void String::append(String& other)
{
    char* tmp = new char[this->size];
    for (size_t i = 0; i < this->size; i++)
    {
        tmp[i] = this->str[i];
    }

    delete[] str;
    str = new char[this->size + other.size + 1];
    size_t i = 0;
    for (; i < this->size; i++)
    {
        this->str[i] = tmp[i];
    }
    for (size_t j = 0; j < other.size; j++, i++)
    {
        this->str[i] = other.str[j];
    }
    this->str[this->size + other.size] = '\0';
    this->size = this->size + other.size;

    delete[] tmp;
}

int main() 
{
    char s[] = { 'A', 'b', 'c', 'd', '\0' };

    String str(s);
    String str2("efgh");

    str.append(str2);

    return 0; 
} 