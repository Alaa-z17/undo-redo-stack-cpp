#pragma once
#include <iostream>
#include <string>
#include "clsStack.h" 

class clsTextEditor {
private:
    string _currentText;             
    clsStack<string> _undoStack;   
    clsStack<string> _redoStack;   

public:
    clsTextEditor() {
        _currentText = "";
    }

 
    void write(const string& newText) {
    
        _undoStack.push(_currentText);

       
        _redoStack.clear();

        _currentText += newText; 
    }

   
    void displayText() const {
        cout << "\n-----------------------------\n";
        cout << "Current Text:\n" << (_currentText.empty() ? "[Empty]" : _currentText) << "\n";
        cout << "-----------------------------\n";
    }

 
    void undo() {
       
    }

    void redo() {
        
    }
};