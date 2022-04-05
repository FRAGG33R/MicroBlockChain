/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BlockChain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:09:09 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 22:55:41 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BLOCKCHAIN_HPP__
#define __BLOCKCHAIN_HPP__
#include "Block.hpp"
#include <vector>
class BlockChain
{
    private:
        size_t Difficulty;
        std::vector<Block> _Chain;
        Block   _GetlastBlock( void );
    public:
        BlockChain();
        void AddBlock(Block NewBlock);
        ~BlockChain(){};
};
#endif