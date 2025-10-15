questions=[]
  
def quiz_master():
  
  operation=None
  while operation !=4:
    print("\n SHAKE YOUR BRAIN AND ADD SOME CHALLENGING QUESTIONS..")
    print()
    print("\t press 1 for add question")
    print("\t press 2 for view question")
    print("\t press 3 for delete question")
    print("\t press 4 for exit")
    print()
    operation=int(input("Which operations you want to Perform :"))
    if operation ==1:
      question()
    elif operation==2:
      view_quesiton()
    elif operation==3:
      delete_question()
    elif operation==4:
      print("thank you for visit")
      main()
    else:
      print("wrong input")
    
def question():
    option=[]
    question=input('\n Enter Question :')
    op1=input(f'\n Enter option 1:')
    op2=input(f'Enter option 2:')
    op3=input(f'Enter option 3:')
    op4=input(f'Enter option 4:')
    option.append(op1) 
    option.append(op2) 
    option.append(op3) 
    option.append(op4) 
    ans=input("\n Enter Answer : ")
    questions.append({'question':question,'option':option,'ans':ans})
    quiz_master()

def view_quesiton():
  b=1
  for i in questions:
    print()
    print(f' Question {b} -> {i['question']}')
    print()
    b=b+1
    for j in i['option']:
        print(f'option :{j}')  
    print(f'ans:{i['ans']}')
   
def delete_question():
  delete=int(input("enter delete question number:"))
  remove=questions.pop(delete-1)
  
def main(): 
    while True:
        print("\n============= QUIZ GAME MENU ===============")
        print()
        print("\t -> Quiz Master (press 1)")
        print("\t -> Quiz Cracker (press 2)")
        print("\t -> Exit (press 3)")
        print()
        a= int (input("Enter Your Role :"))

        if a == 1:
            quiz_master()
        elif a == 2:
            cracker()
        elif a == 3:
            print("Exiting... Thank you for playing!")
            break
        else:
            print("Invalid input. Please enter 1, 2, or 3.")
    print()

def cracker():
    c=1
    if not questions:
        print("No questions available to play.")
        return
    score = 0
    for q in questions:
        print(f"\n Q.{c} -> {q['question']}")
        print()
        c=c+1
        a=1
        for j in q['option']:
            print(f'option {a} :{j}') 
            a=a+1
        print()
        user_answer = input("Enter your answer : ")
        if user_answer == q['ans']:
            print("\n Correct!")
            score += 1
        else:
            print()
            print(f"Incorrect. The correct answer is {q['ans']}")
    print(f"\nYour Score: {score} out of {len(questions)}")

main()