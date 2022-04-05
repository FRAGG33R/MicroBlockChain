/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Block.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:07:56 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 23:09:45 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Block.hpp"

Block::Block()
{
    this->_Nonce = -1;
    this->_Data = std::string();
    this->_Hash = std::string();
    this->_Index = -1;
    this->_Time = time(nullptr);
}

Block::Block(size_t Index, const std::string &Data)
{
    this->_Index = Index;
    this->_Data = Data;
    this->_Nonce = 0;
    this->_Hash = std::string();
    this->_Time = time(nullptr);
}

std::string Block::getHash( void )
{
    return this->_Hash;
}

void    Block::MainBlock(size_t NDifficulty)
{
    char str[NDifficulty + 1];
    size_t i = 0;
    for (; i < NDifficulty;  i++)
        str[i] = '0';
    str[i] = '\0';
    do
    {
        _Nonce++;
        _Hash = CalculateHash();
    } while (_Hash.substr(0, NDifficulty) != str);
    
    std::cout << "\033[0;36mBlock Mined : \033[0m" << this->_Hash << std::endl;
}

inline std::string Block::CalculateHash() const 
{
    std::stringstream Mystream;
    Mystream << this->_Index << this->_Data << this->_Nonce << this->_PrevHash;
    return (sha256(Mystream.str()));
}