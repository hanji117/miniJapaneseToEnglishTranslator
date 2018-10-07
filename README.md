# miniJapaneseToEnglishTranslator

This project demonstrates that Theory of Computing is useful in writing a language processor.

The program translates Japanese words (written in English letters) into English words but 
only for about 20 words (Thus the "mini" part before JapaneseToEnglishTranslator). 
This program will read from a file, translate each Japanese word, and categorize the words. 

For example, if watashi is the first word in the text file then it will be placed 
in the actor category. To get a visual of what it will look like see test1results (this file was
provided by my professor to show us what we should be getting after testing partBtest1). 
test1results contains the result for partBtest1.

To try it out, compile translator.cpp and enter the file name partBtest1, partBtest2, partBtest3, 
partBtest4, partBtest5, or partBtest6. partBtest1 through partBtest6 contain sentences in Japanese. 
After the program runs and the user enters one of the test cases, an output file will be created 
called translated.txt with the Japanese words translated into English and categorized. 
If the user entered partBtest1, the translated.txt file should match the test1results file.
Once the user runs the program again and enters another test case, the new translated.txt file will 
overwrite the previous translated.txt file. 
