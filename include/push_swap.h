/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:17:04 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/15 02:21:21 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

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

void				sort_five(t_stack **stack_a, t_stack **stack_b);
void				sort_four(t_stack **stack_a, t_stack **stack_b);
void				sort_three(t_stack **stack_a);
void				sort_two(t_stack **stack_a);

void				push_add_back(t_stack **head, int value);
void				ft_sort_array(int *array, int size);
void				validate_input(int *array, t_stack *stack_a, int size);
void				sort_small_stack(t_stack *stack_a, t_stack *stack_b,
						int *array, int size);
void				ft_free_list(t_stack *head);

int					is_sorted(int *array, t_stack *stack_a);
int					ft_count_words(char *str, char del);
int					*ft_cton(char *str, int len);
int					*stoa(t_stack **stack_head);
int					ft_lst_size(t_stack *head);
int					ft_find_min(t_stack *stack);
int					ft_find_max(t_stack *stack);
int					is_sorted2(t_stack *stack_a);

char				**ft_split(char const *str, char del);
char				*ft_strdup(const char *str);
char				*ft_substr(char const *str, int start, int len);

void				ft_mstt_4(t_stack **stack_a, int min_value);
void				ft_mstt_5(t_stack **stack_a, int min_value);

void				ft_push_to_stack_b(t_stack **stack_a, t_stack **stack_b,
						int *array, int size_of_stack_a);
void				ft_push_to_stack_a(t_stack **stack_a, t_stack **stack_b,
						int *array, int size);
#endif
