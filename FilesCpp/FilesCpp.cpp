//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//std::string buff;
//std::streampos begin, end;
//std::ifstream myfile("e:\\data.ini", std::ios::binary);
//int main() {
//	
//
//	while (getline(myfile, buff)) {
//		std::cout << buff << std::endl;
//	}
//	myfile.clear();
//	myfile.seekg(0);
//	begin = myfile.tellg();
//	std::cout << begin << std::endl;
//	myfile.seekg(0, myfile.end);
//	end = myfile.tellg();
//	std::cout << end << std::endl;
//	std::cout << "size is: " << (end - begin) << " bytes.\n";
//	myfile.close();
//	return 0;
//}


/*  Task 2*/



//#include <iostream>
//#include <fstream>
//#include <string>
//
//class Students {
//public: 
//	Students() {
//
//	}
//	std::string studentID;
//	std::string studentName;
//	class Subjects {
//	public:
//		Subjects() : Math{ "No grade" }, Programming1{ "No grade" }, Modeling{ "No grade" } {
//		}
//		std::string Math;
//		std::string Programming1;
//		std::string Modeling;
//	};
//private:
//	int SocialSecurityID;
//	std::string password;
//};
//
//
//int main() {
//	Students* s1 = new Students();
//	Students::Subjects* sub1 = new Students::Subjects;
//	std::ofstream studentsFile("e:\\students.dat", std::ios::ate);
//	//ask for student's information 
//	std::cout << "what is the studnet ID :";
//	std::cin >> s1->studentID;
//	std::cout << "what is the studnet Name  :";
//	std::cin >> s1->studentName;
//	std::cout << "what is the studnet Math grade  :";
//	std::cin >> sub1->Math;
//	std::cout << "what is the studnet Programming grade  :";
//	std::cin >> sub1->Programming1;
//	std::cout << "what is the studnet 3D modeling grade  :";
//	std::cin >> sub1->Modeling;
//
//	if (studentsFile.good()) {
//		studentsFile << s1->studentID << " " << s1->studentName << " " << sub1->Math << " " << sub1->Programming1 << " " << sub1->Modeling 
//			<< std::endl;
//	}
//
//	std::cout << "File has been created and data's been added !!! " <<std::endl;
//	studentsFile.close();
//	std::cout << "File has been closed !!!" << std::endl;
//
//	return 0;
//}


/*Task 3 */

#include <iostream>
#include <fstream>
#include <string>

int counter{};
std::string tempText;
std::string Keyword{ "he" };

int main() {
	std::string buff;
	std::ifstream storyFile;

	storyFile.open("e:\\storyFiles\\story1.txt"); //std::ios::binary
	while (Keyword != "q") {
		std::cout << " type the word you are looking for : ";
		std::getline(std::cin, Keyword);
		if (Keyword == "q") {
			break;
		}
		while (std::getline(storyFile, buff))
		{
			int found = buff.find(Keyword);

			if (found != std::string::npos) {
				counter++;
			}
		}
		std::cout << Keyword << " has been used in this document: " << counter <<" Times " <<  std::endl;
		storyFile.clear();
		storyFile.seekg(0);
		counter = 0;
	}
	storyFile.close();


	return 0;
}