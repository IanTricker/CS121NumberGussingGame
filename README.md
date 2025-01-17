# CS121NumberGussingGame

## includes
+ #include <stdio.h>
+ #include <stdlib.h>
+ #include <time.h>
+ #include <stdbool.h>

## Main
### Seed
+ create a seed with time and NULL
### Store Variables
+ int randomNum
+ int userNum
+ int count=0
+ bool keepGoing = true
+ char name[20]
### Random Number Gerator
+ create random number genny for % 101
### while loop
+  while keepGoing = true
+  add to count
+  if userNum < randomNum print to low
+  if userNum > randomNum print to high
+  if userNum = randomNum print good and make keepgoing false
### how good did they do
+ if count < 7 print good
+ if count = 7 print ok
+ if count > 7 tell them they are bad at life and need more brain
