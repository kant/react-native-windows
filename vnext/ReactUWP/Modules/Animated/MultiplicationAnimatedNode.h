// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "ValueAnimatedNode.h"
#include <folly/dynamic.h>

namespace react { namespace uwp {
  class MultiplicationAnimatedNode : public ValueAnimatedNode
  {
  public:
    MultiplicationAnimatedNode(int64_t tag, const folly::dynamic& config, const std::shared_ptr<NativeAnimatedNodeManager>& manager);

  private:
    std::unordered_set<int64_t> m_inputNodes{};
  };
} }