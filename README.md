# Semantic-Auto-Complete-System
### What is the project about ?

This project was submitted as a final project for the Data Structure course. It's a semantic auto complete system which suggests a complete word or a phrase after a user has typed a few letters. It takes the beginning of a word that is entered and searches for the words that starts with the given prefix. It sorts the words returned and shown to the user

**The project supports:**

1. Searching for a word and viewing its definition 
2. Informing the user if the entered prefix is not found in any word
3. Adding a new word with its definition
4. Editing a definition of an existing word
5. Storing the words with their meanings in a text file

This projects implements the _Trie data structure_ using C++.



***

### Screenshots

<img src="https://raw.githubusercontent.com/GannaWalaa/Semantic-Auto-Complete-System/master/Screenshots/Welcome_Form1.png" alt="Welcome First Form" style="zoom: 67%;" />

This form is the first thing to appear after running the project. The user can start typing in the combo-box for a prefix of a word and a list of sorted words that have the same prefix entered will be shown. To view the definition you can press _Search_. 

For adding a new word you can press the _Add A New Word_ button and a new form will appear.

---------------------------------------------

<img src="https://raw.githubusercontent.com/GannaWalaa/Semantic-Auto-Complete-System/master/Screenshots/WordAndDefinition_Form2.png" alt="Word and Definition Form" style="zoom: 67%;" />

This form appears after clicking _Add A New Word_ or _Search_ buttons. The word textbox is used to either view the word that has been searched or to add a new word. The definition text box is also like the word textbox, it is used to either view or write a new definition. 

To complete the process of adding a new word, Click on _Done_. 

To return back to searching for other words, Press _Return_

----

<img src="https://raw.githubusercontent.com/GannaWalaa/Semantic-Auto-Complete-System/master/Screenshots/SameNameConflict_Form3.png" alt="Same Name Conflict From" style="zoom: 67%;" />

This form appears when the user enters a word to be added that already exists before. The user here needs to choose either to overwrite the past definition with the new definition or view the definition that is saved before and edit on it.



---

### Troubles running the project

If you're having troubles running the project you can try making the following steps:

1. Right click on the project, Click on _Retarget Project_ and then Press _Ok_
2. Make sure that the _Linker settings_ are correct, you can check them using the following operations:
   * Click on _Project_ tab > Choose _Properties_ > Choose _Linker_
   * Choose _System_ > in the SubSystem select Windows (/SUBSYSTEM:WINDOWS)
   * Click _Apply_
   * Choose _Advanced_ > in the Entry Point write "main"
   * Click _Apply_ and then _OK_

This should fix any problems that you may have faced.  