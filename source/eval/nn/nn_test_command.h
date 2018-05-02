// NN評価関数に関するUSI拡張コマンドのインターフェイス

#ifndef _NN_TEST_COMMAND_H_
#define _NN_TEST_COMMAND_H_

#include "../../shogi.h"

#if defined(ENABLE_TEST_CMD) && defined(EVAL_NN)

namespace Eval {

namespace NN {

// NN評価関数に関するUSI拡張コマンド
void TestCommand(Position& pos, std::istream& stream);

}  // namespace NN

}  // namespace Eval

#endif  // defined(EVAL_LEARN) && defined(EVAL_NN)

#endif
