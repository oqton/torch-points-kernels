

#include "cloud.h"
#include "nanoflann.hpp"
#include <cstdint>
#include <set>

using namespace std;

template <typename scalar_t>
int nanoflann_neighbors(vector<scalar_t>& queries, vector<scalar_t>& supports,
                        vector<int64_t>& neighbors_indices, vector<float>& dists, float radius,
                        int max_num, int mode, bool sorted, int random_seed);

template <typename scalar_t>
int batch_nanoflann_neighbors(vector<scalar_t>& queries, vector<scalar_t>& supports,
                              vector<int64_t>& q_batches, vector<int64_t>& s_batches,
                              vector<int64_t>& neighbors_indices, vector<float>& dists,
                              float radius, int max_num, int mode, bool sorted, int random_seed);

template <typename scalar_t>
void nanoflann_knn_neighbors(vector<scalar_t>& queries, vector<scalar_t>& supports,
                             vector<int64_t>& neighbors_indices, vector<float>& dists, int k);
