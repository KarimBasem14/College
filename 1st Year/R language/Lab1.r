# Making a vector with the given numbers from the lab's sheet
my_vec = c(12, 7, 3, 4.2, 18, 2, 54, -21, 8)

# Calculating the mean using 2 methods:
# First method: (using a for loop and making 2 variables one for sum and one for count)
sum = 0
count = 0
for (num in my_vec) {
  count = count + 1 # Increase the count by 1
  sum = sum + num # Add number to sum
}
mean = sum / count

print(paste0("Mean is ", mean))

# Second method: Using the built in function XD
print(paste0("(Second method) Mean is ", mean(my_vec)))


#---------------------------------------------------------------------------------------------
# Calculating the median
# Apparently the median has a very easy formula that I can implement here


median_func = function(vec){
  vec = sort(vec) # Must be sorted to use the formula below
  n = length(vec) # Vector length
  if (n %% 2 == 0){ # Is even
    return( (vec[n/2] + vec[(n/2)+1]) /2 )
  }
  else { # Is odd
    return( vec[(n+1)/2] )
  }
}

print(paste0("Median is ", median_func(my_vec)))

#---------------------------------------------------------------------------------------------




max_num_func = function(vec){ # Gets the biggest number in a linear list
  biggest_num = vec[1] 
  for (num in vec){
    if (num >= biggest_num){
      biggest_num = num
    }
  }
  return(biggest_num)
}

mode_func = function(vec){
  table_vec = table(vec) # Returns a table object (a very stupid datatype)
  df_table = as.data.frame(table_vec) # A better data type than table
  
  
  frequency = df_table[["Freq"]]
  unique_nums = df_table[["vec"]]
  
  most_frequency = max_num_func(frequency)
  most_frequency_index = match(most_frequency, frequency) # Assuming that there is 1 number with the most frequency
  
  if (sum(frequency == most_frequency) > 1){ # Counts the number of occurances of most_frequency in frequency
    return("Sorry there are more than 1 number with the highest frequency in this vector")
  }
  else{
    return(unique_nums[most_frequency_index])
  }
  
  
  
}

print(paste0("Mode : ",mode_func(my_vec)))


