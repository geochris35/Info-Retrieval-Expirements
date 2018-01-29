/*
 * Name: Chris Humphreys (geochris35@gmail.com)
 * Date: 01/28/17
 * File: Book.h
 * Description: Header for Book Class.
 */
#include <string> 

class Book {
/* 
 * Description:  The book class represents one book of the collection
 *   being indexed.  The initial storage will be simply an array of 
 *   terms that were seperated by whitespace in the original.  There will
 *   be methods to strip them of punctuation, and to stem them.
 */

private:
  // Name of the file on disk
  std::string fileName;
  std::string* wordsArrayPtr;
  int numOfWords;

  void findInitialSize();
  /*
   * Description:
   *   Does a run through the file to determine the number of 'words'.  Assigns
   *   this value to Book.numOfWords.  This is very initial.  It only counts
   *   based on whitespace with no filtering whatsoever.
   *   
   * Inputs:
   *   None
   *
   * Outputs:
   *   None - Sets value of 'numOfWords'
   */

  void makeWhitespaceIndex();
  /* 
   * Description:
   *   Loads all words (seperated by whitespace only) into an array pointed to by
   *   'wordsArray'.  This will contain both duplicates and punctuation.
   *
   * Inputs: 
   *   None
   * 
   * Outputs:
   *   None - Creates a dynamic array pointed to by 'wordsArray'.
   */
  
public:
  Book();
  /* 
   * Description: 
   *   Default Book constructor.  Creates an empty book object
   *   with no data. Right now being used for testing DO NOT USE!
   */
  
  Book(std::string fileName);
  /*
   * Description: 
   *   Parameterized Book Constructor.  When created reads into 
   *   this.word all the words in the file specified by 'filename'.  Also
   *   creates a whitespace seperated index of terms.
   */
  ~Book();
  /*
   * Description:
   *   Destructor, frees up wordsArrayPtr.
   */

  void printWhitespaceArray();
  /*
   * Description:
   *   Prints to the consolse the contents of 'wordsArray' with each
   *   element getting one line.  Mainly for testing.
   */
  void test();
  /* 
   * Desription: 
   *   Just a test method to ensure that is adjusted for use as
   *   the program evolves.
   * 
   * Inputs: 
   *   None
   *
   * Outputs:
   *   None
   */
};
