#include <iostream>
#include <string>


//class Point {
//	int x;
//	int y;
//
//public:
//
//	Point()
//	{
//		std::cout << "Default constructor\t" << this << "\n";
//		this->x = 0;
//		this->y = 0;
//	}
//
//	Point(int x, int y)
//	{
//		std::cout << "Constructor " << this << "\n";
//		this->x = x;
//		this->y = y;
//	}
//
//	Point(const Point& other)
//	{
//		this->x = other.x;
//		this->y = other.y;
//
//		std::cout << "Copy constructor " << this <<  std::endl;
//	}
//
//	~Point()
//	{
//		std::cout << "X = " << x << "\tY = " << y << "\n";
//		std::cout << "Destructor " << this << "\n";
//	}
//
//	bool operator == (const Point& other)
//	{
//		return x == other.x && y == other.y;
//	}
//
//	bool operator != (const Point& other)
//	{
//		return !(x == other.x && y == other.y);
//	}
//
//	Point operator + (const Point& other)
//	{
//		Point temp;
//
//		temp.x = this->x + other.x;
//		temp.y = this->y + other.y;
//
//		return temp;
//	}
//
//	Point & operator ++()		//prefix
//	{
//		this->x++;
//		this->y++;
//
//		return *this;
//	}
//
//	Point& operator ++(int value)		//postfix
//	{
//		Point temp(*this);
//
//		this->x++;
//		this->y++;
//
//		return temp;
//	}
//
//	Point& operator --()		//prefix
//	{
//		this->x--;
//		this->y--;
//
//		return *this;
//	}
//
//	Point& operator --(int value)		//postfix
//	{
//		Point temp(*this);
//
//		this->x--;
//		this->y--;
//
//		return temp;
//	}
//
//	int getX() {
//		return x;
//	}
//
//	void setX(int x) {
//		this->x = x;
//	}
//
//	void print()
//	{
//		std::cout << "x = " << x << "  y = " << y << std::endl;
//	}
//
//	friend void changeX(Point& value, Test& testValue);
//};
//
//class Test
//{
//private:
//	int data = 0;
//
//	friend void changeX(Point& value, Test& testValue);
//};
//
//void changeX(Point& value, Test& testValue)
//{
//	value.x = -1;
//	testValue.data = 100;
//}

//class MyClass
//{
//private:
//	int size;
//
//public:
//	int* data;
//
//	MyClass(int size)
//	{
//		this->data = new int[size];
//		this->size = size;
//
//		for (int i = 0; i < size; i++)
//		{
//			data[i] = i;
//		}
//
//		std::cout << "Constructor \t" << this << std::endl;
//	}
//
//	MyClass(const MyClass& other)
//	{
//
//		this->size = other.size;
//
//		this->data = new int[other.size];
//
//		for (int i = 0; i < other.size; i++)
//		{
//			this->data[i] = other.data[i];
//		}
//
//		std::cout << "Copy constructor \t" << this << std::endl;
//	}
//
//	~MyClass()
//	{
//		std::cout << "Destructor \t" << this << std::endl;
//		delete[] data;
//	}
//
//	MyClass & operator = (const MyClass& other)
//	{
//		std::cout << "Operator = \t" << this << std::endl;
//
//		this->size = other.size;
//
//		if (this->data != nullptr)
//		{
//			delete[] this->data;
//			this->data = nullptr;
//		}
//
//		this->data = new int[other.size];
//
//		for (int i = 0; i < other.size; i++)
//		{
//			this->data[i] = other.data[i];
//		}
//
//		return *this;
//	}
//
//	int& operator[](int index)
//	{
//		return data[index];
//	}
//
//	void get_data()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			std::cout << this->data[i] << " ";
//		}
//
//		std::cout << std::endl;
//	}
//}; 

//class Apple
//{
//private:
//    int weight;
//    std::string color;
//	static int count;
//	int id;
//
//public:
//    Apple(int weight, std::string color)
//    {
//        this->weight = weight;
//        this->color = color;
//		  id = count++;
//    }
//
//	int get_id()
//	{
//		return id;
//	}
//
//	static int get_count()
//	{
//		return count;
//	}
//};
//
//int Apple::count = 0;

//class Pixel
//{
//public:
//
//	Pixel()
//	{
//		r = g = b = 0;
//	}
//
//	Pixel(int r, int g, int b)
//	{
//		this->r = r;
//		this->g = g;
//		this->b = b;
//	}
//
//	std::string getInfo()
//	{
//		return "R = " + std::to_string(r) + "  G = " + std::to_string(g) + "  B = " + std::to_string(b);
//	}
//
//private:
//
//	int r;
//	int g;
//	int b;
//};

//class Image
//{
//public:
//
//	void getImgInfo()
//	{
//		for (int i = 0; i < length; i++)
//		{
//			std::cout << "#" << i << " " << pixels[i].getInfo() << std::endl;
//		}
//	}
//
//private:
//
//	static const int length = 5;
//
//	Pixel pixels[length]
//	{
//		Pixel(12, 21, 44),
//		Pixel(234, 11, 13),
//		Pixel(12, 2, 94),
//		Pixel(12, 21, 44),
//		Pixel(0, 69, 37)
//	};
//};

//-----------------------------

/*class Cap
{
public:
	std::string get_color()
	{
		return color;
	}

private:
	std::string color = "red";
};*/

/*class Mannequin
{
public:
	void inspect_mannequin()
	{
		std::cout << "Cap is " << cap.get_color() << std::endl;
	}
private:
	Cap cap;
};*/


//-----------------------------virtual methods

//class Weapon
//{
//public:
//    virtual void shoot() = 0;
//    void foo()
//    {
//        std::cout << "foo()" << std::endl;
//    }
//};
//
//class Gun : public Weapon
//{
//public:
//    void shoot() override
//    {
//        std::cout << "BANG!" << std::endl;
//    }
//};
//
//class Submachinegun : public Gun
//{
//public:
//    void shoot() override
//    {
//        std::cout << "BANG! BANG! BNAG!" << std::endl;
//    }
//};
//
//class Bazooka : public Weapon
//{
//public:
//    void shoot() override
//    {
//        std::cout << "BADABUB!" << std::endl;
//    }
//};
//
//class Knife : public Weapon
//{
//public:
//    void shoot() override
//    {
//        std::cout << "VJUH!!!" << std::endl;
//    }
//};
//
//class Player
//{
//public:
//    void shoot(Weapon* weapon)
//    {
//        weapon->shoot();
//   }
//
//};

//class Human
//{
//public:
//
//	Human(std::string name)  
//	{
//		this->name = name;
//		this->age = 0;
//		this->weight = 0;
//	}
//	Human(std::string name, int age) :Human(name)
//	{
//		this->age = age;
//	}
//	Human(std::string name, int age, int weight) :Human(name, age)
//	{
//		this->weight = weight;
//	}
//
//
//	std::string name;
//	int age;
//	int weight;
//
//};


//class Msg
//{
//public:
//	Msg(std::string msg)
//	{
//		this->msg = msg;
//	}
//
//	virtual std::string getMsg()
//	{
//		return msg;
//	}
//
//private:
//	std::string msg;
//
//};
//
//class BraketsMsg : public Msg
//{
//public:
//	BraketsMsg(std::string msg) : Msg(msg)
//	{
//
//	}
//	std::string getMsg() override
//	{
//		return "[" + ::Msg::getMsg() + "]";
//	}
//};
//
//class Printer
//{
//public:
//	void print(Msg* msg)
//	{
//		std::cout << msg->getMsg() << std::endl;
//	}
//};

//class Car
//{
//public:
//	Car()
//	{
//		std::cout << "Called constructor Car!" << std::endl;
//	}
//	~Car()
//	{
//		std::cout << "Called destructor Car!" << std::endl;
//	}
//
//	void use()
//	{
//		std::cout << "I'm going!" << std::endl;
//	}
//};
//
//class Airplane
//{
//public:
//	Airplane()
//	{
//		std::cout << "Called constructor Airplane!" << std::endl;
//	}
//	~Airplane()
//	{
//		std::cout << "Called destructor Airplane!" << std::endl;
//	}
//
//	void use()
//	{
//		std::cout << "I'm flying!" << std::endl;
//	}
//};
//
//class FlyingCar : public Airplane, public Car
//{
//public:
//	FlyingCar()
//	{
//		std::cout << "Called constructor FlyingCar!" << std::endl;
//	}
//	~FlyingCar()
//	{
//		std::cout << "Called destructor FlyingCar!" << std::endl;
//	}
//};

//-----------------------------interface

/*class IBicycle
{
public:
    virtual void twistTheWheel() = 0;
    virtual void ride() = 0;
};

class SimpleBicycle : public IBicycle
{
public:
    void twistTheWheel() override
    {
        std::cout << "Method twistTheWheel() SimpleBicycle" << std::endl;
    }
    void ride() override
    {
        std::cout << "Method ride() SimpleBicycle" << std::endl;
    }
};

class SportBicycle : public IBicycle
{
public:
    void twistTheWheel() override
    {
        std::cout << "Method twistTheWheel() SportBicycle" << std::endl;
    }
    void ride() override
    {
        std::cout << "Method ride() SportBicycle" << std::endl;
    }
};

class Human
{
public:
    void rideOn(IBicycle &bicycle)
    {
        std::cout << "Twist the wheel" << std::endl;
        bicycle.twistTheWheel();
        std::cout << "Ride!" << std::endl;
        bicycle.ride();
    }

};*/

//-----------------------------Чисто виртуальный деструктор 

/*class A
{
public:
    A()
    {
    }

    virtual ~A() = 0;
};

A::~A()
{

}

class B : public A
{
public:
    B()
    {
    }

    ~B() override
    {
    }
};*/

//-----------------------------Multiple inheritance

//class Component
//{
//public:
//	Component(std::string companyName)
//	{
//		std::cout << "Constructor Component" << std::endl;
//		this->companyName = companyName;
//	}
//	std::string companyName;
//};
//
//class GPU : public Component
//{
//public:
//	GPU(std::string companyName) : Component(companyName)
//	{
//		std::cout << "Constructor GPU" << std::endl;
//	}
//};
//
//class Memory : public Component
//{
//public:
//	Memory(std::string companyName) : Component(companyName)
//	{
//		std::cout << "Constructor Memory" << std::endl;
//	}
//};
//
//class GraphicCard : public GPU, public Memory
//{
//public:
//	GraphicCard(std::string GPUCompanyName, std::string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
//	{
//		std::cout << "Constructor GrapchicCard" << std::endl;
//	}
//};


//-----------------------------Virtual inheritance

//class Character
//{
//public:
//	Character()
//	{
//		std::cout << "Constructor Character" << std::endl;
//	}
//	int HP;
//};
//
//class Orc : public virtual Character
//{
//public:
//	Orc()
//	{
//		std::cout << "Constructor Orc" << std::endl;
//	}
//};
//
//class Warrior : public virtual Character
//{
//public:
//	Warrior()
//	{
//		std::cout << "Constructor Warrior" << std::endl;
//	}
//};
//
//class OrcWarrior : public Orc, public Warrior
//{
//public:
//	OrcWarrior()
//	{
//		std::cout << "Constructor OrcWarrior" << std::endl;
//	}
//};


//-----------------------------ENUM

/*class PC
{
public:
    
    enum PCState
    {
        OFF,
        ON,
        SLEEP
    };

    PCState get_state()
    {
        return state;
    }

    void set_state(PCState state)
    {
        this->state = state;
    }

private:
    PCState state;

};

enum Speed                          //Speed::MIN
{
    MIN = 150,
    RECOMEND = 600,
    MAX = 800
};*/

//-----------------------------namespace

//namespace firstNS
//{
//    void foo()
//    {
//        std::cout << "First NS" << std::endl;
//    }
//}
//
//namespace secondNS
//{
//    void foo()
//    {
//        std::cout << "Second NS" << std::endl;
//    }
//}
//
//namespace thirdNS
//{
//    namespace secondNS
//    {
//        void foo()
//        {
//            std::cout << "Third NS" << std::endl;
//        }
//    }
//}


//----------------------------- Class Templates inheritance     $include <typeinfo>

/*
class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    int x;
    int y;
    int z;
};

template<typename T1>
class TypeSize
{
public:

    TypeSize(T1 value)
    {
        this->value = value;
    }

    void DataTypeSize()
    {
        std::cout << sizeof(value) << std::endl;
    }

protected:
    T1 value;
};

template<typename T1>
class TypeInfo : public TypeSize<T1>
{
public:
    TypeInfo(T1 value) : TypeSize<T1>(value)
    {

    }

    void ShowTypeName()
    {
        std::cout << typeid(this->value).name() << std::endl;
    }

};
*/


//----------------------------- Class template specialization

/*template<typename T>
class Printer
{
public:
    void print(T value)
    {
        std::cout << value << std::endl;
    }
};

template<>
class Printer<std::string>
{
public:
    void print(std::string value)
    {
        std::cout << "___" << value << "___" << std::endl;
    }
};*/


//-----------------------------Structure 

/*struct User
{

    User(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    ~User()
    {
        std::cout << a << " " << b << std::endl;
    }

private:
    int a;
    int b;
};*/

//----------------------------- Smart Pointers

/*template<typename T>
class SmartPointer
{
public:
    SmartPointer(T* ptr)
    {
        this->ptr = ptr;
        std::cout << "Constructor" << std::endl;

    }

    ~SmartPointer()
    {
        delete ptr;
        std::cout << "Destructor" << std::endl;
    }

    T& operator* ()
    {
        return *ptr;
    }

private:
    T *ptr;
};*/

//----------------------------- auto_ptr | unique_ptr | shared_ptr      #include <memory>

/*template<typename T>
class SmartPointer
{
public:
    SmartPointer(T *ptr)
    {
        this->ptr = ptr;
        count++;
        std::cout << "Constructor" << std::endl;
    }

    ~SmartPointer()
    {
        if (count == 1)
        {
            delete ptr;
        }
        count--;
        std::cout << "Destructor" << std::endl;
    }

    T& operator*()
    {
        return *ptr;
    }

private:
    T *ptr;
    static int count;
};

template<typename T>
int SmartPointer<T>::count = 0;*/


/*int main()
{
    int size = 5;

    std::shared_ptr<int> ptr(new int[size] {1, 2, 6, 12, 21});

    for (int i = 0; i < size; i++)
    {
        ptr.get()[i] = rand() % 10;
        std::cout << ptr.get()[i] << " ";
    }

    return 0;
}*/


int main() 
{



    return 0; 
} 