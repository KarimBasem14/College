# Factorial function


# Permutations with replacment n^r
permutations_replacment = function(n, r){
  return ( n ^ r)
}


# Permutations without replacment nPr
permutations_no_replacment = function(n, r){
  return (factorial(n) /factorial(n-r)  )
}


# Combinations without replacment nCr
combinations_no_replacment = function(n, r){
  return (permutations_no_replacment(n,r) / factorial(r))
} 

# Combinations with replacment n+r-1Cr-1
combinations_replacment = function(n, r){
  return (combinations_no_replacment(n+r-1, r))
}

print(combinations_no_replacment(10,7))

