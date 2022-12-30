# **Microblockchain**

This is a C++ implementation of a microblockchain, designed for educational and experimental purposes. The microblockchain includes the basic components of a blockchain, such as blocks, transactions, and a proof-of-work mechanism for mining new blocks.

## **Building and Running**

To build and run the microblockchain, you will need a C++ compiler.

1. Clone or download the repository to your local machine.
2. Navigate to the root directory of the repository in a terminal.
3. Build the program by running **`make`**.
4. Run the program by executing **`./main`**.

## **Example Output**

```
Mining block 1...
Block mined: 000000061d78d0f2bdd1a9f9c3a3e24fc4b5a44cf5d5bb5cd5d5a1c9e6e8b6a
Block 1 Data
Mining block 2...
Block mined: 00000003e3bbb80d9f9cc9e918d2ed1a7e6c5068c39b1e119f23e077d6b9e86
Block 2 Data
Mining block 3...
Block mined: 000000000019d6689c085ae165831e934ff763ae46a2a6c172b3f1b60a8ce26f
Block 3 Data

```

## **Files**

The repository contains the following files:

- **`main.cpp`** - the main program file that creates a new blockchain and mines three blocks.
- **`BlockChain.hpp`** - the header file for the **`BlockChain`** class, which represents the blockchain and contains methods for adding new blocks.
- **`Block.hpp`** - the header file for the **`Block`** class, which represents a single block in the blockchain.
- **`makefile`** - a makefile to build the program.

## **Dependencies**

The microblockchain depends on the following libraries:

- **`iostream`** - for input/output operations
- **`string`** - for string manipulation
- **`vector`** - for storing the blocks in the blockchain
- `**sha-256**` - for hashing the blocks

## **Future Work**

There are several directions that this microblockchain could be extended in the future:

- Implement a more realistic proof-of-work mechanism for mining blocks.
- Add support for adding transactions to blocks.
- Implement a decentralized network of nodes to support the blockchain.
- Add support for persistently storing the blockchain on disk.
