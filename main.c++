/******************************************************************************

This code is provided to you By Aman Arabzadeh, I'm student at collage in Mid Sweden University
Use the code and remember to be consistent in your aim if you want to achieve your goals.
Be great, Be bold, Be brave.
*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
// Display char array
void Display(char str[]);
// Change uppercase to lower cases
// The sentence has to be uppercase for this to work
void Lowecase(char str[]);
// Count chars in char array
int Count(char str[]);
// This function converst lower to upper and vs
void UpperLowe(char str[]);
// Counting vowels 
int vowel(char str[]);
// Counting consonants 
int consonants(char str[]);

// Counting words
int countWords(char str[]);



// Ascii code recap
// A = 65, Z = 90
// a = 97, z = 122
// 0 = 48, 9 = 57


int main(){


    char name[] = "AMAN ARABZADEH " ;
    Display(name);
    Lowecase(name);
    Display(name);
    int c = Count(name);
    cout << c << endl;
    cout << "Vowels" << endl << endl;
    int v = vowel(name);
    cout << v << endl << endl;
    cout << "Consonants" << endl;
    int Cons = consonants(name);
    cout << Cons << endl;
    cout << "Counting words" << endl;
    int countWrds = countWords(name);
    if(countWrds >= 2){
         cout << "There are " << countWrds  << " words in list" << endl;
    }else{
         cout << "There are " << countWrds  << " word in list" << endl;
    }

 
    return 0;
}


// Display char array
void Display(char str[]){
     for(int i = 0; str[i] != '\0'; i++){
         cout << str[i];
     }
     cout << endl;
}

// Change uppercase to lower cases
void Lowecase(char str[]){
   for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
          str[i] = str[i] +32;
        }
   }
}

// Count chars in char array

int Count(char str[]){
 int count =0;
 for(int i = 0; str[i] != '\0'; i++){
    count++;
 }
 return count;
}

// This function converst lower to upper and vs
void UpperLowe(char str[]){
   for(int i = 0; str[i] != '\0'; i++){
      if(str[i] >= 65 && str[i] <= 90 ){
         str[i] = str[i] +32;
      }else if(str[i] >= 97 && str[i] <= 122){
        str[i] = str[i] -32;
      }
   }
}

// Counting vowels 
int vowel(char str[]){
 int count = 0;
   for(int i = 0; str[i] != '\0'; i++){
       if(str[i] == 'a'|| str[i] == 'A'|| str[i] == 'e'
          || str[i] == 'E'|| str[i] == 'i'|| str[i] == 'I'
          || str[i] == 'o'||str[i] == 'O'|| str[i] == 'u'
          ||str[i] == 'U'||str[i] == 'Y'|| str[i] == 'y'){
           count++;
          }
   }
   return count;
}
// Counting consonants 
int consonants(char str[]){
 int count = 0;
   for(int i = 0; str[i] != '\0'; i++){
       if((str[i] >= 65 && str[i] <= 90) || (str[i] >=97 && str[i] <= 122)&&
           str[i] != 'a'&& str[i] != 'A'&&  str[i] != 'e'
          && str[i] != 'E' && str[i] != 'i'&& str[i] != 'I'
          && str[i] != 'o' && str[i] != 'O' && str[i] != 'u'
          && str[i] != 'U' && str[i] != 'Y' && str[i] != 'y'){
           count++;
      }
   }
   return count;
}

// Counting words
int countWords(char str[]){
  int count = 0;
  for(int i = 0; str[i] != '\0'; i++){
     if(str[i] == 32 && str[i-1] != 32){
        count++;
     }
  }
   
  return count;
}









