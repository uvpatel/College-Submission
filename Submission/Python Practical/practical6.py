course = ["Python","Java","C++","Data Science"]


new_course = input("Enter a new couse: ")

course.append(new_course)

print(new_course)

index = int(input("Enter which course you remove from the course: "))

course.pop(index)

print(course)

search = input("Enter the course you want to search: ")

if(search in course):
    print("Yes this course is available in The college curriclum.")
else:
    print("This course is not available.")

info = ("University name" , " Establish year.")  
print(info)  
