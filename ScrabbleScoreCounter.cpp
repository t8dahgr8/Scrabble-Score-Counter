#include<iostream>
#include<vector>
#include <string> //For String to an Integer (Vectors store strings, later convert to integer to add total)
using namespace std;

void vppl(int people, vector<vector<string>> &scores){//Pass by reference
    string name;
    
    for(int i = 0; i < people; ++i){ //Enter the names of people as the first element of each subvector
    cout << "Enter name of person " << i + 1 << ": " << endl;
    cin >> name;
    scores[i].push_back(name);
    }

    for(int i = 0; i < people; ++i){
        cout << scores[i][0] << " is player " << i + 1 << endl; //After assigning names, it'll give each player their player number
    }
    cout << endl;
    cout << "Let's start the game!" << endl;
    cout << endl;
    cout << endl;
}

void Add(vector<vector<string>> &scores){
    cout << "Who would you like to add to? Enter their Player #" << endl;
    int ply;
    cin >> ply;
    ply--;
    cout << "What score would you like to add" << endl;
    string num;
    cin >> num;
    num;

    scores[ply].push_back(num);
    cout << "We have added " << num <<  " points to " << scores[ply][0] << "'s score" << endl;
    cout << endl;
    cout << endl;
}


void Remove(vector<vector <string>> &scores){
    cout << "Who's score would you like to remove from? Enter their Player #" << endl;
    int ply;
    cin >> ply;
    ply--;
    cout << "Here are the list of numbers in " << scores[ply][0] << "'s row." << endl;


    cout << "What number would you like to remove? Tell me the element # (Very left number starts at 1)" << endl;
    for(int i = 1; i < scores[ply].size(); i++){ //Print out all numbers of that person, start at 2nd element to skip name
        cout << scores[ply][i]<< "  ";
    }
    cout << endl;
    int accident;
    cin >> accident;
    
    scores[ply].erase(scores[ply].begin() + accident);

    cout << "The number has been subtracted from " << scores[ply][0] << "'s total score" << endl;
    cout << endl;
    cout << endl;
}

void EndGame(int people, vector<vector<string>> &scores){
    cout << endl;
    cout << endl;
    for (int i = 0; i < people; i++)
    {
        cout << scores[i][0] << " scored a total of ";
        int sum = 0;
        for(int j = 1; j < scores[i].size(); j++){
            sum += stoi(scores[i][j]);
        }
        cout << sum << " points!" << endl;
    }
}



int main(){
    int people;

    cout << "Hello Welcome to Scrabble Score Counter!" << endl;
    cout << "How many people are playing today?" << endl;
    cin >> people;
    vector<vector<string>> scores(people); //Makes "people" amount of vectors inside the vector
    vppl(people, scores); //vppl stands for vector of people
    
    bool end = false;
    while(end == false){
        cout << "To enter in points, type 'Add'" << endl;
        cout << "To remove points, type 'Remove'" << endl;
        cout << "To end the game and recieve a scores for each player, type 'End'" << endl;
        cout << endl;
        cout << endl;
        string temp;
        cin >> temp;



        if(temp == "Add"){
            Add(scores);
        }

        if(temp == "Remove"){
            Remove(scores);
        }

        if(temp == "End"){
            end = true;
            EndGame(people, scores);
        }

        
    }

    





}