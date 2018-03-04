/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb_smooth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 17:09:47 by omiroshn          #+#    #+#             */
/*   Updated: 2018/01/31 17:09:49 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_rgb_smooth(double t, int k)
{
	return (rgb_to_int((int)(9 * k * (1 - t) * t * t * t * 255),
		(int)(15 * k * (1 - t) * (1 - t) * t * t * 255),
		(int)(8.5 * k * (1 - t) * (1 - t) * (1 - t) * t * 255)));
}
