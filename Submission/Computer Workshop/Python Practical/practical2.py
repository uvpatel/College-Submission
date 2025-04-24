'''

coffee - 70 rs,
Tea - rs50,
Sandwich - 100 rs
'''


print("""
coffee - 70 rs,
Tea - 50 rs,
Sandwich - 100 rs""")

item = input("Enter which item you want to order (coffee, Tea ,Sandwich):   ").lower()

if(item == "coffee"):
    print("You ordered coffee")
    item_price = 70
elif(item == "tea"):    
    print("You ordered Tea")
    item_price = 50
elif(item == "sandwich"):    
    print("You ordered Tea")
    item_price = 50
else:
    print("Given item is not available.")    

item_count = int(input(f"enter how many {item} of you want: "))
total_price = item_price * item_count


print(f"Total price of {item} is: {total_price} rs")