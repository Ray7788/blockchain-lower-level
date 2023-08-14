blockchain-python
=====
A simplified blockchain implementation in C++
-----

# Project Description
This is a C++ implementation of a blockchain, aiming to provide a deep dive into the inner workings of a blockchain system. Inspired by the original "Building Blockchain in Go" series by Jeiwan, this project seeks to offer a similar educational resource, but in the C++ programming language. The implementation will cover key blockchain concepts in a practical and detailed manner.

# Catalog
## Part 1: Basic Prototype
The Basic Prototype sets the foundation. We build upon it with an emphasis on core blockchain concepts, including block and chain creation, and introduce necessary components for an operational blockchain.

## Part 2: Proof-of-Work
In the original project, the Proof of Work (PoW) algorithm is introduced. Our expanded version provides a detailed breakdown of PoW, including its role in securing the blockchain and practical mining instructions.

## Part 3: Persistence and CLI
Persistence and the Command Line Interface (CLI) are crucial components. We delve into data storage and retrieval, offering an improved CLI for better interaction with the blockchain.

## Part 4: Transactions 1
This segment focuses on basic transaction handling. Our reimplementation covers transaction creation, signing, verification, and inclusion in blocks. It emphasizes transaction security and validation.

## Part 5: Addresses
Jeiwan covers the concept of addresses in this section. In our extended version, we explore address generation and management, providing practical insights into handling various address types securely.

## Part 6: Transactions 2
In the original series, this part discusses advanced transaction handling. We take this further by exploring multi-signature transactions, adding more complexity to the transaction mechanism, and ensuring a robust understanding of transaction processing.

## Part 7: Network
The Network section introduces peer-to-peer networking in the blockchain. In our implementation, we dive deeper into creating a resilient network infrastructure for blockchain communication. It includes the setup of network nodes and message propagation.


## Installation
To begin using our expanded implementation, follow these installation steps:

Clone the repository:
```[]
git clone https://github.com/Ray7788/blockchain-lower-level.git
```
Navigate to the project directory:

```[]
cd blockchain-lower-level
```

## Usage
Start the C++ blockchain node:
```
./blockchain
```
This will initialize a local blockchain node, allowing you to interact with it using the provided command-line interface.

Create a wallet:
```
./wallet create
```
This will generate a public/private key pair for transaction processing.

Send a transaction:


```
./wallet send --recipient <recipient_address> --amount <amount_to_send>
```
Replace <recipient_address> with the recipient's public key and <amount_to_send> with the desired cryptocurrency amount.


# Contributing
If you would like to contribute to this extended reimplementation project, please follow the standard GitHub fork and pull request workflow. We welcome any improvements, bug fixes, or additional features to make this educational blockchain implementation even better.

Copyright: Originally from [blockchain_go](https://github.com/Jeiwan/blockchain_go) by [Jeiwan](https://github.com/Jeiwan)