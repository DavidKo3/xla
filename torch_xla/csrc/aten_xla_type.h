#pragma once

#include "torch_xla/csrc/aten_xla_type_base.h"

namespace torch_xla {

// Base ATEN Type class where the XLA specific overrides should be defined.
class AtenXlaType : public AtenXlaTypeBase {
 public:
  AtenXlaType(at::TensorTypeId type_id, bool is_variable, bool is_undefined);

  //////////////////////////////////////////////////////////////////////////////
  // ATEN API ovverrides in alphabetical order.
  /////////////////////////////////////////////////////////////////////////////
  at::Tensor __and__(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor __and__(const at::Tensor& self,
                     const at::Tensor& other) const override;

  at::Tensor& __iand__(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& __iand__(at::Tensor& self,
                       const at::Tensor& other) const override;

  at::Tensor& __ilshift__(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& __ilshift__(at::Tensor& self,
                          const at::Tensor& other) const override;

  at::Tensor& __ior__(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& __ior__(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& __irshift__(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& __irshift__(at::Tensor& self,
                          const at::Tensor& other) const override;

  at::Tensor& __ixor__(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& __ixor__(at::Tensor& self,
                       const at::Tensor& other) const override;

  at::Tensor __lshift__(const at::Tensor& self,
                        at::Scalar other) const override;

  at::Tensor __lshift__(const at::Tensor& self,
                        const at::Tensor& other) const override;

  at::Tensor __or__(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor __or__(const at::Tensor& self,
                    const at::Tensor& other) const override;

  at::Tensor __rshift__(const at::Tensor& self,
                        at::Scalar other) const override;

  at::Tensor __rshift__(const at::Tensor& self,
                        const at::Tensor& other) const override;

  at::Tensor __xor__(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor __xor__(const at::Tensor& self,
                     const at::Tensor& other) const override;

  at::Tensor _adaptive_avg_pool2d(const at::Tensor& self,
                                  at::IntArrayRef output_size) const override;

  at::Tensor _adaptive_avg_pool2d_backward(
      const at::Tensor& grad_output, const at::Tensor& self) const override;

  at::Tensor _cast_Byte(const at::Tensor& self,
                        bool non_blocking) const override;

  at::Tensor _cast_Char(const at::Tensor& self,
                        bool non_blocking) const override;

  at::Tensor _cast_Float(const at::Tensor& self,
                         bool non_blocking) const override;

  at::Tensor _cast_Int(const at::Tensor& self,
                       bool non_blocking) const override;

  at::Tensor _cast_Long(const at::Tensor& self,
                        bool non_blocking) const override;

  at::Tensor _cast_Short(const at::Tensor& self,
                         bool non_blocking) const override;

  at::Tensor _dim_arange(const at::Tensor& like, int64_t dim) const override;

  at::Tensor _log_softmax(const at::Tensor& self, int64_t dim,
                          bool half_to_float) const override;

  at::Tensor _log_softmax_backward_data(const at::Tensor& grad_output,
                                        const at::Tensor& output, int64_t dim,
                                        const at::Tensor& self) const override;

  at::Tensor _s_copy_from(const at::Tensor& self, const at::Tensor& dst,
                          bool non_blocking) const override;

  at::Tensor _softmax(const at::Tensor& self, int64_t dim,
                      bool half_to_float) const override;

  at::Tensor _softmax_backward_data(const at::Tensor& grad_output,
                                    const at::Tensor& output, int64_t dim,
                                    const at::Tensor& self) const override;

  at::Tensor _trilinear(const at::Tensor& i1, const at::Tensor& i2,
                        const at::Tensor& i3, at::IntArrayRef expand1,
                        at::IntArrayRef expand2, at::IntArrayRef expand3,
                        at::IntArrayRef sumdim,
                        int64_t unroll_dim) const override;

  at::Tensor _unsafe_view(const at::Tensor& self,
                          at::IntArrayRef size) const override;

  at::Tensor abs(const at::Tensor& self) const override;

  at::Tensor& abs_(at::Tensor& self) const override;

  at::Tensor acos(const at::Tensor& self) const override;

  at::Tensor& acos_(at::Tensor& self) const override;

  at::Tensor add(const at::Tensor& self, const at::Tensor& other,
                 at::Scalar alpha) const override;

  at::Tensor add(const at::Tensor& self, at::Scalar other,
                 at::Scalar alpha) const override;

  at::Tensor& add_(at::Tensor& self, const at::Tensor& other,
                   at::Scalar alpha) const override;

  at::Tensor& add_(at::Tensor& self, at::Scalar other,
                   at::Scalar alpha) const override;

  at::Tensor addcdiv(const at::Tensor& self, const at::Tensor& tensor1,
                     const at::Tensor& tensor2,
                     at::Scalar value) const override;

  at::Tensor& addcdiv_(at::Tensor& self, const at::Tensor& tensor1,
                       const at::Tensor& tensor2,
                       at::Scalar value) const override;

  at::Tensor addcmul(const at::Tensor& self, const at::Tensor& tensor1,
                     const at::Tensor& tensor2,
                     at::Scalar value) const override;

  at::Tensor& addcmul_(at::Tensor& self, const at::Tensor& tensor1,
                       const at::Tensor& tensor2,
                       at::Scalar value) const override;

  at::Tensor addmm(const at::Tensor& self, const at::Tensor& mat1,
                   const at::Tensor& mat2, at::Scalar beta,
                   at::Scalar alpha) const override;

  at::Tensor alias(const at::Tensor& self) const override;

  at::Tensor all(const at::Tensor& self) const override;

  at::Tensor all(const at::Tensor& self, int64_t dim,
                 bool keepdim) const override;

  at::Tensor any(const at::Tensor& self) const override;

  at::Tensor any(const at::Tensor& self, int64_t dim,
                 bool keepdim) const override;

  at::Tensor arange(at::Scalar end,
                    const at::TensorOptions& options) const override;

  at::Tensor arange(at::Scalar start, at::Scalar end,
                    const at::TensorOptions& options) const override;

  at::Tensor arange(at::Scalar start, at::Scalar end, at::Scalar step,
                    const at::TensorOptions& options) const override;

  at::Tensor argmax(const at::Tensor& self, c10::optional<int64_t> dim,
                    bool keepdim) const override;

  at::Tensor argmin(const at::Tensor& self, c10::optional<int64_t> dim,
                    bool keepdim) const override;

  at::Tensor argsort(const at::Tensor& self, int64_t dim,
                     bool descending) const override;

  at::Tensor as_strided(const at::Tensor& self, at::IntArrayRef size,
                        at::IntArrayRef stride,
                        c10::optional<int64_t> storage_offset) const override;

  at::Tensor& as_strided_(at::Tensor& self, at::IntArrayRef size,
                          at::IntArrayRef stride,
                          c10::optional<int64_t> storage_offset) const override;

  at::Tensor asin(const at::Tensor& self) const override;

  at::Tensor& asin_(at::Tensor& self) const override;

  at::Tensor atan(const at::Tensor& self) const override;

  at::Tensor atan2(const at::Tensor& self,
                   const at::Tensor& other) const override;

  at::Tensor& atan2_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& atan_(at::Tensor& self) const override;

  at::Tensor avg_pool1d(const at::Tensor& self, at::IntArrayRef kernel_size,
                        at::IntArrayRef stride, at::IntArrayRef padding,
                        bool ceil_mode, bool count_include_pad) const override;

  at::Tensor avg_pool2d(const at::Tensor& self, at::IntArrayRef kernel_size,
                        at::IntArrayRef stride, at::IntArrayRef padding,
                        bool ceil_mode, bool count_include_pad) const override;

  at::Tensor avg_pool2d_backward(const at::Tensor& grad_output,
                                 const at::Tensor& self,
                                 at::IntArrayRef kernel_size,
                                 at::IntArrayRef stride,
                                 at::IntArrayRef padding, bool ceil_mode,
                                 bool count_include_pad) const override;

  at::Tensor avg_pool3d(const at::Tensor& self, at::IntArrayRef kernel_size,
                        at::IntArrayRef stride, at::IntArrayRef padding,
                        bool ceil_mode, bool count_include_pad) const override;

  at::Tensor avg_pool3d_backward(const at::Tensor& grad_output,
                                 const at::Tensor& self,
                                 at::IntArrayRef kernel_size,
                                 at::IntArrayRef stride,
                                 at::IntArrayRef padding, bool ceil_mode,
                                 bool count_include_pad) const override;

  at::Tensor bartlett_window(int64_t window_length,
                             const at::TensorOptions& options) const override;
  at::Tensor bartlett_window(int64_t window_length, bool periodic,
                             const at::TensorOptions& options) const override;

  at::Tensor batch_norm(const at::Tensor& input, const at::Tensor& weight,
                        const at::Tensor& bias, const at::Tensor& running_mean,
                        const at::Tensor& running_var, bool training,
                        double momentum, double eps,
                        bool cudnn_enabled) const override;

  at::Tensor bernoulli(const at::Tensor& self, double p,
                       at::Generator* generator) const override;
  at::Tensor bernoulli(const at::Tensor& self,
                       at::Generator* generator) const override;
  at::Tensor& bernoulli_(at::Tensor& self, double p,
                         at::Generator* generator) const override;
  at::Tensor& bernoulli_(at::Tensor& self, const at::Tensor& p,
                         at::Generator* generator) const override;

  at::Tensor bilinear(const at::Tensor& input1, const at::Tensor& input2,
                      const at::Tensor& weight,
                      const at::Tensor& bias) const override;

  at::Tensor binary_cross_entropy_with_logits(const at::Tensor& self,
                                              const at::Tensor& target,
                                              const at::Tensor& weight,
                                              const at::Tensor& pos_weight,
                                              int64_t reduction) const override;

  at::Tensor binary_cross_entropy_with_logits_backward(
      const at::Tensor& grad_output, const at::Tensor& self,
      const at::Tensor& target, const at::Tensor& weight,
      const at::Tensor& pos_weight, int64_t reduction) const override;

  at::Tensor blackman_window(int64_t window_length,
                             const at::TensorOptions& options) const override;
  at::Tensor blackman_window(int64_t window_length, bool periodic,
                             const at::TensorOptions& options) const override;

  at::Tensor bmm(const at::Tensor& self, const at::Tensor& mat2) const override;

  std::vector<at::Tensor> broadcast_tensors(
      at::TensorList tensors) const override;

  at::Tensor cat(at::TensorList tensors, int64_t dim) const override;

  at::Tensor ceil(const at::Tensor& self) const override;

  at::Tensor& ceil_(at::Tensor& self) const override;

  at::Tensor celu(const at::Tensor& self, at::Scalar alpha) const override;

  at::Tensor& celu_(at::Tensor& self, at::Scalar alpha) const override;

  at::Tensor chain_matmul(at::TensorList matrices) const override;

  at::Tensor cholesky(const at::Tensor& self, bool upper) const override;

  at::Tensor clamp(const at::Tensor& self, c10::optional<at::Scalar> min,
                   c10::optional<at::Scalar> max) const override;

  at::Tensor& clamp_(at::Tensor& self, c10::optional<at::Scalar> min,
                     c10::optional<at::Scalar> max) const override;

  at::Tensor clamp_max(const at::Tensor& self, at::Scalar max) const override;

  at::Tensor& clamp_max_(at::Tensor& self, at::Scalar max) const override;

  at::Tensor clamp_min(const at::Tensor& self, at::Scalar min) const override;

  at::Tensor& clamp_min_(at::Tensor& self, at::Scalar min) const override;

  at::Tensor clone(const at::Tensor& self) const override;

  at::Tensor constant_pad_nd(const at::Tensor& self, at::IntArrayRef pad,
                             at::Scalar value) const override;

  at::Tensor contiguous(const at::Tensor& self,
                        at::MemoryFormat memory_format) const override;

  at::Tensor conv2d(const at::Tensor& input, const at::Tensor& weight,
                    const at::Tensor& bias, at::IntArrayRef stride,
                    at::IntArrayRef padding, at::IntArrayRef dilation,
                    int64_t groups) const override;

  at::Tensor conv_transpose2d(const at::Tensor& input, const at::Tensor& weight,
                              const at::Tensor& bias, at::IntArrayRef stride,
                              at::IntArrayRef padding,
                              at::IntArrayRef output_padding, int64_t groups,
                              at::IntArrayRef dilation) const override;

  at::Tensor& copy_(at::Tensor& self, const at::Tensor& src,
                    bool non_blocking) const override;

  at::Tensor cos(const at::Tensor& self) const override;

  at::Tensor& cos_(at::Tensor& self) const override;

  at::Tensor cosh(const at::Tensor& self) const override;

  at::Tensor& cosh_(at::Tensor& self) const override;

  at::Tensor cosine_embedding_loss(const at::Tensor& input1,
                                   const at::Tensor& input2,
                                   const at::Tensor& target, double margin,
                                   int64_t reduction) const override;

  at::Tensor cosine_similarity(const at::Tensor& x1, const at::Tensor& x2,
                               int64_t dim, double eps) const override;

  at::Tensor cross(const at::Tensor& self, const at::Tensor& other,
                   c10::optional<int64_t> dim) const override;

  at::Tensor cumprod(const at::Tensor& self, int64_t dim,
                     at::ScalarType dtype) const override;

  at::Tensor cumprod(const at::Tensor& self, int64_t dim) const override;

  at::Tensor cumsum(const at::Tensor& self, int64_t dim,
                    at::ScalarType dtype) const override;

  at::Tensor cumsum(const at::Tensor& self, int64_t dim) const override;

  at::Tensor diag(const at::Tensor& self, int64_t diagonal) const override;

  at::Tensor diagflat(const at::Tensor& self, int64_t offset) const override;

  at::Tensor diagonal(const at::Tensor& self, int64_t offset, int64_t dim1,
                      int64_t dim2) const override;

  at::Tensor div(const at::Tensor& self,
                 const at::Tensor& other) const override;

  at::Tensor div(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor& div_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& div_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor dot(const at::Tensor& self,
                 const at::Tensor& tensor) const override;

  at::Tensor dropout(const at::Tensor& input, double p,
                     bool train) const override;

  at::Tensor& dropout_(at::Tensor& self, double p, bool train) const override;

  at::Tensor einsum(std::string equation,
                    at::TensorList tensors) const override;

  at::Tensor elu(const at::Tensor& self, at::Scalar alpha, at::Scalar scale,
                 at::Scalar input_scale) const override;

  at::Tensor& elu_(at::Tensor& self, at::Scalar alpha, at::Scalar scale,
                   at::Scalar input_scale) const override;

  at::Tensor elu_backward(const at::Tensor& grad_output, at::Scalar alpha,
                          at::Scalar scale, at::Scalar input_scale,
                          const at::Tensor& output) const override;

  at::Tensor embedding(const at::Tensor& weight, const at::Tensor& indices,
                       int64_t padding_idx, bool scale_grad_by_freq,
                       bool sparse) const override;

  at::Tensor embedding_dense_backward(const at::Tensor& grad_output,
                                      const at::Tensor& indices,
                                      int64_t num_weights, int64_t padding_idx,
                                      bool scale_grad_by_freq) const override;

  at::Tensor empty(at::IntArrayRef size,
                   const at::TensorOptions& options) const override;

  at::Tensor empty_like(const at::Tensor& self) const override;

  at::Tensor empty_like(const at::Tensor& self,
                        const at::TensorOptions& options) const override;

  at::Tensor eq(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor eq(const at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& eq_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& eq_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor erf(const at::Tensor& self) const override;

  at::Tensor& erf_(at::Tensor& self) const override;

  at::Tensor erfc(const at::Tensor& self) const override;

  at::Tensor& erfc_(at::Tensor& self) const override;

  at::Tensor erfinv(const at::Tensor& self) const override;

  at::Tensor& erfinv_(at::Tensor& self) const override;

  at::Tensor exp(const at::Tensor& self) const override;

  at::Tensor& exp_(at::Tensor& self) const override;

  at::Tensor expand(const at::Tensor& self, at::IntArrayRef size,
                    bool implicit) const override;

  at::Tensor expand_as(const at::Tensor& self,
                       const at::Tensor& other) const override;

  at::Tensor expm1(const at::Tensor& self) const override;

  at::Tensor& expm1_(at::Tensor& self) const override;

  at::Tensor eye(int64_t n, const at::TensorOptions& options) const override;

  at::Tensor eye(int64_t n, int64_t m,
                 const at::TensorOptions& options) const override;

  at::Tensor& fill_(at::Tensor& self, at::Scalar value) const override;

  at::Tensor& fill_(at::Tensor& self, const at::Tensor& value) const override;

  at::Tensor flatten(const at::Tensor& self, int64_t start_dim,
                     int64_t end_dim) const override;

  at::Tensor flip(const at::Tensor& self, at::IntArrayRef dims) const override;

  at::Tensor floor(const at::Tensor& self) const override;

  at::Tensor& floor_(at::Tensor& self) const override;

  at::Tensor fmod(const at::Tensor& self,
                  const at::Tensor& other) const override;

  at::Tensor fmod(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor& fmod_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& fmod_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor frac(const at::Tensor& self) const override;

  at::Tensor& frac_(at::Tensor& self) const override;

  at::Tensor frobenius_norm(const at::Tensor& self) const override;

  at::Tensor frobenius_norm(const at::Tensor& self, at::IntArrayRef dim,
                            bool keepdim) const override;

  at::Tensor full(at::IntArrayRef size, at::Scalar fill_value,
                  const at::TensorOptions& options) const override;

  at::Tensor full_like(const at::Tensor& self,
                       at::Scalar fill_value) const override;

  at::Tensor full_like(const at::Tensor& self, at::Scalar fill_value,
                       const at::TensorOptions& options) const override;

  at::Tensor gather(const at::Tensor& self, int64_t dim,
                    const at::Tensor& index, bool sparse_grad) const override;

  at::Tensor ge(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor ge(const at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& ge_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& ge_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor group_norm(const at::Tensor& input, int64_t num_groups,
                        const at::Tensor& weight, const at::Tensor& bias,
                        double eps, bool cudnn_enabled) const override;

  at::Tensor gt(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor gt(const at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& gt_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& gt_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor hamming_window(int64_t window_length,
                            const at::TensorOptions& options) const override;
  at::Tensor hamming_window(int64_t window_length, bool periodic,
                            const at::TensorOptions& options) const override;
  at::Tensor hamming_window(int64_t window_length, bool periodic, double alpha,
                            const at::TensorOptions& options) const override;
  at::Tensor hamming_window(int64_t window_length, bool periodic, double alpha,
                            double beta,
                            const at::TensorOptions& options) const override;
  at::Tensor hann_window(int64_t window_length,
                         const at::TensorOptions& options) const override;
  at::Tensor hann_window(int64_t window_length, bool periodic,
                         const at::TensorOptions& options) const override;

  at::Tensor hardshrink(const at::Tensor& self,
                        at::Scalar lambda) const override;

  at::Tensor hardshrink_backward(const at::Tensor& grad_out,
                                 const at::Tensor& self,
                                 at::Scalar lambda) const override;

  at::Tensor hardtanh(const at::Tensor& self, at::Scalar min_val,
                      at::Scalar max_val) const override;

  at::Tensor& hardtanh_(at::Tensor& self, at::Scalar min_val,
                        at::Scalar max_val) const override;

  at::Tensor hardtanh_backward(const at::Tensor& grad_output,
                               const at::Tensor& self, at::Scalar min_val,
                               at::Scalar max_val) const override;

  at::Tensor hinge_embedding_loss(const at::Tensor& self,
                                  const at::Tensor& target, double margin,
                                  int64_t reduction) const override;

  at::Tensor index(const at::Tensor& self,
                   at::TensorList indices) const override;

  at::Tensor index_add(const at::Tensor& self, int64_t dim,
                       const at::Tensor& index,
                       const at::Tensor& source) const override;

  at::Tensor& index_add_(at::Tensor& self, int64_t dim, const at::Tensor& index,
                         const at::Tensor& source) const override;

  at::Tensor index_copy(const at::Tensor& self, int64_t dim,
                        const at::Tensor& index,
                        const at::Tensor& source) const override;

  at::Tensor& index_copy_(at::Tensor& self, int64_t dim,
                          const at::Tensor& index,
                          const at::Tensor& source) const override;

  at::Tensor index_fill(const at::Tensor& self, int64_t dim,
                        const at::Tensor& index,
                        at::Scalar value) const override;

  at::Tensor index_fill(const at::Tensor& self, int64_t dim,
                        const at::Tensor& index,
                        const at::Tensor& value) const override;

  at::Tensor& index_fill_(at::Tensor& self, int64_t dim,
                          const at::Tensor& index,
                          at::Scalar value) const override;

  at::Tensor& index_fill_(at::Tensor& self, int64_t dim,
                          const at::Tensor& index,
                          const at::Tensor& value) const override;

  at::Tensor index_put(const at::Tensor& self, at::TensorList indices,
                       const at::Tensor& values,
                       bool accumulate) const override;

  at::Tensor& index_put_(at::Tensor& self, at::TensorList indices,
                         const at::Tensor& values,
                         bool accumulate) const override;

  at::Tensor index_select(const at::Tensor& self, int64_t dim,
                          const at::Tensor& index) const override;

  at::Tensor instance_norm(const at::Tensor& input, const at::Tensor& weight,
                           const at::Tensor& bias,
                           const at::Tensor& running_mean,
                           const at::Tensor& running_var, bool use_input_stats,
                           double momentum, double eps,
                           bool cudnn_enabled) const override;

  at::Tensor kl_div(const at::Tensor& self, const at::Tensor& target,
                    int64_t reduction) const override;

  at::Tensor kl_div_backward(const at::Tensor& grad_output,
                             const at::Tensor& self, const at::Tensor& target,
                             int64_t reduction) const override;

  std::tuple<at::Tensor, at::Tensor> kthvalue(const at::Tensor& self, int64_t k,
                                              int64_t dim,
                                              bool keepdim) const override;

  at::Tensor layer_norm(const at::Tensor& input,
                        at::IntArrayRef normalized_shape,
                        const at::Tensor& weight, const at::Tensor& bias,
                        double eps, bool cudnn_enable) const override;

  at::Tensor le(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor le(const at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& le_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& le_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor leaky_relu(const at::Tensor& self,
                        at::Scalar negative_slope) const override;

  at::Tensor& leaky_relu_(at::Tensor& self,
                          at::Scalar negative_slope) const override;

  at::Tensor leaky_relu_backward(const at::Tensor& grad_output,
                                 const at::Tensor& self,
                                 at::Scalar negative_slope) const override;

  at::Tensor linear(const at::Tensor& input, const at::Tensor& weight,
                    const at::Tensor& bias) const override;

  at::Tensor log(const at::Tensor& self) const override;

  at::Tensor log10(const at::Tensor& self) const override;

  at::Tensor& log10_(at::Tensor& self) const override;

  at::Tensor log1p(const at::Tensor& self) const override;

  at::Tensor& log1p_(at::Tensor& self) const override;

  at::Tensor log2(const at::Tensor& self) const override;

  at::Tensor& log2_(at::Tensor& self) const override;

  at::Tensor& log_(at::Tensor& self) const override;

  at::Tensor log_sigmoid(const at::Tensor& self) const override;

  at::Tensor log_sigmoid_backward(const at::Tensor& grad_output,
                                  const at::Tensor& self,
                                  const at::Tensor& buffer) const override;

  std::tuple<at::Tensor, at::Tensor> log_sigmoid_forward(
      const at::Tensor& self) const override;

  at::Tensor log_softmax(const at::Tensor& self, int64_t dim) const override;

  at::Tensor lt(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor lt(const at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& lt_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& lt_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor margin_ranking_loss(const at::Tensor& input1,
                                 const at::Tensor& input2,
                                 const at::Tensor& target, double margin,
                                 int64_t reduction) const override;

  at::Tensor masked_fill(const at::Tensor& self, const at::Tensor& mask,
                         at::Scalar value) const override;

  at::Tensor masked_fill(const at::Tensor& self, const at::Tensor& mask,
                         const at::Tensor& value) const override;

  at::Tensor& masked_fill_(at::Tensor& self, const at::Tensor& mask,
                           at::Scalar value) const override;

  at::Tensor& masked_fill_(at::Tensor& self, const at::Tensor& mask,
                           const at::Tensor& value) const override;

  at::Tensor matmul(const at::Tensor& self,
                    const at::Tensor& other) const override;

  at::Tensor max(const at::Tensor& self,
                 const at::Tensor& other) const override;

  at::Tensor max(const at::Tensor& self) const override;

  std::tuple<at::Tensor, at::Tensor> max(const at::Tensor& self, int64_t dim,
                                         bool keepdim) const override;

  at::Tensor max_pool1d(const at::Tensor& self, at::IntArrayRef kernel_size,
                        at::IntArrayRef stride, at::IntArrayRef padding,
                        at::IntArrayRef dilation,
                        bool ceil_mode) const override;

  at::Tensor max_pool2d(const at::Tensor& self, at::IntArrayRef kernel_size,
                        at::IntArrayRef stride, at::IntArrayRef padding,
                        at::IntArrayRef dilation,
                        bool ceil_mode) const override;

  std::tuple<at::Tensor, at::Tensor> max_pool2d_with_indices(
      const at::Tensor& self, at::IntArrayRef kernel_size,
      at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation,
      bool ceil_mode) const override;

  at::Tensor max_pool3d(const at::Tensor& self, at::IntArrayRef kernel_size,
                        at::IntArrayRef stride, at::IntArrayRef padding,
                        at::IntArrayRef dilation,
                        bool ceil_mode) const override;

  std::tuple<at::Tensor, at::Tensor> max_pool3d_with_indices(
      const at::Tensor& self, at::IntArrayRef kernel_size,
      at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation,
      bool ceil_mode) const override;

  at::Tensor max_pool2d_with_indices_backward(
      const at::Tensor& grad_output, const at::Tensor& self,
      at::IntArrayRef kernel_size, at::IntArrayRef stride,
      at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode,
      const at::Tensor& indices) const override;

  at::Tensor max_pool3d_with_indices_backward(
      const at::Tensor& grad_output, const at::Tensor& self,
      at::IntArrayRef kernel_size, at::IntArrayRef stride,
      at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode,
      const at::Tensor& indices) const override;

  at::Tensor mean(const at::Tensor& self, at::ScalarType dtype) const override;

  at::Tensor mean(const at::Tensor& self) const override;

  at::Tensor mean(const at::Tensor& self, at::IntArrayRef dim, bool keepdim,
                  at::ScalarType dtype) const override;

  at::Tensor mean(const at::Tensor& self, at::IntArrayRef dim,
                  bool keepdim) const override;

  at::Tensor mean(const at::Tensor& self, at::IntArrayRef dim,
                  at::ScalarType dtype) const override;

  std::vector<at::Tensor> meshgrid(at::TensorList tensors) const override;

  at::Tensor min(const at::Tensor& self,
                 const at::Tensor& other) const override;

  at::Tensor min(const at::Tensor& self) const override;

  std::tuple<at::Tensor, at::Tensor> min(const at::Tensor& self, int64_t dim,
                                         bool keepdim) const override;

  at::Tensor mm(const at::Tensor& self, const at::Tensor& mat2) const override;

  at::Tensor mul(const at::Tensor& self,
                 const at::Tensor& other) const override;

  at::Tensor mul(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor& mul_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& mul_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor narrow(const at::Tensor& self, int64_t dim, int64_t start,
                    int64_t length) const override;

  at::Tensor narrow_copy(const at::Tensor& self, int64_t dim, int64_t start,
                         int64_t length) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> native_batch_norm(
      const at::Tensor& input, const at::Tensor& weight, const at::Tensor& bias,
      const at::Tensor& running_mean, const at::Tensor& running_var,
      bool training, double momentum, double eps) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> native_batch_norm_backward(
      const at::Tensor& grad_out, const at::Tensor& input,
      const at::Tensor& weight, const at::Tensor& running_mean,
      const at::Tensor& running_var, const at::Tensor& save_mean,
      const at::Tensor& save_invstd, bool train, double eps,
      std::array<bool, 3> output_mask) const override;

  at::Tensor ne(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor ne(const at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor& ne_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor& ne_(at::Tensor& self, const at::Tensor& other) const override;

  at::Tensor neg(const at::Tensor& self) const override;

  at::Tensor& neg_(at::Tensor& self) const override;

  at::Tensor nll_loss(const at::Tensor& self, const at::Tensor& target,
                      const at::Tensor& weight, int64_t reduction,
                      int64_t ignore_index) const override;

  at::Tensor nll_loss_backward(const at::Tensor& grad_output,
                               const at::Tensor& self, const at::Tensor& target,
                               const at::Tensor& weight, int64_t reduction,
                               int64_t ignore_index,
                               const at::Tensor& total_weight) const override;

  std::tuple<at::Tensor, at::Tensor> nll_loss_forward(
      const at::Tensor& self, const at::Tensor& target,
      const at::Tensor& weight, int64_t reduction,
      int64_t ignore_index) const override;

  at::Tensor norm(const at::Tensor& self, c10::optional<at::Scalar> p,
                  at::ScalarType dtype) const override;

  at::Tensor norm(const at::Tensor& self, at::Scalar p) const override;

  at::Tensor norm(const at::Tensor& self, c10::optional<at::Scalar> p,
                  at::IntArrayRef dim, bool keepdim,
                  at::ScalarType dtype) const override;

  at::Tensor norm(const at::Tensor& self, c10::optional<at::Scalar> p,
                  at::IntArrayRef dim, bool keepdim) const override;

  at::Tensor nuclear_norm(const at::Tensor& self, bool keepdim) const override;

  int64_t numel(const at::Tensor& self) const override;

  at::Tensor ones(at::IntArrayRef size,
                  const at::TensorOptions& options) const override;

  at::Tensor ones_like(const at::Tensor& self) const override;

  at::Tensor ones_like(const at::Tensor& self,
                       const at::TensorOptions& options) const override;

  at::Tensor pairwise_distance(const at::Tensor& x1, const at::Tensor& x2,
                               double p, double eps,
                               bool keepdim) const override;

  at::Tensor permute(const at::Tensor& self,
                     at::IntArrayRef dims) const override;

  at::Tensor pixel_shuffle(const at::Tensor& self,
                           int64_t upscale_factor) const override;

  at::Tensor pinverse(const at::Tensor& self, double rcond) const override;

  at::Tensor pow(const at::Tensor& self, at::Scalar exponent) const override;

  at::Tensor pow(const at::Tensor& self,
                 const at::Tensor& exponent) const override;

  at::Tensor pow(at::Scalar self, const at::Tensor& exponent) const override;

  at::Tensor& pow_(at::Tensor& self, at::Scalar exponent) const override;

  at::Tensor& pow_(at::Tensor& self, const at::Tensor& exponent) const override;

  at::Tensor prod(const at::Tensor& self, at::ScalarType dtype) const override;

  at::Tensor prod(const at::Tensor& self) const override;

  at::Tensor prod(const at::Tensor& self, int64_t dim, bool keepdim,
                  at::ScalarType dtype) const override;

  at::Tensor prod(const at::Tensor& self, int64_t dim,
                  bool keepdim) const override;

  at::Tensor prod(const at::Tensor& self, int64_t dim,
                  at::ScalarType dtype) const override;

  std::tuple<at::Tensor, at::Tensor> qr(const at::Tensor& self) const override;

  at::Tensor randperm(int64_t n,
                      const at::TensorOptions& options) const override;
  at::Tensor randperm(int64_t n, at::Generator* generator,
                      const at::TensorOptions& options) const override;

  at::Tensor reciprocal(const at::Tensor& self) const override;

  at::Tensor& reciprocal_(at::Tensor& self) const override;

  at::Tensor relu(const at::Tensor& self) const override;

  at::Tensor& relu_(at::Tensor& self) const override;

  at::Tensor remainder(const at::Tensor& self,
                       const at::Tensor& other) const override;

  at::Tensor remainder(const at::Tensor& self, at::Scalar other) const override;

  at::Tensor& remainder_(at::Tensor& self,
                         const at::Tensor& other) const override;

  at::Tensor& remainder_(at::Tensor& self, at::Scalar other) const override;

  at::Tensor repeat(const at::Tensor& self,
                    at::IntArrayRef repeats) const override;

  at::Tensor reshape(const at::Tensor& self,
                     at::IntArrayRef shape) const override;

  at::Tensor rsqrt(const at::Tensor& self) const override;

  at::Tensor& rsqrt_(at::Tensor& self) const override;

  at::Tensor rsub(const at::Tensor& self, const at::Tensor& other,
                  at::Scalar alpha) const override;

  at::Tensor rsub(const at::Tensor& self, at::Scalar other,
                  at::Scalar alpha) const override;

  at::Tensor& s_copy_(at::Tensor& self, const at::Tensor& src,
                      bool non_blocking) const override;

  at::Tensor scatter(const at::Tensor& self, int64_t dim,
                     const at::Tensor& index,
                     const at::Tensor& src) const override;

  at::Tensor scatter(const at::Tensor& self, int64_t dim,
                     const at::Tensor& index, at::Scalar value) const override;

  at::Tensor& scatter_(at::Tensor& self, int64_t dim, const at::Tensor& index,
                       const at::Tensor& src) const override;

  at::Tensor& scatter_(at::Tensor& self, int64_t dim, const at::Tensor& index,
                       at::Scalar value) const override;

  at::Tensor select(const at::Tensor& self, int64_t dim,
                    int64_t index) const override;

  at::Tensor selu(const at::Tensor& self) const override;

  at::Tensor& selu_(at::Tensor& self) const override;

  at::Tensor sigmoid(const at::Tensor& self) const override;

  at::Tensor& sigmoid_(at::Tensor& self) const override;

  at::Tensor sigmoid_backward(const at::Tensor& grad_output,
                              const at::Tensor& output) const override;

  at::Tensor sign(const at::Tensor& self) const override;

  at::Tensor& sign_(at::Tensor& self) const override;

  at::Tensor sin(const at::Tensor& self) const override;

  at::Tensor& sin_(at::Tensor& self) const override;

  at::Tensor sinh(const at::Tensor& self) const override;

  at::Tensor& sinh_(at::Tensor& self) const override;

  int64_t size(const at::Tensor& self, int64_t dim) const override;

  at::Tensor slice(const at::Tensor& self, int64_t dim, int64_t start,
                   int64_t end, int64_t step) const override;

  at::Tensor smooth_l1_loss(const at::Tensor& self, const at::Tensor& target,
                            int64_t reduction) const override;

  at::Tensor smooth_l1_loss_backward(const at::Tensor& grad_output,
                                     const at::Tensor& self,
                                     const at::Tensor& target,
                                     int64_t reduction) const override;

  at::Tensor softmax(const at::Tensor& self, int64_t dim) const override;

  at::Tensor softplus(const at::Tensor& self, at::Scalar beta,
                      at::Scalar threshold) const override;

  at::Tensor softplus_backward(const at::Tensor& grad_output,
                               const at::Tensor& self, at::Scalar beta,
                               at::Scalar threshold,
                               const at::Tensor& output) const override;

  at::Tensor softshrink(const at::Tensor& self,
                        at::Scalar lambda) const override;

  at::Tensor softshrink_backward(const at::Tensor& grad_output,
                                 const at::Tensor& self,
                                 at::Scalar lambda) const override;

  std::tuple<at::Tensor, at::Tensor> sort(const at::Tensor& self, int64_t dim,
                                          bool descending) const override;

  std::vector<at::Tensor> split(const at::Tensor& self, int64_t split_size,
                                int64_t dim) const override;

  std::vector<at::Tensor> split_with_sizes(const at::Tensor& self,
                                           at::IntArrayRef split_sizes,
                                           int64_t dim) const override;

  at::Tensor sqrt(const at::Tensor& self) const override;

  at::Tensor& sqrt_(at::Tensor& self) const override;

  at::Tensor squeeze(const at::Tensor& self) const override;

  at::Tensor squeeze(const at::Tensor& self, int64_t dim) const override;

  at::Tensor& squeeze_(at::Tensor& self) const override;

  at::Tensor& squeeze_(at::Tensor& self, int64_t dim) const override;

  at::Tensor stack(at::TensorList tensors, int64_t dim) const override;

  at::Tensor sub(const at::Tensor& self, const at::Tensor& other,
                 at::Scalar alpha) const override;

  at::Tensor sub(const at::Tensor& self, at::Scalar other,
                 at::Scalar alpha) const override;

  at::Tensor& sub_(at::Tensor& self, const at::Tensor& other,
                   at::Scalar alpha) const override;

  at::Tensor& sub_(at::Tensor& self, at::Scalar other,
                   at::Scalar alpha) const override;

  at::Tensor sum(const at::Tensor& self, at::ScalarType dtype) const override;

  at::Tensor sum(const at::Tensor& self) const override;

  at::Tensor sum(const at::Tensor& self, at::IntArrayRef dim, bool keepdim,
                 at::ScalarType dtype) const override;

  at::Tensor sum(const at::Tensor& self, at::IntArrayRef dim,
                 bool keepdim) const override;

  at::Tensor sum(const at::Tensor& self, at::IntArrayRef dim,
                 at::ScalarType dtype) const override;

  at::Tensor sum_to_size(const at::Tensor& self,
                         at::IntArrayRef size) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> svd(
      const at::Tensor& self, bool some, bool compute_uv) const override;

  std::tuple<at::Tensor, at::Tensor> symeig(const at::Tensor& self,
                                            bool eigenvectors,
                                            bool upper) const override;

  at::Tensor t(const at::Tensor& self) const override;

  at::Tensor& t_(at::Tensor& self) const override;

  at::Tensor tan(const at::Tensor& self) const override;

  at::Tensor& tan_(at::Tensor& self) const override;

  at::Tensor tanh(const at::Tensor& self) const override;

  at::Tensor& tanh_(at::Tensor& self) const override;

  at::Tensor tanh_backward(const at::Tensor& grad_output,
                           const at::Tensor& output) const override;

  at::Tensor tensordot(const at::Tensor& self, const at::Tensor& other,
                       at::IntArrayRef dims_self,
                       at::IntArrayRef dims_other) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> thnn_conv2d_backward(
      const at::Tensor& grad_output, const at::Tensor& self,
      const at::Tensor& weight, at::IntArrayRef kernel_size,
      at::IntArrayRef stride, at::IntArrayRef padding, const at::Tensor& finput,
      const at::Tensor& fgrad_input,
      std::array<bool, 3> output_mask) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> thnn_conv2d_forward(
      const at::Tensor& self, const at::Tensor& weight,
      at::IntArrayRef kernel_size, const at::Tensor& bias,
      at::IntArrayRef stride, at::IntArrayRef padding) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> thnn_conv_transpose2d_backward(
      const at::Tensor& grad_output, const at::Tensor& self,
      const at::Tensor& weight, at::IntArrayRef kernel_size,
      at::IntArrayRef stride, at::IntArrayRef padding,
      at::IntArrayRef output_padding, at::IntArrayRef dilation,
      const at::Tensor& columns, const at::Tensor& ones,
      std::array<bool, 3> output_mask) const override;

  std::tuple<at::Tensor, at::Tensor, at::Tensor> thnn_conv_transpose2d_forward(
      const at::Tensor& self, const at::Tensor& weight,
      at::IntArrayRef kernel_size, const at::Tensor& bias,
      at::IntArrayRef stride, at::IntArrayRef padding,
      at::IntArrayRef output_padding, at::IntArrayRef dilation) const override;

  at::Tensor threshold(const at::Tensor& self, at::Scalar threshold,
                       at::Scalar value) const override;

  at::Tensor& threshold_(at::Tensor& self, at::Scalar threshold,
                         at::Scalar value) const override;

  at::Tensor threshold_backward(const at::Tensor& grad_output,
                                const at::Tensor& self,
                                at::Scalar threshold) const override;

  std::tuple<at::Tensor, at::Tensor> topk(const at::Tensor& self, int64_t k,
                                          int64_t dim, bool largest,
                                          bool sorted) const override;

  at::Tensor trace(const at::Tensor& self) const override;

  std::tuple<at::Tensor, at::Tensor> triangular_solve(
      const at::Tensor& b, const at::Tensor& A, bool upper, bool transpose,
      bool unitriangular) const override;

  at::Tensor one_hot(const at::Tensor& self,
                     int64_t num_classes) const override;

  at::Tensor transpose(const at::Tensor& self, int64_t dim0,
                       int64_t dim1) const override;

  at::Tensor& transpose_(at::Tensor& self, int64_t dim0,
                         int64_t dim1) const override;

  at::Tensor tril(const at::Tensor& self, int64_t diagonal) const override;

  at::Tensor& tril_(at::Tensor& self, int64_t diagonal) const override;

  at::Tensor triplet_margin_loss(const at::Tensor& anchor,
                                 const at::Tensor& positive,
                                 const at::Tensor& negative, double margin,
                                 double p, double eps, bool swap,
                                 int64_t reduction) const override;

  at::Tensor triu(const at::Tensor& self, int64_t diagonal) const override;

  at::Tensor& triu_(at::Tensor& self, int64_t diagonal) const override;

  at::Tensor trunc(const at::Tensor& self) const override;

  at::Tensor& trunc_(at::Tensor& self) const override;

  std::vector<at::Tensor> unbind(const at::Tensor& self,
                                 int64_t dim) const override;

  at::Tensor unsqueeze(const at::Tensor& self, int64_t dim) const override;

  at::Tensor& unsqueeze_(at::Tensor& self, int64_t dim) const override;

  at::Tensor view(const at::Tensor& self, at::IntArrayRef size) const override;

  at::Tensor view_as(const at::Tensor& self,
                     const at::Tensor& other) const override;

  at::Tensor where(const at::Tensor& condition, const at::Tensor& self,
                   const at::Tensor& other) const override;

  at::Tensor& zero_(at::Tensor& self) const override;

  at::Tensor zeros(at::IntArrayRef size,
                   const at::TensorOptions& options) const override;

  at::Tensor zeros_like(const at::Tensor& self) const override;

  at::Tensor zeros_like(const at::Tensor& self,
                        const at::TensorOptions& options) const override;

  static void InitializeAtenBindings();
};

}  // namespace torch_xla
