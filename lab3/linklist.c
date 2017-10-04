#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

tDataNode *FindCmd(tDataNode *head,char *cmd)
{
    if(head == NULL||cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p=head;
    while(p!=NULL)
    {
        if(!strcmp(p->cmd,cmd))
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}
int showAllCmd(tDataNode *head)
{
    printf("menu list:\n");
    tDataNode *p=head;
    while(p!=NULL)
    {
        printf("%s\t- %s\n",p->cmd,p->desc);
        p=p->next;
    }
    return 0;
}
