#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	////---------------------------------------------------------
	//std::string str1;
	//str1.reserve(25);
	//cout << "str1.size(): " << str1.size() << endl;
	//cout << "str1.capacity(): " << str1.capacity() << endl;
	//str1.shrink_to_fit();
	//cout << "str1.capacity(): " << str1.capacity() << endl;
	//str1 = "01234567890123456789";
	//cout << str1 << endl;
	//cout << "str1.shrink_to_fit()" << endl; str1.shrink_to_fit();
	//cout << "str1.capacity(): " << str1.capacity() << endl;
	//cout << "str1[7]: " << str1[7] << endl;
	////cout << "str1[8]: " << str1[8] << endl;
	//cout << "str1.size(): " << str1.size() << endl;

	////---------------------------------------------------------
	//cout << endl;
	//std::string str2("string2");
	//cout << str2 << endl;
	//cout << "str2.size(): " << str2.size() << endl;
	//cout << "str2.capacity(): " << str2.capacity() << endl;
	//
	////---------------------------------------------------------
	//cout << endl;
	//std::string str3 = "string3";
	//str1 = str3;
	//str3 += str2;
	//cout << "str1: " << str1 << endl;
	//cout << "str3: " << str3 << endl;

	////---------------------------------------------------------
	//cout << endl;
	//std::string str4("4");
	//int i = 11;
	////std::string str4(static_cast<char>(i));		// error
	//cout << "str4: " << str4 << endl;

	////---------------------------------------------------------
	//cout << endl;
	//std::string str5 = "0123456789012345";
	//cout << "str5.capacity(): " << str5.capacity() << endl;
	//cout << "str5[15]: " << str5[15] << endl;
	//cout << "str5: "				<< str5 << endl;
	//str5 = "01234";
	//cout << "str5: " << str5 << endl;
	////cout << "str5[10]: " << str5[10] << endl;		// error

	////---------------------------------------------------------
	//cout << endl;
	////std::string str6(static_cast<std::string>(i));
	//cout << static_cast<std::string>("1234").size() << endl;
	////cout << ("1234").size() << endl;		// error
	//cout << std::string("1234").size() << endl;

	//std::string str6(std::to_string(i));
	//cout << "str6: " << str6 << endl;

	std::string str7("012345678901234");
	cout << "str7.capacity(): " << str7.capacity() << endl;

	//cout << "str7[14]: " << (str7[14] == NULL ? "NULL" : (std::string)str7[14]) << endl;		// error
	cout << "str7[14]: " << (str7[14] == NULL ? "NULL" : std::to_string(str7[14])) << endl;		//? wierd result
	//cout << "str7[14]: " << (str7[14] == NULL ? "NULL" : (const char *)(str7[14])) << endl;	//? debug error
	cout << "str7[15]: " << (str7[15] == NULL ? "NULL" : std::to_string(str7[15])) << endl;

	return 0;
}