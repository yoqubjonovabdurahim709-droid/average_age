// Calculater for average age 
#include <iostream>
#include <string>
using namespace std;

int main (){
    cout << "----------  Average Age ----------  " << endl;

    int sum = 0, count = 0, age;
    double average;
  do {
    cout << "Enter your age" << endl;
    cin >> age;

    if (age == -1){
      break ;

    }else if (age < 0 ) {
      cout << "Invalid age ! Please try again" << endl;

    }else{
      sum = sum + age;
      count = count + 1;
    }

    
  }while (age != - 1);

  if(count == 0){
    cout << "No valid entered ages" << endl;
  }else{
     average = static_cast<double>(sum) / count;
    cout << "Average age = " << average << endl;
  } 
  

  }

        
     
     










