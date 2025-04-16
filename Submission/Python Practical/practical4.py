init_balance = 5000


withraw = float(input("Enter the amount you want to withdraw: "))

rem = init_balance - withraw

while(rem != 0):
    withraw = float(input("Enter the amount you want to withdraw: "))
    choice = int(input("Enter you want to withdraw money or not(0 for no and 1 for yes): "))

    if(choice == 1):

        if(withraw > init_balance):
            print(f"Insufficient balance.Your current balance is {init_balance}")
        else:
            print(f"Withdraw successful remaining balance is {init_balance-withraw} ")

    else:

        print("End of programme.")        