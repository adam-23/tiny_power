"""A small power application built using Tk."""
"""Not preferred because it's ugly."""

#!/usr/bin/python3

import tkinter as tk
# from subprocess import call
import os
# Tkinter application that runs a tiny bash script, intended for use
# with a standalone minimalist window manager

"""
tkinter window, needs 3 components.
power button
restart button
wm_class set to the value 'spa'
"""


class Application(tk.Frame):
    """Master app window."""

    def __init__(self, master=None):
        """Initialize."""
        super().__init__(master)
        self.pack()
        self.create_widgets()

    def powerDown(self):
        """Bash power down command."""
        os.system('shutdown -h now')

    def reboot(self):
        """Bash restart command."""
        os.system('shutdown -r now')

    def create_widgets(self):
        """Make widget."""
        self.powerOff = tk.Button(self, command=self.powerDown)
        self.powerOff["text"] = "Power Off"
        self.powerOff.pack(side="left")

        self.restartButton = tk.Button(self, command=self.reboot)
        self.restartButton["text"] = "Restart"
        self.restartButton.pack(side="right")


root = tk.Tk()
app = Application(master=root)
app.mainloop()
