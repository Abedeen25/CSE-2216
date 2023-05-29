//
// Created by iftek on 5/29/2023.
//

//// The following main function shows way of taking values in and out of the console
//#include<iostream>
//
//using namespace std;
//
//int main(){
//    cout << "Give me an integer : ";
//    int the_input_intger;
//    cin >> the_input_intger;
//    cout << endl << "You have entered " << the_input_intger;
//    return 0;
//}

//// The following main function shows basic mathematical operations
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    double fahrenheit, celsius;
//    cout << "Please enter the value in Fahrenheit : ";
//    cin >> fahrenheit;
//    celsius = ((fahrenheit - 32) * 5)/9;
//    cout << "The value in Celsius is : " << celsius;
//    return 0;
//}

//// The following main function shows mathematical operation with cmath library and use of const variable
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//    double area, radius;
//    const double pi = 3.1416;
//    cout << "Please provide the radius : ";
//    cin >> radius;
//
//    cout << pi * pow(radius, 2);
//    return 0;
//}

//// The following main function shows type casting
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    char a = 'a';
//    bool a4 = true;
//    cout << (int) a4;
//    return 0;
//}

//// The following main function shows use of n base numbers
//#include<iostream>
//
//using namespace std;
//int main (){
//    int n_number = 0b11111111; // the number is taken as binary
//    cout << n_number << endl ; // should print 255
//    n_number = 0XFF; // the number is taken as hexadecimal (note, the characters can be both uppercase or lowercase here. e.g. FF == ff)
//    cout << n_number << endl; // should also print 255
//    n_number = 077; // leading zero means the number is octal
//    cout << n_number; // should print 63
//    return 0;
//}