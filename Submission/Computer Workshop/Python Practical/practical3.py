maths = float(input("Enter your maths marks: "))
Chemistry = float(input("Enter your Chemistry marks: "))
Physics = float(input("Enter your Physics marks: "))

avg = (maths + Chemistry + Physics) / 3

print(f"The Percentage of The student is {avg} %")


if ((avg < 0) or (avg > 100)):
    print("Not possible. Enter valid numbers.")

else:

    if avg > 75:
        print("You are Eligible for admission")
        if(avg > 90):
            print("You are eligible for scholarship")
    else:
        print("Not Eligible for admission") 

