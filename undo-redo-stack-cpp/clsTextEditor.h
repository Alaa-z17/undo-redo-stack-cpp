#pragma once
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

        _currentText = newText; 
    }

   
    void displayText() const {
        cout << "\n-----------------------------\n";
        cout << "Current Text:\n" << (_currentText.empty() ? "[Empty]" : _currentText) << "\n";
        cout << "-----------------------------\n";
    }

 
    void undo() {
        if (!_undoStack.empty()) {
            
            _redoStack.push(_currentText);

        
            _currentText = _undoStack.top();

            _undoStack.pop();

            cout << "\n[System]: Undo performed successfully.\n";
        }
        else {
            cout << "\n[System]: Nothing to undo!\n";
        }
    }

    void redo() {
        if (!_redoStack.empty()) {
         
            _undoStack.push(_currentText);

         
            _currentText = _redoStack.top();

            
            _redoStack.pop();

            cout << "\n[System]: Redo performed successfully.\n";
        }
        else {
            cout << "\n[System]: Nothing to redo!\n";
        }
    }
};