/*
	Copyright 2016 Casainho	casainho@gmail.com

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * app_euc.c
 *
 *  Created on: 18 Nov 2016
 *      Author: casainho
 */

#include "app.h"
#include "imu.h"

void app_euc_start(void)
{
  Imu_Init();
}
