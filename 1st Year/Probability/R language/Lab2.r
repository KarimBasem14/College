#install.packages("dplyr")
library(dplyr)

library(datasets)
data(iris)

# 2. Display the head of the iris data frame

print("Display the head of the iris data frame")

print(head(iris)) #head returns the first rows of the df
print("----------------------------------------------------------------------------------------")

# 3. Display only sepal length, width and species

print("Display only sepal length, width and species")

print(iris[c('Sepal.Length', 'Sepal.Width', 'Species')])
print("----------------------------------------------------------------------------------------")

# 4. Display the head of each flower type separately

print("Display the head of each flower type separately")

print(head(filter(iris, Species == "setosa")))
print(head(filter(iris, Species == "versicolor")))
print(head(filter(iris, Species == "virginica")))

#print(iris[["Sepal.Length"]])

print("----------------------------------------------------------------------------------------")

# 5. Display flowers whose sepal length is above average only.

print("Display flowers whose sepal length is above average only")

average = mean(iris[["Sepal.Length"]])
paste0("Average is ", average)
filtered_data = filter(iris,  Sepal.Length > average)
print(filtered_data)

print("----------------------------------------------------------------------------------------")

# 6. Display the top 5 flowers according to Petal Width

print("Display the top 5 flowers according to Petal Width")

print( head(iris[order(iris$Petal.Width, decreasing = TRUE), ], 5) )



