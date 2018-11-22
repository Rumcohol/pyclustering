/**
*
* Copyright (C) 2014-2018    Andrei Novikov (pyclustering@yandex.ru)
*
* GNU_PUBLIC_LICENSE
*   pyclustering is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   pyclustering is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/


#include "interface/elbow_interface.h"


pyclustering_package * elbow_method_ikpp(const pyclustering_package * const p_sample, 
                                         const std::size_t p_kmin, 
                                         const std::size_t p_kmax)
{
    return elbow_method<ccore::clst::kmeans_plus_plus>(p_sample, p_kmin, p_kmax);
}


pyclustering_package * elbow_method_irnd(const pyclustering_package * const p_sample, 
                                         const std::size_t p_kmin, 
                                         const std::size_t p_kmax)
{
    return elbow_method<ccore::clst::random_center_initializer>(p_sample, p_kmin, p_kmax);
}