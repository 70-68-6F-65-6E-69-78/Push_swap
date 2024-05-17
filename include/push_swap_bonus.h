/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 21:31:09 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 03:41:22 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

int					ft_is_sorted(t_stack *stack_a, int *array);
int					*ft_stoa_b(t_stack **stack_a);

void				push(t_stack **from_stack, t_stack **to_stack);
void				pa(t_stack **stack_b, t_stack **stack_a);
void				pb(t_stack **satck_a, t_stack **stack_b);

void				rotate(t_stack **stack);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);

void				reverse_rotate(t_stack **stack);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

void				swap(t_stack **stack);
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);

char				*ft_strjoin(char *remainder1, char *buffer1);
char				*ft_strchr(const char *s, int c);

char				*ft_read_until_nl(int fd, char *remainder);

char				*one_line(char *remainder);

char				*get_remaining(char *remainder);
int					check_duplicates(int *array, int size);

char				*get_next_line(int fd);
int					ft_lst_size_b(t_stack *head);
void				ft_free_list_b(t_stack *head);
void				ft_sort_array_b(int *array, int size);

int					ft_count_words_b(char *str, char del);
int					*ft_cton_b(char *str, int len);
void				push_add_back_b(t_stack **head, int value);

char				**free_memory_b(char **str);
char				**split_words_b(char **ptr, const char *str, char del);
char				**ft_split_b(char const *str, char del);
int					ft_count_words_b(char *str, char del);
int					ft_strlen_b(const char *str);
char				*ft_strdup_b(const char *str);
char				*ft_substr_b(char const *str, int start, int len);

int					ft_strcmp(char *s1, char *s2);

int					ft_strcmp(char *s1, char *s2);
int					checker_1(char *str, t_stack **a, t_stack **b);
void				check_for_errors(int *array, int size, t_stack *stack_a);

#endif