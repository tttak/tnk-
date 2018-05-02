// NN評価関数の差分計算用のクラス

#ifndef _NN_ACCUMULATOR_H_
#define _NN_ACCUMULATOR_H_

#include "../../shogi.h"

#if defined(EVAL_NN)

#include "nn_architecture.h"

namespace Eval {

namespace NN {

// 入力特徴量をアフィン変換した結果を保持するクラス
// 最終的な出力である評価値も一緒に持たせておく
struct alignas(32) Accumulator {
  std::int16_t
      accumulation[2][kRefreshTriggers.size()][kTransformedFeatureDimensions];
  Value score = VALUE_ZERO;
  bool computed_accumulation = false;
  bool computed_score = false;
};

}  // namespace NN

}  // namespace Eval

#endif  // defined(EVAL_NN)

#endif
