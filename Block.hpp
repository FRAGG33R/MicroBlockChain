/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Block.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:56:39 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 23:02:30 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BLOCK_HPP__
#define __BLOCK_HPP__
#include <iostream>
#include "sha256.hpp"
#include <cstdint>
#include <vector>
#include <sstream>
#include <string>

class Block
{
    private:
        size_t      _Index;
        size_t      _Nonce;
        std::string _Data;
        std::string _Hash;
        time_t      _Time;
        std::string CalculateHash() const;
    public:
        std::string     _PrevHash;
        std::string     getHash(void );
        void            MainBlock(size_t NDifficulty);
        Block(size_t Index, const std::string &Data);
        Block();
        ~Block(){};
};

#endif