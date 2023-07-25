#ifndef MINISHELL_H
# define MINISHELL_H

#include<stdlib.h>
#include<unistd.h>
#include<limits.h>
#include<stdio.h>
#include<string.h>
#include <readline/readline.h>
#include <readline/history.h>
// #include </Users/nkhachab/Desktop/minishell/minishell2/libft/libft.h>


typedef struct s_env
{
	char *key;
	char *data;
	struct s_env *next;

} t_env;

typedef struct s_list
{
	char			**file_name;
	char			**commandes;
	char			**type;
	struct s_list	*next;
}	t_list;

char	*ft_strjoin(char const *s1, char const *s2);
t_env	*ft_lstnew_env(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		len_env(char **en);
t_env	*ft_last_env(t_env **list);
int		ft_strcmp(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_add_back_env(t_env **lst, t_env *new);
char	**ft_split(const char *s, char c);
void    export(t_env *lst, char **ag);
void 	ft_exit();
int 	exist_key(t_env *lst, char *str);
void	print_env(t_env *lst);
char	**array_env(char **env, int j);
void	print_export(t_env *lst);
void env_func(t_env *lst, char **env);
void	__echo__(t_list *cmd);

#endif