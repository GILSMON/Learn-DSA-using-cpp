#include <iostream>
using namespace std;

// Stack using an array
class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1; // denoted the index of stack
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;

        else
            return false;
    }

    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }
    void push(int val) {
        if(isFull()){
            cout <<"stackoverflow"<<endl;;
        }
        else{
            top++;
            arr[top]= val;
        }
    }
    int pop() {
        if(isEmpty()) {
            cout<<"stackunderflow"<<endl;;
            return 0;
        }
        else {
            int popval = arr[top];
            arr[top] = 0;
            top--;
            return popval;
        }
    }
    int count(){
        return (top+1);     // no of elements
    }
    int peek(int pos) {
        if (isEmpty()){
             cout<<"stackunderflow"<<endl;;
        } 
        else 
            return arr[pos];
    } 
    void change(int pos, int val) {
        arr[pos] = val;
        cout << "value changed at "<< pos<<endl;;
    }
    void display() {
        cout <<"value from top to bottom is "<<endl;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }

};

int main()
{

    Stack s1;
    int option,position,value;
    
            
    do{
     cout<< "choose operation, press 0 to exit"<<endl;
        cout<<"1 -> push() \n 2 -> pop()  \n 3 -> isEmpty  \n 4 -> isFull()  \n"
        "5 ->  peek() \n 6 -> count() \n 7 -> change()   \n"
        "8 -> display() \n 9 -> Clear screen "<<endl;

        cin>> option;
        switch (option) {
            case 1:
                cout<< "enter the value to push"<<endl;
                cin>> value;
                s1.push(value);
                break;

            case 2:
                cout<< "the value at the top is " <<s1.pop()<<endl;
                 break;
            case 3:
                if(s1.isEmpty())
                    cout<<"stack is empty "<<endl;
                else 
                    cout<<"stack is not empty" <<endl;
                break;   
            case 4:
                if(s1.isFull())
                    cout<<"stack is full "<<endl;
                else 
                    cout<<"stack is not full" <<endl;

                break;
            case 5:
                cout << "enter a peek position"<<endl;
                cin>>position;
                cout<<"value at "<< position<<" is "<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"total cout is "<<s1.count()<<endl;
                break;
            case 7:
                cout << "enter positon ansd value to change \n";
                cin>>position>>value;
                s1.change(position,value);
                break;
            case 8:
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"enter a proper number"<<endl;
                
        }



    }while(option!=0);

    return 0;
}