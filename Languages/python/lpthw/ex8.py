# using {} in a string makes it a place holder for a value
formatter = "{} {} {} {}"
# will print 4 {}, because I have not added any value with format()
print(formatter)
#using format(), I am able to add values that replace the {}
print(formatter.format(1, 2, 3, 4))
print(formatter.format("one", "two", "three", "four"))
print(formatter.format(True, False, True, False))
# the value formatter is 4*{}, so the command below will print 16*{}
print(formatter.format(formatter, formatter, formatter, formatter))
print(formatter.format(
      "Try your",
      "Own text here",
      "Maybe a poem",
      "Or a song about fear"
))
