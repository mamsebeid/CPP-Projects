#include<iostream>
#include <vector>

using namespace std;

void transcriptor()
{
    string DNA;
    string RNA;
    cout << "Enter your DNA sequence:\n";
    cin >> DNA;
    for (int i = 0; i < DNA.length(); i++)
    {
        if (DNA[i] == 'A')
            RNA += "U";
        else if (DNA[i] == 'T')
            RNA += "A";
        else if (DNA[i] == 'C')
            RNA += "G";
        else if (DNA[i] == 'G')
            RNA += "C";
        else
            break;
    }
    if (DNA.size() == RNA.size())
        cout << "\nThe RNA sequence is:\n" << RNA;
    else
    {
        cout << "Wrong sequence!";
        return;
    }
}

void reversetranscriptor()
{
    string RNA;
    string DNA;
    cout << "Enter your DNA sequence:\n";
    cin >> RNA;
    for (int i = 0; i < RNA.length(); i++)
    {
        if (RNA[i] == 'U')
            DNA += "A";
        else if (RNA[i] == 'A')
            DNA += "T";
        else if (RNA[i] == 'G')
            DNA += "C";
        else if (RNA[i] == 'C')
            DNA += "G";
        else
            break;
    }
    if (RNA.size() == DNA.size())
        cout << "\nThe DNA sequence is:\n" << DNA;
    else
    {
        cout << "Wrong sequence!";
        return;
    }
}

void RNAtranslator()
{
    string RNA;
    vector<string> Protein;
    cout << "Enter your RNA sequence:\n";
    cin >> RNA;
    if (RNA.length() % 3 != 0)
    {
        cout << "Wrong Sequence!\n";
        return;
    }
    else
    {
        for (int i = 0; i < (RNA.length()); i += 3)
        {
            if (RNA[i] == 'A' && RNA[i + 1] == 'U' && RNA[i + 2] == 'G')
                Protein.push_back("M");
            else if ((RNA[i] == 'A' && RNA[i + 1] == 'G' && RNA[i + 2] == 'G') || (RNA[i] == 'A' && RNA[i + 1] == 'G' && RNA[i + 2] == 'A'))
                Protein.push_back("R");
            else if ((RNA[i] == 'A' && RNA[i + 1] == 'G' && RNA[i + 2] == 'C') || (RNA[i] == 'A' && RNA[i + 1] == 'G' && RNA[i + 2] == 'U'))
                Protein.push_back("S");
            else if ((RNA[i] == 'A' && RNA[i + 1] == 'A' && RNA[i + 2] == 'G') || (RNA[i] == 'A' && RNA[i + 1] == 'A' && RNA[i + 2] == 'A'))
                Protein.push_back("K");
            else if ((RNA[i] == 'A' && RNA[i + 1] == 'A' && RNA[i + 2] == 'C') || (RNA[i] == 'A' && RNA[i + 1] == 'A' && RNA[i + 2] == 'U'))
                Protein.push_back("N");
            else if ((RNA[i] == 'A' && RNA[i + 1] == 'C' && RNA[i + 2] == 'A') || (RNA[i] == 'A' && RNA[i + 1] == 'C' && RNA[i + 2] == 'G') || (RNA[i] == 'A' && RNA[i + 1] == 'C' && RNA[i + 2] == 'U') || (RNA[i] == 'A' && RNA[i + 1] == 'C' && RNA[i + 2] == 'C'))
                Protein.push_back("T");
            else if ((RNA[i] == 'A' && RNA[i + 1] == 'U' && RNA[i + 2] == 'A') || (RNA[i] == 'A' && RNA[i + 1] == 'U' && RNA[i + 2] == 'C') || (RNA[i] == 'A' && RNA[i + 1] == 'U' && RNA[i + 2] == 'U'))
                Protein.push_back("I");
            else if ((RNA[i] == 'C' && RNA[i + 1] == 'G' && RNA[i + 2] == 'A') || (RNA[i] == 'C' && RNA[i + 1] == 'G' && RNA[i + 2] == 'G') || (RNA[i] == 'C' && RNA[i + 1] == 'G' && RNA[i + 2] == 'U') || (RNA[i] == 'C' && RNA[i + 1] == 'G' && RNA[i + 2] == 'C'))
                Protein.push_back("R");
            else if ((RNA[i] == 'C' && RNA[i + 1] == 'A' && RNA[i + 2] == 'A') || (RNA[i] == 'C' && RNA[i + 1] == 'A' && RNA[i + 2] == 'G'))
                Protein.push_back("Q");
            else if ((RNA[i] == 'C' && RNA[i + 1] == 'A' && RNA[i + 2] == 'C') || (RNA[i] == 'C' && RNA[i + 1] == 'A' && RNA[i + 2] == 'U'))
                Protein.push_back("H");
            else if ((RNA[i] == 'C' && RNA[i + 1] == 'C' && RNA[i + 2] == 'A') || (RNA[i] == 'C' && RNA[i + 1] == 'C' && RNA[i + 2] == 'G') || (RNA[i] == 'C' && RNA[i + 1] == 'C' && RNA[i + 2] == 'U') || (RNA[i] == 'C' && RNA[i + 1] == 'C' && RNA[i + 2] == 'C'))
                Protein.push_back("P");
            else if ((RNA[i] == 'C' && RNA[i + 1] == 'U' && RNA[i + 2] == 'A') || (RNA[i] == 'C' && RNA[i + 1] == 'U' && RNA[i + 2] == 'G') || (RNA[i] == 'C' && RNA[i + 1] == 'U' && RNA[i + 2] == 'U') || (RNA[i] == 'C' && RNA[i + 1] == 'U' && RNA[i + 2] == 'C'))
                Protein.push_back("L");
            else if (RNA[i] == ' U' && RNA[i + 1] == 'G' && RNA[i + 2] == 'G')
                Protein.push_back("W");
            else if ((RNA[i] == 'U' && RNA[i + 1] == 'G' && RNA[i + 2] == 'U') || (RNA[i] == 'U' && RNA[i + 1] == 'G' && RNA[i + 2] == 'C'))
                Protein.push_back("C");
            else if ((RNA[i] == 'U' && RNA[i + 1] == 'A' && RNA[i + 2] == 'U') || (RNA[i] == 'U' && RNA[i + 1] == 'A' && RNA[i + 2] == 'C'))
                Protein.push_back("Y");
            else if ((RNA[i] == 'U' && RNA[i + 1] == 'C' && RNA[i + 2] == 'A') || (RNA[i] == 'U' && RNA[i + 1] == 'C' && RNA[i + 2] == 'G') || (RNA[i] == 'U' && RNA[i + 1] == 'C' && RNA[i + 2] == 'U') || (RNA[i] == 'U' && RNA[i + 1] == 'C' && RNA[i + 2] == 'C'))
                Protein.push_back("S");
            else if ((RNA[i] == 'U' && RNA[i + 1] == 'U' && RNA[i + 2] == 'A') || (RNA[i] == 'U' && RNA[i + 1] == 'U' && RNA[i + 2] == 'G'))
                Protein.push_back("L");
            else if ((RNA[i] == 'U' && RNA[i + 1] == 'U' && RNA[i + 2] == 'U') || (RNA[i] == 'U' && RNA[i + 1] == 'U' && RNA[i + 2] == 'C'))
                Protein.push_back("F");
            else if ((RNA[i] == 'U' && RNA[i + 1] == 'A' && RNA[i + 2] == 'A') || (RNA[i] == 'U' && RNA[i + 1] == 'A' && RNA[i + 2] == 'G') || (RNA[i] == 'U' && RNA[i + 1] == 'G' && RNA[i + 2] == 'A'))
                Protein.push_back("*");
            else
                break;
        }
        if (Protein.size() == (RNA.length() / 3))
        {
            cout << "\nThe Protein Sequence is: ";
            for (int j = 0; j < Protein.size(); j++)
            {
                cout << Protein[j];
            }
            //cout << "\n";
        }
        else
        {
            cout << "Wrong Sequence!\n";
            return;
        }
    }

}

int main()
{
    int x;
    int temp;
    int product;
    int end = 2;

    cout << "Enter Password:\n";
    cin >> x;
    if (x == 1965)
    {
        cout << "\nWelcome to the Central Dogma Hacker, Translate any Biological Molecule to Another!\n";
        while (end != 1)
        {
            cout << "\nWhat is your template?\n" << "1) DNA.\n2) RNA.\n3) Protein.\n\n";
            cin >> temp;
            cout << "\nWhat do you want to produce?\n" << "1) DNA.\n2) RNA.\n3) Protein.\n\n";
            cin >> product;
            cout << "\n";
            int choice = 1;

            if (temp == 1 && product == 2)
            {
                while (choice == 1)
                {
                    transcriptor();
                    cout << "\n\nDo you want to complete with the same template and product?\n1) Yes.\n2) No.\n\n";
                    cin >> choice;
                    cout << "\n";
                }
            }
            else if (temp == 2 && product == 1)
            {
                while (choice == 1)
                {
                    reversetranscriptor();
                    cout << "\n\nDo you want to complete with the same template and product?\n1) Yes.\n2) No.\n\n";
                    cin >> choice;
                    cout << "\n";
                }
            }
            else if (temp == 2 && product == 3)
            {
                while (choice == 1)
                {
                    RNAtranslator();
                    cout << "\n\nDo you want to complete with the same template and product?\n1) Yes.\n2) No.\n\n";
                    cin >> choice;
                    cout << "\n";
                }
            }

            cout << "Do you want to end the program?\n1) Yes.\n2) No.\n\n";
            cin >> end;
        }
    }
    else
    {
        cout << "\nSorry Wrong Password, Ending the Program.\n\n";
        return 0;
    }
}