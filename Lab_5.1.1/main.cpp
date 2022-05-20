#include <iostream>
#include <string>
using namespace std;



/// Laboratory 5.1.1
class Person
{
private:
	string name;
	int age;
	string job;
public:

	Person(string name, int age, string job) {
		this->name = name;
		this->age = age;
		this->job = job;
	}

	Person() {
		name = "No information";
		age = 0;
		job = "No information";
	}

	string getName() {
		return this->name;
	}

	int getAge() {
		return this->age;
	}

	string getJob() {
		return this->job;
	}
};
void print(Person* person)
{
	cout << "Meet " << person->getName() << endl;
	cout << person->getName() << " is " << person->getAge() << " years old" << " his job is " << person->getJob() << endl;
}

int main()
{
	Person person("Harry", 23, "Doctor");
	print(&person);
	// Your code here
	cout << "\n";
	Person anonim;
	print(&anonim);


	return 0;
}