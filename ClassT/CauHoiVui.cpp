#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Question
{
	public:
		virtual void readFromfile(ifstream &fileInput) =0;
		virtual void printQuestion() =0;
		virtual bool getAnswer() =0;
};


class MultipleQuestion: public Question
{
	private:
		string question,choice[4];
		char correctAnswer;
	public:
		void readFromfile(ifstream &fileinput)
		{
			getline(fileinput,question);
			for (int i = 0; i < 4; ++i)
			{
				getline(fileinput,choice[i]);
			}
			fileinput>>correctAnswer;
		}

		void printQuestion()
		{
			cout<<question<<endl;
			for (int i = 0; i < 4; ++i)
			{
				char label='A'+i;
				cout<<label<<": "<<choice[i]<<endl;
			}
		}

		bool getAnswer()
		{
			char answer;
			cin>>answer;
			if (answer==correctAnswer)
			{
				cout<<"Cau tra loi dung"<<endl;
				return true;
			}
			else
			{
				cout<<"Cau tra loi sai, Cau tr loi dung la : "<<correctAnswer<<endl;
				return false;
			}
		}
};

class TrueFalse: public Question
{
	private:
		string question;
		char correctAnswer;
	public:
		void readFromfile(ifstream &fileinput)
		{
			getline(fileinput,question);
			fileinput>>correctAnswer;
		}

		void printQuestion()
		{
			cout<<question<<"(T/F)"<<endl;
		}

		bool getAnswer()
		{
			char answer;
			cin>>answer;
			if (answer==correctAnswer)
			{
				cout<<"Cau tra loi dung"<<endl;
				return true;
			}
			else
			{
				cout<<"Cau tra loi sai, Cau tr loi dung la : "<<correctAnswer<<endl;
				return false;
			}
		}

};

class NumberQuestion: public Question
{
	private:
		string question;
		int correctAnswer;
	public:
		void readFromfile(ifstream &fileinput)
		{
			getline(fileinput,question);
			fileinput>>correctAnswer;
		}

		void printQuestion()
		{
			cout<<question<<"(Cau tr loi la 1 con so)"<<endl;
		}

	bool getAnswer()
		{
			int answer;
			cin>>answer;
			if (answer==correctAnswer)
			{
				cout<<"Cau tra loi dung"<<endl;
				return true;
			}
			else
			{
				cout<<"Cau tra loi sai, Cau tr loi dung la : "<<correctAnswer<<endl;
				return false;
			}
		}	
};
char filename[1000];
int n, correctQuestion = 0;
Question *allQuestion[100];

int main()
{
	cout << "Hay nhap file cau hoi: ";
    cin >> filename;
	
	ifstream fileinput;
	fileinput.open(filename);
	
	fileinput>>n;

	for (int i = 0; i <= n; ++i)
	{
		char questionType;
		fileinput >> questionType;

		string temp;
		getline(fileinput,temp);  //D?n d?p d? xu?ng dòng

		if (questionType=='M')
		{
			allQuestion[i] = new MultipleQuestion;
		}

		if (questionType='T')
		{
			allQuestion[i] = new TrueFalse;
		}

		if (questionType=='N')
		{
			allQuestion[i]== new NumberQuestion;
		}
		allQuestion[i]->readFromfile(fileinput);
	}

	for (int i = 0; i <= n; ++i)
	{
		allQuestion[i]->printQuestion();
		if (allQuestion[i]->getAnswer())	
		{
			correctQuestion++;
		}
	}

	cout<<"So luong cau tra loi dung : "<<correctQuestion<<endl;
}

