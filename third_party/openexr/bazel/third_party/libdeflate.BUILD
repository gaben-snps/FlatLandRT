# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) Contributors to the OpenEXR Project.

load("@rules_cc//cc:defs.bzl", "cc_library")

licenses(["notice"])

exports_files(
    glob(["lib/**"]) + ["common_defs.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "libdeflate",
    srcs = [
        "common_defs.h",
        "lib/adler32.c",
        "lib/adler32_vec_template.h",
        "lib/arm/adler32_impl.h",
        "lib/arm/cpu_features.c",
        "lib/arm/cpu_features.h",
        "lib/arm/crc32_impl.h",
        "lib/arm/crc32_pmull_helpers.h",
        "lib/arm/crc32_pmull_wide.h",
        "lib/arm/matchfinder_impl.h",
        "lib/bt_matchfinder.h",
        "lib/cpu_features_common.h",
        "lib/crc32.c",
        "lib/crc32_multipliers.h",
        "lib/crc32_tables.h",
        "lib/decompress_template.h",
        "lib/deflate_compress.c",
        "lib/deflate_compress.h",
        "lib/deflate_constants.h",
        "lib/deflate_decompress.c",
        "lib/gzip_compress.c",
        "lib/gzip_constants.h",
        "lib/gzip_decompress.c",
        "lib/hc_matchfinder.h",
        "lib/ht_matchfinder.h",
        "lib/lib_common.h",
        "lib/matchfinder_common.h",
        "lib/utils.c",
        "lib/x86/adler32_impl.h",
        "lib/x86/cpu_features.c",
        "lib/x86/cpu_features.h",
        "lib/x86/crc32_impl.h",
        "lib/x86/crc32_pclmul_template.h",
        "lib/x86/decompress_impl.h",
        "lib/x86/matchfinder_impl.h",
        "lib/zlib_compress.c",
        "lib/zlib_constants.h",
        "lib/zlib_decompress.c",
    ],
    hdrs = ["libdeflate.h"],
    includes = ["."],
    visibility = ["//visibility:public"],
)
