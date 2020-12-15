#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


enum{sucess,failure};

typedef struct nodes
{
	char key;
	struct node *link;

}node;

typedef struct word_link
{
 	char word[30];
 	char file_name[30];
	int	 count;
	struct word *left_link;
    struct word *down_link;
}words;

int setting_key(node *);
int database_entry(char *,node *);
int word_entry(char *,char *,node *);

int file_check(char *);
int print_database(node *);
int save_database(node *,char *);
int search_database(char *,node *);
int insert_at_last(node **head,char key);
#endif