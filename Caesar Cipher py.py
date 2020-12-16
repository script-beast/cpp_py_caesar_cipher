import os
import sys
import time
def prog(text,s):
	result = ""
	for i in range(len(text)): 
		char = text[i]
		if (char.isupper()):
			result += chr((ord(char) + s - 65) % 26 + 65)
		elif (char.islower()):
			result += chr((ord(char) + s - 97) % 26 + 97) 
		else:
			result += " " 
	return result
def clear(): 
    if os.name == 'nt': 
        os.system('cls') 
    else: 
        os.system('clear')

def banner():
	print ('''
	        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
	        X                            ___                             ___                                  X
	        X    \  / \  / \  / \  /    |      _    _  __   _    _      |       _       _  _                  X
	        X     \/   \/   \/   \/     |     /_\  |_ |__  /_\  |_|  -- |    O |_| |_| |_ |_|                 X
	        X     /\   /\   /\   /\     |___ /   \ |_  __|/   \ |\      |___ | |   | | |_ |\                  X
	        X    /  \ /  \ /  \ /  \                                                      -- script-beast     X
	        X                                                                                                 X
	        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
	''')

def en():
	print ("\n\n\n")
	te = str(input("Enter the Message : "))
	ro = int(input("Enter the number  : "))
	print ("Your Cipher Text  : " + prog(te,ro) + "\n\n\n")

def de():
	print ("\n\n\n")
	te = str(input("Enter the Cipher  : "))
	ro = int(input("Enter the number  : "))
	print ("Your Message      : " + prog(te,26 - ro) + "\n\n\n")
	
def work():
	print ('''
              Encrypt  :
                       Enter the text to be encrypt.
                       Enter the number (for rotation).
                       Get the Chipher ...............
	 
	 
              Dencrypt :
                       Enter the chipher to be dencrypt.
                       Enter the number by it was encrypt.
                       Get Message ....................	  
	
	''')


clear()
banner()

if sys.version_info.major < 3:
	print("Python3 required ")
	sys.exit("Exiting .......... ")

print ("\n\n\n")
print('''
                 Menu : -- 

                                 1. Encrypt 
				 2. Dencrypt
				 3. How to Do  
				 4. Exit
				  
''')
op = str(input(" >>  "))
clear ()
banner()
if (op == '1'):
	en()
elif (op == '2'):
	de()
elif (op == '3'):
	work()
else :
	print ("Good Bye ...........\nHave a nice day..... ")
	time.sleep(5)
	exit()