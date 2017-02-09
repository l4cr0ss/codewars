#include <string>

class Kata
{
public:
    std::string replaceNth(std::string text, int n, char oldValue, char newValue)
    {
      if (n <= 0) return text;
      int counter = 0; // counts upwards towards 'n'
      std::string::iterator it;
      for (it = text.begin(); it != text.end(); it++) {
        if (*it == oldValue) counter++;
        if (counter == n)  {
          *it = newValue;
          counter = 0
        }
      }
      return text;
    }
};

Describe(Tests)
{
    It(ExampleTest1)
    {
        std::string expected = "Vader soid: No, I am your fother!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Vader said: No, I am your father!", 2, 'a', 'o');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(ExampleTest2)
    {
        std::string expected = "Vader said: No, I am your fother!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Vader said: No, I am your father!", 4, 'a', 'o');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(ExampleTest3)
    {
        std::string expected = "Vader said: No, I am your father!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Vader said: No, I am your father!", 6, 'a', 'o');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(ExampleTest4)
    {
        std::string expected = "Vader said: No, I am your father!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Vader said: No, I am your father!", 0, 'a', 'o');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(ExampleTest5)
    {
        std::string expected = "Vader said: No, I am your father!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Vader said: No, I am your father!", -2, 'a', 'o');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(ExampleTest6)
    {
        std::string expected = "Vader sayd: No, I am your father!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Vader said: No, I am your father!", 1, 'i', 'y');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(ExampleTest7)
    {
        std::string expected = "Luke cries: Noooooioooooioooo!";
        
        Kata kata;
        std::string actual = kata.replaceNth("Luke cries: Noooooooooooooooo!", 6, 'o', 'i');
    
        Assert::That(actual, Is().EqualTo(expected));
    }
};
