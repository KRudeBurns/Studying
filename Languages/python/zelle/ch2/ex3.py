""" 
Modify the avg2. py program (Section 2.5.3) to find the average of three
exam scores. 

"""
#avg3.py

def main():
     print("This program computes the average of three exam scores. ")

     score1, score2, score3 = eval (input("enter three scores separated by a comma: "))
     average = (score1 + score2 + score3) / 3

     print("The average of the scores is: ", average)

main()