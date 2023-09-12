//--------------------- Simple Project To Lear Structure Topic ---------------------

#include <iostream>
using namespace std;

// Math Processes
void sum();
void sub();
void mult();
void div();
void mod();
void math_inputProcesses(struct math_processes math_input);

// String Processes
void add_nams();
void compare_names();
void string_inputProcesses(struct string_processes string_input);

// Structures

struct math_processes{
  // Math Atributes

  float first_num;
  float second_num;
  int math_choice;

// Math Functions

  void sum()
  {
    cout<<"-------------------------------------------------- \n";
    cout<<" The Result of "
    << first_num << " + " << second_num << " = "
    <<first_num + second_num <<"                         \n";
    cout<<"-------------------------------------------------- \n";
  }

  void sub()
  {
    cout<<"-------------------------------------------------- \n";
    cout<<" The Result of "
    << first_num << " - " << second_num << " = "
    <<first_num - second_num <<"                        \n";
    cout<<"-------------------------------------------------- \n";
  }

  void mult()
  {
    cout<<"-------------------------------------------------- \n";
    cout<<" The Result of "
    << first_num << " * " << second_num << " = "
    <<first_num * second_num <<"                        \n";
    cout<<"-------------------------------------------------- \n";
  }

  void div()
  {
    cout<<"-------------------------------------------------- \n";
    cout<<" The Result of "
    << first_num << " / " << second_num << " = "
    <<first_num / second_num <<"                        \n";
    cout<<"-------------------------------------------------- \n";
  }

  void mod()
  {
    cout<<"-------------------------------------------------- \n";
    cout<<" The Result of "
    << first_num << " % " << second_num << " = "
    <<(int)first_num % (int)second_num <<"                         \n";
    cout<<"-------------------------------------------------- \n";
  }

};

struct string_processes{
  // String Atributes

  string firstName;
  string secondName;
  int string_choice;

// String Functions

  void add_nams()
  {
    cout<<"-------------------------------------------------- \n";
    cout<<" The Total Name is: "<<firstName + " " + secondName<<"                         \n";
    cout<<"-------------------------------------------------- \n";
  }
  
  void compare_names()
  {
    if (firstName.length() == secondName.length())
    {
      if (firstName == secondName)
      {
        cout<<"-------------------------------------------------- \n";
        cout<<" The Two Names are the same                         \n";
        cout<<"-------------------------------------------------- \n";
      }
      else
      {
        for (int i=0;i<firstName.length();i++)
        {
          if (firstName[i] != secondName[i])
          {
            cout<<"-------------------------------------------------- \n";
            cout<<" The " << i+1 << " Character is different they are "<<"( "
            << firstName[i] << " != "<< secondName[i] << " )"<<"   \n";
            cout<<"-------------------------------------------------- \n";
          }
        }
      }
    }
    else 
    {
      cout<<"-------------------------------------------------- \n";
      cout<<" The Two Names are not the same 😞                  \n";
      cout<<"-------------------------------------------------- \n";
    }
  }
};


// Main function

int main()
{
  struct math_processes first_mathUsage;
  struct string_processes first_stringUsage;
  int main_choice;

  do
  {
    valid_Num:
    cout<<"======== Welcome to the simple calculator ======== \n";
    cout<<"-------------------------------------------------- \n";
    cout<<" Enter The Mode You Want :                          \n";
    cout<<" 1- Math Processes                                  \n";
    cout<<" 2- String Processes                                \n";
    cout<<" 3- Exit                                            \n";
    cout<<"-------------------------------------------------- \n";
    cout<<"================================================== \n";

    cout<<" -------------------------------------------------- \n";
    cin>>main_choice;
    cout<<" -------------------------------------------------- \n";

    switch(main_choice)
    {
      case 1:
        math_inputProcesses(first_mathUsage);
        break;
      case 2:
        string_inputProcesses(first_stringUsage);
        break;
      case 3:
        break;
      default :
        cout<<" Enter A Valid number                               \n";
        goto valid_Num;

    }
  } while (main_choice != 3);

  return 0;
}

// User functions

void math_inputProcesses(struct math_processes math_input)
{
  there:
  cout<<"-------------------------------------------------- \n";
  cout<<" Enter The first Number :                   ";
  cin>>math_input.first_num;
  cout<<" Enter The second Number :                  ";
  cin>>math_input.second_num;
  cout<<"-------------------------------------------------- \n";

  do
    {
    input_place:
    cout<<"-------------------------------------------------- \n";
    cout<<" Enter The Operations You wnat:                     \n"
        <<" 1- Summation                                       \n"
        <<" 2 -subtraction                                     \n"
        <<" 3- Multiplaction                                   \n"
        <<" 4- Division                                        \n"
        <<" 5- Modelus                                         \n"
        <<" 6- Enter New Numbers                               \n"
        <<" 7- Return to main page                             \n";
    cout<<"-------------------------------------------------- \n";
    cin>>math_input.math_choice;

    switch (math_input.math_choice)
    {
      case 1:
        math_input.sum();
        break;
      case 2:
        math_input.sub();
        break;
      case 3:
        math_input.mult();
        break;
      case 4:
        math_input.div();
        break;
      case 5:
        math_input.mod();
        break;
      case 6:
        goto there;
        break;
      case 7:
      break;
      default :
      cout<<" Enter A Valid number                               \n";
      goto input_place;
      break;
    }
  } while (math_input.math_choice != 7);

}

void string_inputProcesses(struct string_processes string_input)
{
  another_input:
  cout<<"-------------------------------------------------- \n";
  cout<<" Enter The first Name                         ";
  cin>>string_input.firstName;
  cout<<" Enter The second Name                        ";
  cin>>string_input.secondName;
  cout<<"-------------------------------------------------- \n";

  do
  {
    invalid_number:
    cout<<"-------------------------------------------------- \n";
    cout<<" Enter The Operations You wnat:                     \n"
        <<" 1- Add the two names                               \n"
        <<" 2- Compare the tow names                           \n"
        <<" 3- Enter New Names                                 \n"
        <<" 4- Return To the main page                         \n";
    cout<<"-------------------------------------------------- \n";

    cout<<"-------------------------------------------------- \n";
    cin>>string_input.string_choice;
    cout<<"-------------------------------------------------- \n";

    switch (string_input.string_choice)
    {
      case 1:
        string_input.add_nams();
        break;
      case 2:
        string_input.compare_names();
        break;
      case 3:
      goto another_input;
        break;
      case 4:
        break;
      default :
        cout<<" Enter A Valid number                               \n";
        goto invalid_number;
        break;
    }
  } while (string_input.string_choice != 4);
}