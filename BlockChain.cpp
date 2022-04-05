#include "BlockChain.hpp"

BlockChain::BlockChain()
{
    _Chain.__emplace_back(Block(0, "Genesis Block"));
    this->Difficulty = 5;
}

Block BlockChain::_GetlastBlock( void )
{
    return (this->_Chain.back());
}

void    BlockChain::AddBlock(Block NewBlock)
{
    NewBlock._PrevHash = _GetlastBlock().getHash();
    NewBlock.MainBlock(this->Difficulty);
    this->_Chain.push_back(NewBlock);
}