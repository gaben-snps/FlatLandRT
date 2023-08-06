/*
 *  SPDX-FileCopyrightText: Copyright 2023 Julian Amann <dev@vertexwahn.de>
 *  SPDX-License-Identifier: Apache-2.0
 */

#include "imaging/io/io_webp.h"

#include "gmock/gmock.h"

using namespace de_vertexwahn;

TEST(Image, roundtrip_store_load_webp) {
    // Arrange
    Image4b image{2, 2};
    image.set_pixel(0, 0, Color4b{255, 0, 0, 255});
    image.set_pixel(1, 0, Color4b{0, 255, 0, 255});
    image.set_pixel(0, 1, Color4b{0, 0, 255, 255});
    image.set_pixel(1, 1, Color4b{255, 128, 0, 255});

    // Act
    store_webp("test4x4.webp", image);

    // Assert
    auto loaded_image = load_image_webp("test4x4.webp");

    // Expect same size
    EXPECT_THAT(loaded_image->width(), image.width());
    EXPECT_THAT(loaded_image->height(), image.height());

    EXPECT_THAT(loaded_image->get_pixel(0, 0), (Color4b{255, 0, 0, 255}));
    EXPECT_THAT(loaded_image->get_pixel(1, 0), (Color4b{0, 255, 0, 255}));
    EXPECT_THAT(loaded_image->get_pixel(0, 1), (Color4b{0, 0, 255, 255}));
    EXPECT_THAT(loaded_image->get_pixel(1, 1), (Color4b{255, 128, 0, 255}));
}
