#ifndef PROOFOFWORK_H
#define PROOFOFWORK_H

#include <gmp.h>
#include "common.h"

// 工作量证明
class ProofOfWork {
public:
    ProofOfWork(Block* block);
    ~ProofOfWork();

    // 运行挖矿
    pair<long, string> run();
private:
    Block* block;
    mpz_t  target;

    // 调整随机数
    vector<char> prepare_data(long nonce);
};

#endif // PROOFOFWORK_H
