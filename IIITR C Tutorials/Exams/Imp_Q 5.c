/* 
GATE CS 2005

Que:    A program P reads in 500 integers in the range [0..100] representing the scores of 500 students. It then prints the frequency of each score above 50. What would be the best way for P to store the frequencies?

(a) An array of 50 numbers
(b) An array of 100 numbers
(c) An array of 500 numbers
(d) A dynamically allocated array of 550 numbers

Answer (a)
An array of size 50 looks the best option to store number of students for each score. We need to store frequencies of scores above 50. We can ignore scores below 50 and to index the scores above 50, we can subtract 50 from the score value.

*/