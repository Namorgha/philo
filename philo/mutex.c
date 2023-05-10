/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:21:15 by namorgha          #+#    #+#             */
/*   Updated: 2023/04/28 14:55:33 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	mutex(t_philos *ph)
{
	int				j;

	j = 0;
	pthread_mutex_init(&ph->print, NULL);
	pthread_mutex_init(&ph->data, NULL);
	pthread_mutex_init(&ph->dat, NULL);
	while (j < ph->number_of_philosophers)
	{
		pthread_mutex_init(&ph->fork[j], NULL);
		j++;
	}
}
