# Capitals

This is an excercise from Chapter 10 of  [Learning C++](https://www.manning.com/books/learning-c-plus-plus) by Michael Haephrati and Ruth Haephrati, published by [Manning Publications](https://www.manning.com/manning).

![Learning C++ by Michael Haephrati and Ruth Haephrati](https://i.ibb.co/mvTcpqK/Haephrati-MEAP-HI.jpg)

## About

Not only will it show you the capital of a given country, but if it doesn't know the answer, you can teach it the answer, and next time it will remember.

## The code

In order to insert data to a map, we use the insert member function std::make_pair(), which constructs a pair object with its first element set to the country and its second element set to the capital.

## My blog

The [following blog](https://learningcplusplus.blog) will be dedicated to the book.

## Details

Let’s look at an interesting code sample. 


In this sample, we ask the user to enter the name of a country, and the program will display the capital city (so the pairs we use with std::make_pair() are country and capital). In case the user enters the name of a country that is not known to the program, the user is asked to tell the program the name of the capital city.

The program then adds the new entry and learns, so it can display it next time.


![Sample output](https://i.ibb.co/WKCFKJL/CH10-Capitals-output.jpg)
