#include <iostream>
#include <string>
using namespace std;

class Question
{
    public:

    void SetupQuestion( string question, string answer0, string answer1, string answer2, string answer3, int correctAnswer )
    {
        m_question = question;
        m_answers[0] = answer0;
        m_answers[1] = answer1;
        m_answers[2] = answer2;
        m_answers[3] = answer3;
        m_correctAnswer = correctAnswer;
    }

    void DisplayQuestion()
    {
        cout << "QUESTION----------------" << endl;
        cout << m_question << endl;
        cout << "ANSWERS-----------------" << endl;
        for ( int i = 0; i < 4; i++ )
        {
            cout << i << ": " << m_answers[i] << endl;
        }
    }

    bool IsAnswerRight( int choice )
    {
        if ( choice == m_correctAnswer )
        {
            cout << "CORRECT!" << endl;
            return true;
        }

        cout << "WRONG!" << endl;
        return false;
    }

    private:
    string m_question;
    string m_answers[4];
    int m_correctAnswer;
};

int main()
{
    // SETUP
    Question questions[3];

    questions[0].SetupQuestion( "What is the capital of Kansas?",
        "Topeka",
        "Los Angeles",
        "St. Louis",
        "Vemont",
        0 );

    questions[1].SetupQuestion( "What is 3 + 4?",
        "1",
        "4",
        "7",
        "10",
        2 );

    questions[2].SetupQuestion( "Cheese belongs to what food group?",
        "Bread",
        "Dairy",
        "Noodles",
        "Meat",
        1 );

    // PROGRAM LOOP
    int choice;
    int rightAnswers = 0;
    for ( int i = 0; i < 3; i++ )
    {
        cout << endl;
        questions[i].DisplayQuestion();

        cout << "Answer: ";
        cin >> choice;

        if ( questions[i].IsAnswerRight( choice ) )
        {
            rightAnswers++;
        }
    }

    cout << endl << "Your final score:" << endl;
    cout << rightAnswers << "/3" << endl;

    return 0;
}




