#include <bits/stdc++.h>
using namespace std;
int playQuiz()
{
    char start;
    char option;
    int score = 0;
    cout << "----------------------Welcome to Quiz Game----------------------" << endl;
    cout << "Please Follow the instructions-------" << endl;
    cout << "Step 1 : Quiz contains total 10 questions" << endl;
    cout << "Step 2 : You will given 1 marks for each right ans" << endl;
    cout << "Step 3 : There will be no negative marking" << endl;
    cout << endl
         << endl;
    cout << "Step 4 : Please press s to start the quiz" << endl;

    cin >> start;
    if (start == 's' || start == 'S')
    {
        cout << "Step 5 : Please select any one option a, b, c or d" << endl;
        cout << "if your score is greater then 6, you will pass the quiz." << endl;

        cout << "Q1. What is the capital of India?" << endl;
        cout << "(a) Bangalore" << endl
             << "(b) Mumbai" << endl
             << "(c) Delhi" << endl
             << "(d) Chennai" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q2. Who is the Prime Minister of India?" << endl;
        cout << "(a) Narendra Modi" << endl
             << "(b) Aditynath" << endl
             << "(c) Kejriwal" << endl
             << "(d) Nitin" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            cout << "WOW Great!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH ! Your answer is Wrong." << endl;
        }

        cout << "Q3. What is the National Bird of India?" << endl;
        cout << "(a) Parrot" << endl
             << "(b) Sparrow" << endl
             << "(c) Pigeon" << endl
             << "(d) Peacock" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "sorry! Your answer is Wrong." << endl;
        }

        cout << "Q4. What is the National Animal of India?" << endl;
        cout << "(a) Elephant" << endl
             << "(b) Lion" << endl
             << "(c) Tiger" << endl
             << "(d) Zebra" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q5. What is the National Flower of India?" << endl;
        cout << "(a) Lotus" << endl
             << "(b) Rose" << endl
             << "(c) Lily" << endl
             << "(d) Sunflower" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q6. Who is the Chief Minister of Uttar Pradesh?" << endl;
        cout << "(a) Kejriwal" << endl
             << "(b) Nitin" << endl
             << "(c) Aditynath" << endl
             << "(d) Nitin" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q7. Who is the President of India?" << endl;
        cout << "(a) Ram Nath Kovind" << endl
             << "(b) Droupadi Murmu" << endl
             << "(c) Rajnath Singh" << endl
             << "(d) Narendra Modi" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q8. What is the capital of Uttar Pradesh?" << endl;
        cout << "(a) Prayagraj" << endl
             << "(b) Lucknow" << endl
             << "(c) Delhi" << endl
             << "(d) Gorakhpur" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q9. Who is the leader of Congress?" << endl;
        cout << "(a) Rahul" << endl
             << "(b) Sonia" << endl
             << "(c) Rajesh" << endl
             << "(d) Rohit" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }

        cout << "Q10. Which one of the following state comes in north region?" << endl;
        cout << "(a) Hydrabad" << endl
             << "(b) Banglore" << endl
             << "(c) Kerla" << endl
             << "(d) Delhi" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            cout << "Hurrey!!! Congrats Your answer is correct" << endl;
            score += 1;
        }
        else
        {
            cout << "OHH no Your answer is Wrong." << endl;
        }
    }

    else
    {
        cout << "You have entered wrong value !" << endl;
        cout << "please enter correct value." << endl;
    }

    return score;
}

int main()
{
    int res = playQuiz();
    play:
    cout << "Your total score is : " << res;

    if (res >= 6)
    {
        cout << "Congrats! You are Pass." << endl
             << "Do you want to play quiz again? y or n ?" << endl;
        char playAgain;
        cin >> playAgain;
        if (playAgain == 'Y' || playAgain == 'y')
        {
            playQuiz();
            goto play;
        }
        else if (playAgain == 'n' || playAgain == 'N')
        {
            cout << "Bye... Take Care." << endl;
            return 0;
        }
        else
        {
            cout << "Try again!";
        }
    }
        else cout << "You are fail. Try again!" << endl;

    return 0;
}