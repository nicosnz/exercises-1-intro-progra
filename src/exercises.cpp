
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string count_short_char;
  if (s1 < s2 && s1 < s3) {
    count_short_char = s1;
    cout << count_short_char;
  }
  else if (s2 < s1 && s2 < s3){
    count_short_char = s2;
    cout << count_short_char;
    }
  else if (s3 < s1 && s3 < s2) {
    count_short_char = s3;
    cout << count_short_char;
  }
  else {
    cout<<s1;
  }

}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b==0)
    {
       cout<<"Impossible"<<endl;
    }
    
    else{

        int c,d,e=0;
        c=int(a);
        d=int(b);
        e=c/d;
        
        cout<<e<<endl;
    }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  double precio,precio2;
  if(n>a && n>b){
    precio2=n-(n*y)/(100.00);
    cout<<precio2<<endl;
  }
  
 
  else if(n>a){
    precio=n-(n*x)/(100.00);
    cout<<precio<<endl;
  }
  else{
   cout<<n<<endl;
  }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
   switch (number){
    case 1:cout<<"Monday"<<endl;break;
    case 2:cout<<"Tuesday"<<endl;break;
    case 3:cout<<"Wednesday"<<endl;break;
    case 4:cout<<"Thursday"<<endl;break;
    case 5:cout<<"Friday"<<endl;break;
    case 6:cout<<"Saturday"<<endl;break;
    case 7:cout<<"Sunday"<<endl;break;
    default:cout<<"Invalid input"<<endl;break;
}
}
void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  double area;
  
    if (r>=0){
    area=4*3.14*pow(r,2);
    cout<<area<<endl;
      } 
    else {
    cout << "Error: Radius cannot be negative."<<endl;
      }
}
void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  if (number==11235813){
    return "Se encontro a Fibonacci";

  }
  else{
    return "Esto no es de Fibonacci";
  }
  
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
    if(age>=18 && years_of_experience>=5){
      return "Senior project manager";
    }
    else if(age>=18 && years_of_experience>=3){
      return "Project manager";
    }
    else if(age>=18){
      return "Project coordinator";
    }
    else{
      return "Not eligible";
    }
  
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  int aux;
  cout<<"Los valores son; a = "<<a<< "b = "<<b<< "y c = "<<c<<endl;
  
  //intercambios variables
  aux=a;
  a = b;
  b = c;
  c=aux;
  cout<<"Permutamos: a => b, b => c, c => a"
  cout<<"Los valores despues de la permutacion son; a = "<<a<< "b = "<<b<< "y c = "<<c<<endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}