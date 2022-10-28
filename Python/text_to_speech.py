
from gtts import gTTS
import os

'''
text to speech code in oython 
'''
def main():
    try:
        Script= input("Enter Filename to ReadFrom (With Extension): ")
        file = open(Script)
        text = file.read()
        a= ''
        language = 'en'
        b = int(input("which accent do you want? \n 1) India \n 2) America \n 3) British \n 4)Australia \n 5) Canadian \n 6) Irish \n 7) South African \n 8) Spanish \n 9) French \n\n(Select the number corresponding): "))

        if b == 1:
            a = 'com.in'
        elif b == 2:
            a = 'com'
        elif b == 3:
            a = 'co.uk'
        elif b == 4:
            a = 'co.au'
        elif b == 5:
            a = 'ca'
        elif b == 6:
            a = 'ie'
        elif b == 7:
            a = 'co.za'
        elif b == 8:
            a = 'es'
        elif b ==9:
            a = 'fr'

        obj= gTTS(text=text, lang=language, slow=False, tld= a )
        Filename= input("Enter Audio Filename to Save (With Extension): ")
        obj.save(Filename)

        os.system("start " + Filename)
    except FileNotFoundError:
        print("File not found or invalid name, Please try again!")
        main()

main()
