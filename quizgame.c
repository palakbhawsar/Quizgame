#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int generalKnowledge();
int history();
int geography();

int maingame()
{
    int score = 0;
    char category;
    system("cls");
    printf("Enter the category:\n");
    printf("H - History\n");
    printf("GK - General Knowledge\n");
    printf("Geo - Geography\n");
    scanf(" %c", &category);

    if (category == 'H' || category == 'h')
        score += history();
    else if (category == 'G' || category == 'g')
        score += generalKnowledge();
    else if (category == 'E' || category == 'e')
        score += geography();
    else
        printf("Invalid category");

    return score;
}

int main()
{
    int finalscore = 0;
    char name[50];

    system("cls");
    printf("\t\t\t\t\t\t\tWELCOME TO QUIZ COMPETITION\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    system("cls");
    printf("\nRULE1: PLEASE FOLLOW THE INSTRUCTIONS GIVEN BELOW\n");
    printf("RULE2: THIS QUIZ CONTAINS A TOTAL OF 15 QUESTIONS\n");
    printf("RULE3: YOU WILL BE GIVEN 1 MARK FOR EACH CORRECT ANSWER\n");
    printf("RULE4: NO MARKS WILL BE DEDUCTED FOR WRONG ANSWERS\n");
    printf("RULE5: YOU WILL HAVE TO ANSWER 8 QUESTIONS CORRECTLY TO PASS THIS QUIZ\n");
    printf("RULE6: PRESS S TO START THE QUIZ\n");
    printf("RULE7: PRESS E TO EXIT THE QUIZ\n");
    printf("RULE8: PRESS ENTER TO CONTINUE\n");

    char input;
    scanf(" %c", &input);
    getchar();
    if (input == 'S' || input == 's')
    {
        finalscore = maingame();
        printf("Final Score: %d\n", finalscore);
    }
    else if (input == 'E' || input == 'e')
    {
        return 0;
    }
    else
        printf("Invalid input");
    return 0;
}

int generalKnowledge()
{
    int score = 0;
    char option;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q1- Which planet is known as the 'Red Planet'?\n");
    printf("a) Venus\nb) Mars\nc) Jupiter\nd) Saturn\n");
    scanf(" %c", &option);

    if (option == 'b' || option == 'B')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q2- Who painted the famous artwork \"Mona Lisa\"?\n");
    printf("a) Leonardo da Vinci\nb) Vincent van Gogh\nc) Pablo Picasso\nd) Michelangelo\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q3- Which is the largest ocean on Earth?\n");
    printf("a) Pacific Ocean\nb) Atlantic Ocean\nc) Indian Ocean\nd) Arctic Ocean\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q4- Who invented the telephone?\n");
    printf("a) Alexander Graham Bell\nb) Thomas Edison\nc) Isaac Newton\nd) Albert Einstein\n");
    printf("Answer: a) Alexander Graham Bell\n\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q5- What is the largest organ in the human body?\n");
    printf("a) Liver\nb) Heart\nc) Brain\nd) Skin\n");
    printf("Answer: d) Skin\n\n");
    scanf(" %c", &option);

    if (option == 'd' || option == 'D')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q6- Which country is famous for the Taj Mahal?\n");
    printf("a) India\nb) China\nc) Egypt\nd) Brazil\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q7- Who wrote the play 'Romeo and Juliet'?\n");
    printf("a) William Shakespeare\nb) Mark Twain\nc) Charles Dickens\nd) Jane Austen\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("General Knowledge:\n");
    printf("Q8- What is the chemical symbol for the element gold?\n");
    printf("a) Au\nb) Ag\nc) Fe\nd) Cu\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    return score;
}

int history()
{
    int score = 0;
    char option;

    system("cls");
    printf("History:\n");
    printf("Q1- Who was the first President of the United States?\n");
    printf("a) George Washington\nb) Abraham Lincoln\nc) Thomas Jefferson\nd) Benjamin Franklin\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q2- In which year did World War II end?\n");
    printf("a) 1945\nb) 1939\nc) 1918\nd) 1941\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q3- Who is known as the 'Father of the Indian Nation'?\n");
    printf("a) Mahatma Gandhi\nb) Jawaharlal Nehru\nc) Subhash Chandra Bose\nd) Bhagat Singh\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q4- In which year did Christopher Columbus discover America?\n");
    printf("a) 1492\nb) 1776\nc) 1588\nd) 1620\n");
    printf("Answer: a) 1492\n\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q5- Who was the first woman to win a Nobel Prize?\n");
    printf("a) Marie Curie\nb) Mother Teresa\nc) Amelia Earhart\nd) Rosa Parks\n");
    printf("Answer: a) Marie Curie\n\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q6- Who was the first Prime Minister of Great Britain?\n");
    printf("a) Robert Walpole\nb) Winston Churchill\nc) Margaret Thatcher\nd) Tony Blair\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q7- Which famous scientist developed the theory of relativity?\n");
    printf("a) Albert Einstein\nb) Isaac Newton\nc) Galileo Galilei\nd) Nikola Tesla\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("History:\n");
    printf("Q8- What was the ancient capital of Japan?\n");
    printf("a) Kyoto\nb) Tokyo\nc) Osaka\nd) Hiroshima\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    return score;
}

int geography()
{
    int score = 0;
    char option;

    system("cls");
    printf("Geography:\n");
    printf("Q1- Which is the longest river in the world?\n");
    printf("a) Nile River\nb) Amazon River\nc) Yangtze River\nd) Mississippi River\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q2- Which country is known as 'The Land of the Rising Sun'?\n");
    printf("a) Japan\nb) China\nc) South Korea\nd) Thailand\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q3- Mount Everest, the highest peak in the world, is located in which mountain range?\n");
    printf("a) Himalayas\nb) Andes\nc) Alps\nd) Rockies\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q4- Which is the largest desert in the world?\n");
    printf("a) Sahara Desert\nb) Gobi Desert\nc) Kalahari Desert\nd) Arabian Desert\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q5- What is the capital of Australia?\n");
    printf("a) Canberra\nb) Sydney\nc) Melbourne\nd) Brisbane\n");
    printf("Answer: a) Canberra\n\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q6- Which is the largest country by land area?\n");
    printf("a) Russia\nb) Canada\nc) United States\nd) China\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q7- Which is the smallest continent?\n");
    printf("a) Australia\nb) Europe\nc) North America\nd) Africa\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    system("cls");
    printf("Geography:\n");
    printf("Q8- What is the official language of Brazil?\n");
    printf("a) Portuguese\nb) Spanish\nc) English\nd) French\n");
    scanf(" %c", &option);

    if (option == 'a' || option == 'A')
        score++;

    return score;
}
