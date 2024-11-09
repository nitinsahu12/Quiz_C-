#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
using namespace std;
atomic<bool> timeUp(false);
void totalTimeCountdown(int seconds) {
    for (int remainingTime=seconds;remainingTime>=0&&!timeUp;--remainingTime){
        cout<<"\rTotal time remaining: " << remainingTime <<" seconds " << flush;
        this_thread::sleep_for(1s);
    }
    if (!timeUp) {
        cout<<"\nTotal quiz time's up!" <<endl;
        timeUp=true;
    }
}

int main() {
    int totalTimeLimit=4*60;
    thread timerThread(totalTimeCountdown,totalTimeLimit);

    char a='a',b='b',c='c',d='d';
    char ans;
    int correctcount=0;

    cout << "          *******************   Welcome to G.K. quiz  ***************" << endl;
    cout <<endl;
	q1:
    cout << "1. In what year did the Great October Socialist Revolution take place ?" << endl;
    cout << " a.1917\n b.1923\n c.1914\n d.1920" << endl;
    cin >>ans;

    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }

    if (a == ans) {
        cout << "correct" << endl;
        correctcount++;
    } else if ((ans == b) || (ans == c) || (ans == d)) {
        cout << "Incorrect" << endl;
    } else {
        cout << "press a or b or c or d" << endl;
        goto q1;
        timerThread.join();
        
    }
    cout << endl;
	q2:
    cout << "2. What is the largest lake in the world?" << endl;
    cout << " a.Caspian Sea\n b.Baikal\n c.Lake Superior\n d.Ontario" << endl;
    cin >> ans;

    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }

    if (a == ans) {
        cout << "correct" << endl;
        correctcount++;
    } else if ((ans == b) || (ans == c) || (ans == d)) {
        cout << "Incorrect" << endl;
    } else {
        cout << "press a or b or c or d" << endl;
        goto q2;
        timerThread.join();
        
    }
    cout << endl;
    q3:
    cout<<"3.Which planet in the solar system is known as the “Red Planet”?"<<endl;
    cout<<" a.Venus\n b.Earth\n c.Mars\n d.Jupiter"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (c==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==b)||(ans==a) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q3;
		timerThread.join();
		
	}
	cout<<endl;
	q4:
	cout<<"4.Who wrote the novel “War and Peace”"<<endl;
    cout<<" a.Anton Chekhov\n b.Fyodor Dostoevsky\n c.Leo Tolstoy\n d.Ivan Turgenev"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (c==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==b)||(ans==a) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q4;
		timerThread.join();
		
	}
	cout<<endl;
	q5:
	cout<<"5.What is the capital of Japan?"<<endl;
    cout<<" a.Beijing\n b.Tokyo \n c.Seoul\n d.Bangkok"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (b==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==a)||(ans==c) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q5;
		timerThread.join();
		
	}
	cout<<endl;
	q6:
	cout<<"6.Which river is the longest in the world?"<<endl;
    cout<<" a.Amazon\n b.Mississippi\n c.Nile\n d.Yangtze"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (c==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==b)||(ans==a) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q6;
		timerThread.join();
		
	}
	cout<<endl;
	q7:
	cout<<"7.What gas is used to extinguish fires?"<<endl;
    cout<<" a.Oxygen\n b.Nitrogen \n c.Carbon dioxide\n d.Hydrogen"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (c==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==a)||(ans==b) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q7;
		timerThread.join();
		
	}
	cout<<endl;
	q8:
	cout<<"8.What animal is the national symbol of Australia?"<<endl;
    cout<<" a.Kangaroo\n b.Koala \n c.Emu\n d.Crocodile"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (a==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==b)||(ans==c) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q8;
		timerThread.join();
		
	}
	cout<<endl;
	q9:
	cout<<"9.Which of the following planets is not a gas giant?"<<endl;
    cout<<" a.Mars\n b.Jupiter \n c.Saturn\n d.Uranus"<<endl;
    cin>>ans;
    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (a==ans)
	{
		cout<<"correct"<<endl;
		correctcount++;
	}
	else if((ans==b)||(ans==c) || (ans==d))
	{
		cout<<"Incorrect"<<endl;
	}	
	else 
	{
		cout<<"press a  or  b  or  c  or  d"<<endl;
		goto q9;
		timerThread.join();
	}
	cout<<endl;
	q10:
    cout << "10. What is the name of the process by which plants convert sunlight into energy?" << endl;
    cout << " a.Respiration\n b.Photosynthesis\n c.Oxidation\n d.Evolution" << endl;
    cin >> ans;

    if (timeUp) {
        cout << "Time has expired! Ending quiz." << endl;
        timerThread.join();
        return 0;
    }
    if (b == ans) {
        cout << "correct" << endl;
        correctcount++;
    } else if ((ans == a) || (ans == c) || (ans == d)) {
        cout << "Incorrect" << endl;
    } else {
        cout << "press a or b or c or d" << endl;
        goto q10;
        timerThread.join();
    }
    cout << endl;
    cout << "You got " << correctcount << " correct answers out of 10 questions" << endl;
    cout << "********** THANK YOU ***********" << endl;
    timeUp = true;  
    timerThread.join();
    return 0;
}
