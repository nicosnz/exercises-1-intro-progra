
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
  double D = (B * B) - (4 * A * C);

    
    if (A==0 && B==0){

    } else if (A == 0){
        cout << -C/B << endl;

    } else if (B == 0){
        cout << sqrt(-C/A)<< endl;
    } else if (D < 0){

    } else if (D >= 0) {
        double sqrt_D = sqrt(D);
        double x1 = (-B + sqrt_D) / (2 * A);
        double x2 = (-B - sqrt_D) / (2 * A);
        
        if (x1 == x2){
            cout << x1 << endl;
        } else {
            cout << x1 << " " << x2 << endl;
        }
    }
  
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b==0)
    {
       cout<<"Impossible"<<endl;
    }
    
    else{

        int c,d,e=0;
        c=a;
        d=b;
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
    if (isupper(character))
      cout << "upper-case alphabet" << endl;
    else if (islower(character))
      cout << "lower-case alphabet" << endl;
    else
      cout << "not an alphabet" << endl;
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
      if(seconds >= 0){
        int horas = seconds / 3600;
        int segundos_2 = seconds % 3600;
        int minutos = segundos_2 / 60;
        int segundos_finales = segundos_2 % 60;

        string horas_ = to_string(horas);
        string minutos_ = to_string(minutos);
        string segundos_finales_ = to_string(segundos_finales);

        int horas_size = horas_.size();
        int minutos_size = minutos_.size();
        int segundos_finales_size = segundos_finales_.size();

        if(horas_size < 2){
            cout << "0" << horas << ":";
        } else {
            cout << horas << ":";
        }
        if(minutos_size < 2){
            cout << "0" << minutos << ":";
        } else {
            cout << minutos << ":";
        }
        if(segundos_finales_size < 2){
            cout << "0" << segundos_finales << endl;
        } else{
            cout << segundos_finales << endl;
        }

    } else if(seconds < 0){
        cout << "Error: Input seconds cannot be negative." << endl;
    }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
    char s1_ = s1 [0];
    char s2_ = s2 [0];
    char s3_ = s3 [0];
    char s4_ = s4 [0];
    char s5_ = s5 [0];

    string result_;

        if(s1_ == s5_){
            result_ = "Hemos encontrado algo!";

        } else {
            result_ = "Aun sin suerte";
        }
    string result1 = string(1, s1_) + string(1, s2_) + string(1, s3_) + string(1, s4_) + string(1, s5_);
    cout << result1 << endl;
    return result_;

}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  if (a < 0 || b < 0)
    return 0;
  int suma= a + b, digitos=0;
  while (suma > 0) {
    suma /= 10;
    digitos++;
  }
  return digitos * (a + b);
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
if(color4== "?" && numb1==numb4|| numb4==-1 && color1==color4|| color1==color4 && numb1==numb4){
  cout << 1 << endl;
}

if(color4== "?" && numb2==numb4|| numb4==-1 && color2==color4|| color2==color4 && numb2==numb4){
  cout << 2 << endl;
}

if(color4== "?" && numb3==numb4|| numb4==-1 && color3==color4|| color3==color4 && numb3==numb4){
  cout << 3 << endl;
}

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
    if (number_of_docs < 0){
        return "No se encontraron documentos";
    }else if (number_of_docs == 0) {
        return "No se encontraron documentos";
    } else if (number_of_docs == 1) {
        return "Se encontro un documento";
    } else {
        return to_string(number_of_docs) + " documentos encontrados";
}
  
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  int aux,aux2;
  cout<<"Los valores son: a = "<<a<<" b = "<<b<< " y c = "<<c<<endl;
  
  //intercambios variables
  aux=a;
  aux2=b;
  a=c;
  b=aux;
  c=aux2;

  cout<<"Permutamos: a => b, b => c, c => a"<<endl;
  cout<<"Los valores despues de la permutacion son: a = "<<a<< " b = "<<b<< " c = "<<c<<endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
  if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return;
    }if (debut == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return;
    }if (debut > fin) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return;
    }
    int costo_total = 0;
    int tiempo_transcurrido = debut;
    int rango_hora_1 = 0;
    int rango_hora_2 = 0;

    while (tiempo_transcurrido < fin) {
        if ((tiempo_transcurrido >= 0 && tiempo_transcurrido < 7) || (tiempo_transcurrido >= 17 && tiempo_transcurrido <= 24)) {
            rango_hora_1++;
        } else {
            rango_hora_2++;
        }
        tiempo_transcurrido++;
    }

    cout << "Haz alquilado una bicicleta por" << endl;

    if (rango_hora_1 > 0) {
        cout << rango_hora_1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
        costo_total += rango_hora_1;
    }if (rango_hora_2 > 0) {
        cout << rango_hora_2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
        costo_total += rango_hora_2 * 2;
    }

    cout << "El monto total a pagar es de " << costo_total << " boliviano(s)."<<endl;
}
 