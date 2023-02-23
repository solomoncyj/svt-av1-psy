/*
* Copyright(c) 2019 Intel Corporation
*
* This source code is subject to the terms of the BSD 2 Clause License and
* the Alliance for Open Media Patent License 1.0. If the BSD 2 Clause License
* was not distributed with this source code in the LICENSE file, you can
* obtain it at https://www.aomedia.org/license/software-license. If the Alliance for Open
* Media Patent License 1.0 was not distributed with this source code in the
* PATENTS file, you can obtain it at https://www.aomedia.org/license/patent-license.
*/

#include "EbSvtAv1Enc.h"
#include "EbAppConfig.h"

/********************************
 * External Function
 ********************************/
extern EbErrorType init_encoder(EbConfig *app_cfg, EbConfig *callback_data, uint32_t instance_idx);

extern EbErrorType de_init_encoder(EbConfig *callback_data_ptr, uint32_t instance_index);
