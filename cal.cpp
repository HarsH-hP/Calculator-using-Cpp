#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
class stand_calc{
    public:
        static double addition(double,double);
        static double subtract(double,double);
        static double multiplication(double,double);
        static double division(double,double*);
        static int modulo(int*,int*);
};

class sci_calc{
    public:
        static double square(double);
        static double cube(double);
        static double power(double,double);
        static double sq_rt(double);
        static long int fact(int);
        static double sin_fun(double);
        static double cos_fun(double);
        static double tan_fun(double);
};

double stand_calc::addition(double a, double b){
    return(a+b);
}

double stand_calc::subtract(double a,double b){
    return(a-b);
}

double stand_calc::multiplication(double a,double b){
    return(a*b);
}

double stand_calc::division(double a,double *b){
    while(*b==0){
        cout<<"\nEnter divisor other than 0.";
        cin>>*b;
    }
    return(a/(*b));
}

int stand_calc::modulo(int *a,int *b){
    while(*b==0){
        cout<<"\nEnter divisor other than 0.";
        cin>>*b;
    }
    return((*a)%(*b));
}

double sci_calc::square(double a){
    return(pow(a,2));
}

double sci_calc::cube(double a){
    return(pow(a,3));
}

double sci_calc::power(double a,double b){
    return(pow(a,b));
}

double sci_calc::sq_rt(double a){
    return(sqrt(a));
}

long int sci_calc::fact(int a){
    long int fact=1;
    while(a>1){
        fact*=a;
        a--;
    }
    return(fact);
}

double sci_calc::sin_fun(double a){
    return(sin(a));
}

double sci_calc::cos_fun(double a){
    return(cos(a));
}

double sci_calc::tan_fun(double a){
    return(tan(a));
}

int main(){
    int num3,num4,calchoice,stancal_choice,scical_choice;
    double num1,num2;
    do{
            cout<<"------Type of Calculator------\n";
            cout<<"\t 1: Standard Calculator.\n\t 2: Scientific Calculator.\n\t 3: Quit.\n\n";
            cout<<"Choose the type of Calculator: ";
            cin>>calchoice;
            switch(calchoice){
                case 1:
                    do{
                        cout<<"------Standard Calculator------\n";
                        cout<<"\t 1: Addition.\n\t 2: Subtraction.\n\t 3: Multiplication.\n\t 4: Division.\n\t 5: Modulo.\n\t 6: Return to previous Menu.";
                        cout<<"\n\t 7:Quit Program.\n";
                        cout<<"Enter your choice: ";
                        cin>>stancal_choice;
                        switch(stancal_choice){
                            case 1:
                                cout<<"Enter 1st number: ";
                                cin>>num1;
                                cout<<"Enter 2nd number: ";
                                cin>>num2;
                                cout<<stand_calc::addition(num1,num2)<<endl;
                                break;
                            case 2:
                                cout<<"Enter 1st number: ";
                                cin>>num1;
                                cout<<"Enter 2nd number: ";
                                cin>>num2;
                                cout<<stand_calc::subtract(num1,num2)<<endl;
                                break;
                            case 3:
                                cout<<"Enter 1st number: ";
                                cin>>num1;
                                cout<<"Enter 2nd number: ";
                                cin>>num2;
                                cout<<stand_calc::multiplication(num1,num2)<<endl;
                                break;
                            case 4:
                                cout<<"Enter 1st number: ";
                                cin>>num1;
                                cout<<"Enter 2nd number: ";
                                cin>>num2;
                                cout<<stand_calc::division(num1,&num2)<<endl;
                                break;
                            case 5:
                                cout<<"Enter 1st number: ";
                                cin>>num3;
                                cout<<"Enter 2nd number: ";
                                cin>>num4;
                                cout<<stand_calc::modulo(&num3,&num4)<<endl;
                                break;
                            case 6:
                                break;
                            case 7:
                                exit(0);
                            default:
                                cout<<"Invalid Choice."<<endl;
                                break;
                        }
                    }while(stancal_choice!=6);
                    break;

                case 2:
                    do{
                        cout<<"------Scientific Calculator------\n";
                        cout<<"\t 1: Square.\n\t 2: Cube.\n\t 3: Power.\n\t 4: Square Root.\n\t 5: Factorial.\n\t 6: Sine.\n\t 7: Cosine.\n\t 8: Tan.";
                        cout<<"\n\t 9: Return to previous Menu.\n\t 10: Quit Program.\n";
                        cout<"Enter your choice: ";
                        cin>>scical_choice;
                        switch(scical_choice){
                            case 1:
                                cout<<"Enter the number to square: ";
                                cin>>num1;
                                cout<<sci_calc::square(num1)<<endl;
                                break;
                            case 2:
                                cout<<"Enter the number to cube: ";
                                cin>>num1;
                                cout<<sci_calc::cube(num1)<<endl;
                                break;
                            case 3:
                                cout<<"Enter the number: ";
                                cin>>num1;
                                cout<<"Enter power value: ";
                                cin>>num2;
                                cout<<sci_calc::power(num1,num2)<<endl;
                                break;
                            case 4:
                                cout<<"Enter the number for square root: ";
                                cin>>num1;
                                cout<<sci_calc::sq_rt(num1)<<endl;
                                break;
                            case 5:
                                cout<<"Enter the number to find its factorial: ";
                                cin>>num3;
                                cout<<sci_calc::fact(num3)<<endl;
                                break;
                            case 6:
                                cout<<"Enter the number to find its sin: ";
                                cin>>num1;
                                cout<<sci_calc::sin_fun(num1)<<endl;
                                break;
                            case 7:
                                cout<<"Enter the number to find its cos: ";
                                cin>>num1;
                                cout<<sci_calc::cos_fun(num1)<<endl;
                                break;
                            case 8:
                                cout<<"Enter the number to find its tan: ";
                                cin>>num1;
                                cout<<sci_calc::tan_fun(num1)<<endl;
                                break;
                            case 9:
                                break;
                            case 10:
                                exit(0);
                            default:
                                cout<<"Invalid Input."<<endl;
                                break;
                        }
                    }while(scical_choice!=9);
                    break;

                case 3:
                    break;

            }

    }while(calchoice!=3);
    exit(0);
    return 0;
}
