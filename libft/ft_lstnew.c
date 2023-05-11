#include "libft.h"
t_list  *ft_lstnew(void *content)
{
    t_list   *node;

    if(!(node = (t_list*)malloc(sizeof(*node))))
        return (NULL);
    node->content = content;
    node->next = NULL;
    return(node);
}