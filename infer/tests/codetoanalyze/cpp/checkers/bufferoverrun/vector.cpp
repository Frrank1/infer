/*
 * Copyright (c) 2017 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
#include <vector>

void FN_out_of_bound_Bad(std::vector<int> v) {
  unsigned int n = v.size();
  v[n] = 1;
}
