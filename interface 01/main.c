#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "functions.h"

void del_mem(void);
void menu(void);
void add_book(void);
void addmem(void);
void delete_book(void);
void borrow_book();
void search_book(int id); //notess 3ashan lma ya5las a5leh yarg3 lluser menu fa lazm ab3at al id lakan ana msh 7ast5dmo feha
void admin (void);
void user(int id);
void overdue(void);
void popular_book (void);
void ret_book(int id);
void new_cpy(void);
int check_id(void);
void new_save(void);
void del_save(void);
void curr_mem(void);
void show_list(void);
void search_double(int id);//notess
void search_bookauthor(int id);//notess
void search_bookcatg(int id);//notess
void search_bookisbn(int id);//notess
void search_booktitle(int id);//notess

int main()
{
    curr_mem();
    menu();
    return 0;
}
