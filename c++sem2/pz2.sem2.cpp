//Завдання 1

#include <iostream>
using namespace std;
class ShopItemOrder {
public:
	string name;
	double price;
	double quan;
	ShopItemOrder(string setName, double setPrice, int setQuan) {
		set(setName, setPrice, setQuan);
	}
	void set(string setName, double setPrice, int setQuan) {
		name = setName;
		price = setPrice;
		quan = setQuan;
	}
	void get() {
		cout << "Name: " << this->name << endl;
		cout << "Price: " << this->price << endl;
		cout << "Quantity: " << this->quan << endl;
	}
	double fullPrice() {
		return price * quan;
	}
	void print() {
		cout << "Goods " + this->name << ", quantity: " << this->quan << ", price for 1 " << this->price << "$, all price " << fullPrice() << "$.";
	}
};
int main() {
	ShopItemOrder obj("Bread", 40, 12);
	obj.name = "Pen";
	obj.price = 10;
	obj.quan = 10;
	obj.get();
	obj.fullPrice();
	obj.print();
}

//Завдання 2

#include <iostream>
using namespace std;
class FlightBooking {
public:
	FlightBooking(int id, int capacity, int reserved);
	void printStatus();
private:
	int id;
	int capacity;
	int reserved;
};
void FlightBooking::printStatus()
{
	cout << "Flight" << id << " : " << reserved + "/" << capacity << " (" << double(reserved) / capacity * 100 << "%) seats reserved" << '\n';
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	this->id = id;
	this->capacity = capacity;
	this->reserved = reserved;
}

int main() {
	int reserved = 0,
		capacity = 0;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	booking.printStatus();
	return 0;
}