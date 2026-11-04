# weighted_bs

There is some hidden number and you have to make queries to guess it, the cost of each query depend on the answer you get for that query. So you have to guess it with the minimum cost possible.

The hidden number is always an integer from 1 and to 1 000.

Each query is one integer from 1 to 1 000. There are two different responses to each query: 
  - '>=': The integer in the query is greater than or equal the hidden number. Add 2 to the total cost. 
  - '<': The integer in the queyr is less than the hidden number. Add 1 to the total cost.
