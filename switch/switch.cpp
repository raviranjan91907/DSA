#include<bits/stdc++.h>
using namespace std;


//switch statement
void basicSwitch(int num){
      switch(num){
        case 1:
            cout<<"you have enter the number: "<<num;
            break;
        case 2:
            cout<<"you have enter the nubmer: "<<num;
            break;
        default:
            cout<<"this is the default case";
    }
}

 //exit statment in the switch statement for coming the out the infinite loop
void switchWithLoop(int num){
    while(true){
    switch(num){
        case 1:
            cout<<"the value of num is"<<num<<endl;
                break;
        case 2:
            cout<<"the value of num is"<<num<<endl;
                exit(1);
        default:
            cout<<"no case match";
    }
    num++;
    }
    cout<<"out side the loop";
}

//write a program that give you how many 100 rs, 50 rs ,20 rs ,10 rs and 1 rs coin is needed for the give amount using switch 
void splitamountintoCion(int amount){
    int i=1;
    while(amount>0){
        switch(i){
            case 1:
                cout<<"100 rs needed "<<amount/100<<endl;
                switch(amount>100){
                    case true:
                        amount/=100;
                        break;
                }
                break;
            case 2:
                cout<<"50rs needed "<<amount/50<<endl;
                switch(amount>50){
                    case true:
                        amount-=(amount/50)*50;
                        break;
                }
                break;
            case 3:
                cout<<"20rs needed "<<amount/20<<endl;
                switch(amount>20){
                    case true:
                        amount-=(amount/20)*20;
                        break;
                }
                break;
            case 4:
                cout<<"10rs needed "<<amount/10<<endl;
                switch(amount>10){
                    case true:
                        amount-=(amount/10)*10;
                        break;
                }
                break;
            default:
                cout<<"1 rs needed "<<amount<<endl;
                amount-=amount;
        }
        i++;
    }
}

int main(){
    // int num;
    // cin>>num;
    cout<<"Enter the amount"<<endl;
    int amount;
    cin>>amount;
    splitamountintoCion(amount);


}