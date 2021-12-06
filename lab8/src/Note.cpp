#include "../include/Note.h"
#include "string"

using namespace std;

std::string Note::getTitle() {
    return title;
}

void Note::setTitle(std::string titleSet) {
    title = titleSet;
}

void TextNote::setContent(std::string contentSet) {
    content += contentSet;
}

std::string TextNote::getContent() {
    return content;
}

void ListNote::setContent(std::string contentSet) {
    content += contentSet;
}

std::string ListNote::getContent() {
    return content;
}

void NoteDirector::addNote(Note noteToAdd) {
    notesList.push_back(noteToAdd);
}

void NoteDirector::deleteNote() {
    notesList.pop_back();
}

void NoteDirector::editNote(string noteToAdd) {
    unsigned int noLastElement = notesList.size() - 1;
    notesList[noLastElement].setContent(noteToAdd);
}

void NoteDirector::clearNoteList() {
    notesList.clear();
}

