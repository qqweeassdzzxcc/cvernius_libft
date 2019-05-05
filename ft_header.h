#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t
content_size);

#endif
