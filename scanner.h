#include<iostream>
#include<fstream>
#include<string>
#include "stdlib.h"
using namespace std;

//=====================================================
// File scanner.cpp written by: Group Number: 13
//=====================================================

// ** MYTOKEN DFA to be replaced by the WORD DFA
// ** Done by: Jesus Rivera
// ** RE: (vowel | vowel n| consonant vowel| consonant vowel n| consonant-pair vowel | consonant-pair vowel n)^+
bool myword(string s)
{
  int state = 0;
  int charpos = 0;
  //cout << "Inside of the myword function" << endl;
  while (s[charpos] != '\0')
    {
      if(state == 0 && (s[charpos] == 'a'||s[charpos] == 'e' || s[charpos] == 'E'|| s[charpos] == 'i' || s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
        state = 6;
      else
      if(state == 0 && (s[charpos] == 'b'||s[charpos] == 'g' || s[charpos] == 'h' || s[charpos] == 'k' || s[charpos] == 'm'|| s[charpos] == 'n' || s[charpos] == 'p'|| s[charpos] == 'r'))
	  state = 5;
      else
      if(state == 0 && (s[charpos] == 'c'))
	    state = 4;
      else
      if(state == 0 && (s[charpos] == 'd'||s[charpos] == 'j' || s[charpos] == 'w' || s[charpos] == 'y' || s[charpos] == 'z'))
	      state = 3;
      else
      if(state == 0 && (s[charpos] == 's'))
		state = 2;
      else
      if(state == 0 && (s[charpos] == 't'))
		  state = 1;
      else
      if(state == 6 && (s[charpos] == 'a'||s[charpos] == 'e' || s[charpos] == 'E' || s[charpos] == 'i' || s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
		    state = 6;
      else
      if(state == 6  && (s[charpos] == 'n'))
		      state = 7;
      else
      if(state == 6  && (s[charpos] == 't'))
			state = 1;
      else
      if(state == 6 && (s[charpos] == 's'))
			  state = 2;
      else
      if(state == 6 && (s[charpos] == 'b'||s[charpos] == 'g' || s[charpos] == 'h' || s[charpos] == 'k' || s[charpos] == 'm'|| s[charpos] == 'p' || s[charpos] == 'r'))
			    state = 5;
      else
      if(state == 6 && (s[charpos] == 'd'||s[charpos] == 'j' || s[charpos] == 'w' || s[charpos] == 'y' || s[charpos] == 'z'))
			      state = 3;
      else
      if(state == 6 && (s[charpos] == 'c'))
				state = 4;
      else
      if(state == 7 && (s[charpos] == 'a'||s[charpos] == 'e' || s[charpos] == 'E' || s[charpos] == 'i' || s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
				  state = 6;
      else
      if(state == 7 && (s[charpos] == 't'))
				    state = 1;
      else
      if(state == 7 && (s[charpos] == 's'))
				      state =2;
      else
      if(state == 7 && (s[charpos] == 'd'||s[charpos] == 'j' || s[charpos] == 'w' || s[charpos] == 'y' || s[charpos] == 'z'))
					state = 3;
      else
      if(state == 6 && (s[charpos] == 'c'))
					  state = 4;
					else
					  if(state == 7 && (s[charpos] == 'a'||s[charpos] == 'e' || s[charpos] == 'E' || s[charpos] == 'i' || s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
					    state = 6;
					  else
					    if(state == 7 && (s[charpos] == 't'))
					      state = 1;
					    else
					      if(state == 7 && (s[charpos] == 's'))
						state =2;
					      else
						if(state == 7 && (s[charpos] == 'd'||s[charpos] == 'j' || s[charpos] == 'w' || s[charpos] == 'y' || s[charpos] == 'z'))
						  state = 3;
						else
						  if(state == 7 && (s[charpos] == 'b'||s[charpos] == 'g' || s[charpos] == 'h' || s[charpos] == 'k' || s[charpos] == 'm'||s[charpos] == 'n' || s[charpos] == 'p' || s[charpos] == 'r'))
						    state = 5;
						  else
						    if(state == 7 && (s[charpos] == 'c'))
						      state = 4;
						    else
						      if(state == 1 && (s[charpos] == 'a'||s[charpos] == 'e' || s[charpos] == 'E' || s[charpos] == 'i' || s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
							state = 6;
						      else
							if(state == 2 && (s[charpos] == 'a'||s[charpos] == 'e' || s[charpos] == 'E'||s[charpos] == 'i' || s[charpos] == 'I'|| s[charpos] == 'o' || s[charpos] == 'u'))
							  state = 6;
							else
							  if(state == 3 && (s[charpos] == 'a'||s[charpos] == 'e' ||s[charpos] == 'E'|| s[charpos] == 'i'||s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
							    state = 6;
							  else
							    if(state == 1 && (s[charpos] == 's'))
							      state = 3;
							    else
							      if(state == 2 && (s[charpos] == 'h'))
								state = 3;
							      else
								if(state == 4 && (s[charpos] == 'h'))
								  state = 3;
								else
								  if(state == 5 && (s[charpos] == 'y'))
								    state = 3;
								  else
								    if(state == 5 && (s[charpos] == 'a' ||s[charpos] == 'e' ||s[charpos] == 'E' || s[charpos] == 'i'||s[charpos] == 'I' || s[charpos] == 'o' || s[charpos] == 'u'))
								      state = 6;
								    else
								      {
									//cout << "I am stuck in state " << state << endl;
									return false;
								      }

      charpos++;
    }//end of while
  // where did I end up????

  //cout << "The final state is " << state << endl;
  if (state == 6 || state ==  7)
    return true;  // end in a final state
  else
    return false;
}


// ** Done by: Jesus Rivera
bool period(string s)
{
  int state = 0;
  int charpos = 0;
  //cout << "Inside of the period function" << endl;
  //cout << "What is inside s[charpos] " << s[charpos] << endl;
  while (s[charpos] != '\0')
    {
      if (state == 0 && s[charpos] == '.')
        state = 1;
      else
        if (state == 1 && s[charpos] == '.')
          state = 1;
      charpos++;
    }//end of while
  //cout << "State in period function is " << state << endl;
  if (state == 1)
    return true;
  else
    return false;

}

// ** Update the tokentype to be WORD1, WORD2, PERIOD and ERROR.
enum tokentype {VERB, VERBNEG, VERBPAST, VERBPASTNEG, IS, WAS, OBJECT, SUBJECT, DESTINATION, PRONOUN, CONNECTOR, WORD1, WORD2, PERIOD, ERROR};
enum englishtype {I, Me, You, He, Him, She, Her, It, Also, Then, However, Therefore};

// ** Need the lexicon to be set up here (to be used in Part C)
// ** Need the reservedwords list to be set up here

bool lexiconWord(englishtype& english, string word)
{
  if(word == "watashi")
    {
      english = I;
      return true;
    }
  else
    if(word == "anata")
      {
	english = You;
	return true;
      }
    else
      if(word == "kare")
	{
	  english = He;
	  return true;
	}
      else
	if(word == "kanojo")
	  {
	    english = She;
	    return true;
	  }
	else
	  if(word == "sore")
	    {
	      english = It;
	      return true;
	    }
	  else
	    if(word == "mata")
	      {
		english = Also;
		return true;
	      }
	    else
	      if(word == "soshite")
		{
		  english = Then;
		  return true;
		}
	      else
		if(word == "shikashi")
		  {
		    english = However;
		    return true;
		  }
		else
		  if(word == "dakara")
		    {
		      english = Therefore;
		      return true;
		    }
		  else
		    {
		      cout << "Not an english word.";
		    }
}


bool reservedWord(tokentype& type, string word)
{
  //cout << "Inside reservedWord function" << endl;
  if(word == "masu")
    {
      type = VERB;
      return true;
    }
  else
    if(word == "masen")
      {
	type = VERBNEG;
	return true;
      }
    else
      if(word == "mashita")
	{
	  type = VERBPAST;
	  return true;
	}
      else
	if(word == "masendeshita")
	  {
	    type = VERBPASTNEG;
	    return true;
	  }
	else
	  if(word == "desu")
	    {
	      type = IS;
	      return true;
	    }
	  else
	    if(word == "deshita")
	      {
		type = WAS;
		return true;
	      }
	    else
	      if(word == "o")
		{
		  type = OBJECT;
		  return true;
		}
	      else
		if(word == "wa")
		  {
		    type = SUBJECT;
		    return true;
		  }
		else
		  if(word == "ni")
		    {
		      type = DESTINATION;
		      return true;
		    }
		  else
		    if(word == "watashi"|| word == "anata"|| word == "kare"|| word == "kanojo" || word == "sore")
		      {
			type = PRONOUN;
			return true;
		      }
		    else
		      if(word == "mata" || word == "soshite" || word == "shikashi" || word == "dakara")
			{
			  type = CONNECTOR;
			  return true;
			}
		      else
			{
			  //cout << "not a reserved word" << endl;
			  return(false);
			}
}

// ** Done by: Edgar Cruz
//ifstream& fin
void scanner(tokentype& a, string& w, ifstream& fin)
{
  //cout << ".....Scanner was called..." << endl;
  // ** Grab the next word from the file

  fin >> w;
  cout << "Word is: " << w << endl;


  if(myword(w))
    {
      cout << w << " is a word" << endl;

      if(reservedWord(a, w))
	;
      else
	{
	  int pos = 0;
	  while (w[pos] != '\0')
	    {
	      if (w[pos] == 'I'||w[pos] == 'E')
		a = WORD2;
	      else
		a = WORD1;
	      pos++;
	    }

	}
    }
  else
    if (period(w))
      {
	a = PERIOD;
      }

    else if(w == "eofm") //none of the FAs returned TRUE
      {
	//a = ERROR;
	exit(1);
      }
    else
      {
	//cout << "Lexical Error: " << w << " is not a valid token" << endl;
	a = ERROR;
      }
}
