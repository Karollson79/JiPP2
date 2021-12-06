#include "vector"
#include "string"
#ifndef MATRIXCALC_NOTE_H
#define MATRIXCALC_NOTE_H

class Note{
    string title;
public:
    string getTitle();
    void setTitle(string titleSet);
    virtual string getContent() = 0;
    virtual void setContent(string contentSet) = 0;
};

class TextNote : public Note{
    string content;
public:
    string getContent();
    void setContent(string contentSet);
};

class ListNote : public Note{
    string content;
public:
    string getContent();
    void setContent(string contentSet);
};

class NoteDirector : public Note{
    vector <Note> notesList;
public:
    void addNote(Note noteToAdd);
    void deleteNote();
    void editNote(Note noteToEdit);
    void clearNoteList();
};

#endif //MATRIXCALC_NOTE_H
