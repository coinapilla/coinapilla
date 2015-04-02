// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_CHECKPOINT_H
#define BITCOIN_CHECKPOINT_H

#include <map>

class uint256;
class CBlocCPLdex;

/** Block-chain checkpoints are compiled-in sanity checks.
 * They are updated every release or three.
 */
namespace Checkpoints
{
    // Returns true if block passes checkpoint checks
    bool CheckBlock(int nHeight, const uint256& hash);

    // Return conservative estimate of total number of blocks, 0 if unknown
    int GetTotalBlocksEstimate();

    // Returns last CBlocCPLdex* in mapBlocCPLdex that is a checkpoint
    CBlocCPLdex* GetLastCheckpoint(const std::map<uint256, CBlocCPLdex*>& mapBlocCPLdex);

    double GuessVerificationProgress(CBlocCPLdex *pindex);
}

#endif
