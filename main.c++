/******************************************************************************

This code is provided to you By Aman Arabzadeh, I'm student at collage in Mid Sweden University
Use the code and remember to be consistent in your aim if you want to achieve your goals.
Be great, Be bold, Be brave.
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <string>
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
// Checking for valid char login password
// Has to be alphabet letter
bool isValid(char str[]);
// Let's revers char array (;
void reverseChar(char str[]);
// Comparing two char array
bool Comparing(char str[], char str2[]);
// Checking for Palindrome
bool isPalindrome(char str[]);
// Finding duplicate in a char in a string
void Duplicate(char str[]);
// Find duplicate using bits
void bitDuplicate(char str[]);
// Checking for anagram in array of chars
bool isAnagram(char str[], char str2[]);



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
    

  cout << "Checking for valid input " << endl;
  cout << endl <<  "Enter your passwords: ";
  char str[20];
  cin.get(str, '\n');
  if(isValid(str)){
    cout << "Welcome back!" << endl;
  }else{
    cout << "Invalid password! " << endl;
  }
   cout << endl << "Reversing char array " << endl;
   reverseChar(name);
   cout << endl << "Comparing two char array string " << endl;
    char F[] = "Aman";
    char D[] = "Aman";
    bool isEqual = Comparing(F, D);
    if(isEqual){
      cout << "Is equal." << endl;
    }else {
      cout << "Not equal" << endl;
    }
    cout << endl << "Checking for duplicates in cg´har array string" << endl;
    char W[] = "giving away is good for you";
    Duplicate(W);
    cout << "Using bits to check for duplicate " << endl;
    bitDuplicate(W);
    cout << "Checking for anagram." << endl;
    char AN[] = "verbose";
    char ANW[] = "observe";
    bool isAnag = isAnagram(AN, ANW);
    if(isAnag){
       cout << "It's Anagram" << endl;
    }else{
      cout << "Not Anagram" << endl;
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


// Checking for valid char login password
// Has to be alphabet letter
bool isValid(char str[]){
 for(int i = 0; str[i] != '\0';i++){
     if(!(str[i] >= 65 && str[i] <= 90)  && !(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 48 && str[i] <= 57)){
      return false;
     }
 }
 return true;
}

// Let's revers char array (;
void reverseChar(char str[]){
   char t;
   int i,j;
   for(i = 0; str[i] != '\0'; i++){};
   i = i-1;
   for(j = 0; j < i; j++,i--){
    // Swapping with last and first with each others
    t = str[i];
    str[i] = str[j];
    str[j] = t;
   }
   cout << str << endl;
}  


// Comparing two char array
bool Comparing(char str[], char str2[]){
 int i = 0;
 int j = 0;
     for(i = 0,j = 0; str[i] != '\0' && str2[j] != '\0'; i++,j++){
       if(str[i] != str2[j]){
            break;
       }
     }
     if(str[i] == str2[j]){
         return true;
     }
     return false;
}

/*
// Checking for Palindrome
bool isPalindrome(char str[]){
  reverseChar(str);
  int siz = strlen(str);
  char str2[siz];
  for(int i = 0; str[i] != '\0'; i++){
    str2[i] = str[i];
  }
  Comparing(str, str2);
}
*/
// Finding duplicate in a char in a string
void Duplicate(char str[]){
   int hash[26] = {0},i;
   for(i = 0; str[i] != '\0'; i++){
       hash[str[i]-97]++;
   }
   for(i = 0; i < 26; i++){
      if(hash[i] > 1){
         cout << char(i + 97) << " ";
         cout << hash[i]<< endl;
      }
   }
}


// Find duplicate using bits

void bitDuplicate(char str[]){
  int H = 0, x = 0, taken=0; 
for(int i = 0; str[i] != '\0'; i++){ 
    x = 1; 
    x = x << (str[i] - 97); 
    if((x & H) > 0){   
     if(!(x & taken)){
         cout << "Duplicate found " << str[i] << endl;  
         taken=x|taken;
         
         
     }
     cout << "Duplicate found " << str[i] << endl;   
    }else{       
      H = x | H;    
    }  
  }
}  
 

// Checking for anagram in array of chars
bool isAnagram(char str[], char str2[]){
    int i, H[26] ={0};
    for(i = 0; str[i] != '\0'; i++){
       H[str[i]-97]++;
    }
    for(i = 0; str2[i] != '\0'; i++){
       H[str[i]-97]--;
       if((H[str[i]-97]) < 0){
          return false;
          break;
       }
    }
    if(str2[i]  == '\0')
      return true;
}