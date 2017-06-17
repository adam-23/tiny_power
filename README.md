I started this project by wanting to create a very simplified and customized GUI widget. 
This has been my first real success at a GUI application. 

I initially started programming in Python, so I figured I would start there as my first attempt.
I use Linux, and I really enjoy learning terminal commands so I quickly picked up the command 
    
    shutdown -h now

in order to shutdown my device, and 
    
    shutdown -r now

in order to restart it. 

All I needed to do was create a python GUI interface that connected those above commands 
to a button touch event. I quickly repurposed some Stack code from a Tkinter application
for a basic Hello World program in Python and this was the result. Since I use a Linux 
desktop based on the X11 display manager, Tkinter windows look ugly. No real way around that.
So I decided to find an alternative. 

![Alt text](https://github.com/adam-23/tiny_power/blob/master/tk_screenshot.png)

My brother recommended the Qt interface. It seemed like a decent GUI. There was a graphical
app for it caled Qt Creator that I used to get a basic start. Only problem was when I looked
at the resulting widget code, it was in C++. I didn't know any C++. But I figured I'd give
it a go. I was able to find (again on Stack) a way of inserting my two bash commands 
directly into the C++ instructions. I had to ask a buddy for help turning the header,
sources, and UI file into a compiled and runnable program, but I have a basic handle on it 
now. 

Once all that was completed, I was able to map the executable C++ file to run whenever my
power key is pressed. After a bit of resizing and unit testing, it worked! And it 
looked much better too.

![Alt text](https://github.com/adam-23/tiny_power/blob/master/qt_screenshot.png)

Feel free to use this if you need. The python code was created in Python 3 with 
Tkinter, and the C++ using Qt Creator. I've included the basic files here. To use the 
python version, just run

    python3 py_tiny_power.py

and for the C++ version, you will need to compile the file using 

    qmake

then 
    
    make

and then you can run the resulting program using 

    ./tiny-power

