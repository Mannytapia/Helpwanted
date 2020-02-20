#include <iostream>
#include <fstream>
int main()
{
  std::string input;

  std::cout << "Welcome to Tuffy Scheduler!" << std::endl;
  std::cout << "Please enter the file name containing the list of classes: ";
  std::cin >> input;

  //Checks for valid file input
  if (input!= "sched.txt")
  {
    std::cout << "Invalid File." << std::endl;
    std::cout << "Thank you for using Tuffy Scheduler." << std::endl;
    return 1;
  } else
    {
      std::cout << "Valid File." << std::endl;
    }

  //not sure what to do with this
  std::ofstream output_file;
  output_file.open ("sched.txt");
  output_file << "Hello World.\n";
  output_file.close();

  std::cout << "Thank you for using Tuffy Scheduler." << std::endl;
}
